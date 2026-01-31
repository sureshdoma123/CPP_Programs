#include <iostream>
#include <cmath>
#include <iomanip>

namespace {
struct Vec {
	double x;
	double y;
};

constexpr double PI() {
	return std::acos(-1.0);
}

Vec reflect(const Vec &v, const Vec &n) {
	double dot = v.x * n.x + v.y * n.y;
	return {v.x - 2.0 * dot * n.x, v.y - 2.0 * dot * n.y};
}

double cross(const Vec &a, const Vec &b) {
	return a.x * b.y - a.y * b.x;
}

bool evaluate(double thetaDeg, double x, double t, double &result) {
	const double k = PI() / 180.0;
	double theta = thetaDeg * k;
	double alpha = PI() * 0.5 - theta;
	double beta = PI() * 0.5 + theta * 0.25;
	Vec u1{std::cos(alpha), std::sin(alpha)};
	Vec n1{-u1.y, u1.x};
	Vec vin{0.0, 1.0};
	Vec v1 = reflect(vin, n1);
	Vec u2{std::cos(beta), std::sin(beta)};
	double det = cross(v1, u2);
	if (!std::isfinite(det) || std::abs(det) < 1e-12) return false;
	double s = (x * u2.y) / det;
	if (!std::isfinite(s) || s <= 1e-12) return false;
	Vec Q{s * v1.x, 1.0 + s * v1.y};
	Vec n2{-u2.y, u2.x};
	Vec v3 = reflect(v1, n2);
	Vec diff{t - Q.x, -Q.y};
	double crossVal = cross(diff, v3);
	double dot = diff.x * v3.x + diff.y * v3.y;
	if (!std::isfinite(crossVal) || !std::isfinite(dot) || dot <= 0.0) return false;
	result = crossVal;
	return true;
}
}

int main() {
	double x;
	double t;
	if (!(std::cin >> x >> t)) return 0;
	const double lower = 0.1;
	const double upper = 179.9;
	const double step = 0.05;
	double prevAngle = lower;
	double prevValue = 0.0;
	bool prevValid = false;
	double low = lower;
	double high = upper;
	double lowValue = 0.0;
	double highValue = 0.0;
	bool bracketFound = false;
	for (double angle = lower; angle <= upper; angle += step) {
		double value;
		if (!evaluate(angle, x, t, value)) {
			prevValid = false;
			continue;
		}
		if (!prevValid) {
			prevAngle = angle;
			prevValue = value;
			prevValid = true;
			continue;
		}
		if (prevValue == 0.0) {
			low = high = prevAngle;
			lowValue = highValue = prevValue;
			bracketFound = true;
			break;
		}
		if (prevValue * value <= 0.0) {
			low = prevAngle;
			high = angle;
			lowValue = prevValue;
			highValue = value;
			bracketFound = true;
			break;
		}
		prevAngle = angle;
		prevValue = value;
	}
	if (!bracketFound) {
		std::cout << std::fixed << std::setprecision(2) << lower << '\n';
		return 0;
	}
	for (int i = 0; i < 100; ++i) {
		double mid = 0.5 * (low + high);
		double midValue;
		if (!evaluate(mid, x, t, midValue)) {
			double towardHigh = std::nextafter(mid, high);
			if (towardHigh > high) towardHigh = mid;
			if (!evaluate(towardHigh, x, t, midValue)) {
				double towardLow = std::nextafter(mid, low);
				if (towardLow < low) towardLow = mid;
				if (!evaluate(towardLow, x, t, midValue)) break;
				mid = towardLow;
			} else {
				mid = towardHigh;
			}
		}
		if (midValue == 0.0) {
			low = high = mid;
			break;
		}
		if (lowValue * midValue <= 0.0) {
			high = mid;
			highValue = midValue;
		} else {
			low = mid;
			lowValue = midValue;
		}
	}
	double theta = 0.5 * (low + high);
	std::cout << std::fixed << std::setprecision(2) << theta << '\n';
	return 0;
}
