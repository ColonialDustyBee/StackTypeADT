#include "stackADTHeader.h"
#include <iostream>

using namespace std; 

template <typename T>
Stack<T>::Stack() { }; // Constructor
// This might be the only draw back with templates tbh. You have to declare the template EVERY time.
template <typename T>
void Stack<T>::Pop() {
	if (top > 0) {
		top--;
	}
	else {
		cout << "Stack is empty" << endl;
	}
}
template <typename T>
void Stack<T>::Push(T value) {
	items[top] = value;
	top++; // Top increments by 1. Pushes other values out of the way.
}
template <typename T>
bool Stack<T>::isEmpty() const{
	if (top == 0) {
		return true;
	}
	return false;
}
template <typename T> 
bool Stack<T>::Quit() const {
	return true;
}
// Getter // 
template <typename T>
T Stack<T>::GetRecentElement() const{
	return items[top - 1];
}