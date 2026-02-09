#ifndef TEMPLATECHALLENGE_H
#define TEMPLATECHALLENGE_H

template <class T>
class TemplateChallenge {
public:
	TemplateChallenge(T first, T second);

	void swap();
	T getSmaller();
	T getBigger();
	
	T getFirst() const;
	T getSecond() const;
public:
	T first;
	T second;
};

template <class T>
TemplateChallenge<T>::TemplateChallenge(T first, T second) : first(first), second(second) {};

template <class T>
void TemplateChallenge<T>::swap() {
	T temp;
	temp = first;
	first = second;
	second = temp;
}

template <class T>
T TemplateChallenge<T>::getFirst() const{
	return first;
}

template <class T>
T TemplateChallenge<T>::getSecond() const{
	return second;
}

template <class T>
T TemplateChallenge<T>::getBigger() {
	return first > second ? first : second;
}

template <class T>
T TemplateChallenge<T>::getSmaller() {
	return first < second ? first : second;
}

#endif