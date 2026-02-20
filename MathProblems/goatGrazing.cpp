#include <iostream>
#include <cmath>
#include <iomanip>
#include <functional>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    double R;
    double leash;
    double thetaDeg;
    if (!(std::cin >> R >> leash >> thetaDeg)) return 0;
    if (R <= 0.0 || leash <= 0.0) {
        std::cout << std::fixed << std::setprecision(3) << 0.0 << '\n';
        return 0;
    }
    const double b = 0.5;
    const double PI = std::acos(-1.0);
    double theta = thetaDeg * PI / 180.0;
    double cosT = std::cos(theta);
    double sinT = std::sin(theta);
    double xc = R * std::cos(theta);
    double yc = b * std::sin(theta);
    auto slice = [&](double x) {
        if (std::abs(x) > R) return 0.0;
        double ellipseTerm = 1.0 - (x * x) / (R * R);
        if (ellipseTerm <= 0.0) return 0.0;
        double yEllipse = b * std::sqrt(ellipseTerm);
        double dx = x - xc;
        if (std::abs(dx) > leash) return 0.0;
        double circleTerm = 1.0 - (dx * dx) / (leash * leash);
        if (circleTerm < 0.0) circleTerm = 0.0;
        double yCircle = leash * std::sqrt(circleTerm);
        double top = std::min(yEllipse, yc + yCircle);
        double bottom = std::max(-yEllipse, yc - yCircle);
        if (top <= bottom) return 0.0;
        return top - bottom;
    };
    double left = std::max(-R, xc - leash);
    double right = std::min(R, xc + leash);
    if (left >= right) {
        std::cout << std::fixed << std::setprecision(3) << 0.0 << '\n';
        return 0;
    }
    auto simpson = [&](double a, double b) {
        double c = 0.5 * (a + b);
        return (b - a) / 6.0 * (slice(a) + 4.0 * slice(c) + slice(b));
    };
    std::function<double(double, double, double, double, int)> adaptive;
    adaptive = [&](double a, double b, double eps, double whole, int depth) -> double {
        double c = 0.5 * (a + b);
        double leftPart = simpson(a, c);
        double rightPart = simpson(c, b);
        double delta = leftPart + rightPart - whole;
        if (depth >= 20 || std::fabs(delta) <= 15.0 * eps) return leftPart + rightPart + delta / 15.0;
        return adaptive(a, c, eps * 0.5, leftPart, depth + 1) + adaptive(c, b, eps * 0.5, rightPart, depth + 1);
    };
    double whole = simpson(left, right);
    double area = adaptive(left, right, 1e-8, whole, 0);
    if (!std::isfinite(area) || area < 0.0) area = 0.0;
    std::cout << std::fixed << std::setprecision(3) << area << '\n';
    return 0;
}
