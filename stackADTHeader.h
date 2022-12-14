#ifndef STACKADTHEADER_H
#define STACKADTHEADER_H

template <typename T> 
class Stack {
private:
	int top = 0; // Keeps track of length
	T* items = new T[top]; // Allocate memory of T based items 
public:
	Stack(); // Constructor;
	T Pop(); // Simply removes first item on the list. 
	void Push(T); // Gets item and pushes it into the list. 
	bool isEmpty() const;
};
#endif
