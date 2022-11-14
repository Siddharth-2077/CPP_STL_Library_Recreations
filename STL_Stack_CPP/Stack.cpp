
// Stack.cpp - Class definition file

#include "Stack.h"


// Static variable for logging to the console
static int log_index{ 0 };


// CONSTRUCTOR DEFINITION:
template <typename Type>
Stack<Type>::Stack(int Size) : top{ -1 }, size{ Size - 1 } /*Constructor Initialization Lists*/ {

	// Dynamic Memory Allocation for the Stack
	stack = new Type[size];		

	// Debug Logs:
	std::cout << " LOG-" << ++log_index << ": Created a new stack with size = " << Size << std::endl;

	InitializeStack();

	DisplayTopIndex();
	DisplayStack();
}



// PUBLIC MEMBER FUNCTION DEFINITIONS:
template<typename Type>
void Stack<Type>::Push(Type value) {

	if (CanPush()) {
		stack[++top] = value;
		Log_PushedElement(value);

	} else { Log_FailedToPush(value); }

}


template<typename Type>
Type Stack<Type>::Pop() {

	if (CanPop()) {
		Log_PoppedElement(stack[top]);
		return stack[top--];

	} else { Log_FailedToPop(); }

}



// PRIVATE HELPER FUNCTION DEFINITIONS:
template<typename Type>
void Stack<Type>::InitializeStack() {
	for (size_t i{ 0 }; i <= size; i++) {
		stack[i] = 0;
	}
}


template<typename Type>
bool Stack<Type>::CanPush() {
	if (this->top >= this->size)
		return false;
	return true;
}


template<typename Type>
bool Stack<Type>::CanPop() {
	if (this->top <= -1)
		return false;
	return true;
}


template<typename Type>
void Stack<Type>::DisplayStack() {
	std::cout << " LOG-" << ++log_index << ": Displaying Stack -> [ ";
	for (size_t i{ 0 }; i <= size; i++) {
		std::cout << stack[i] << " ";
	}
	std::cout << "] " << std::endl;
}


template<typename Type>
void Stack<Type>::DisplayTopIndex() {
	std::cout << " LOG-" << ++log_index << ": Current top-value of stack = " << this->top << std::endl;
}



// LOGGING FUNCTIONS:
template<typename Type>
void Stack<Type>::Log_PushedElement(Type value) {
	std::cout << "\n LOG-" << ++log_index << ": Pushed element '" << value << "' onto the stack " << std::endl;
}


template<typename Type>
void Stack<Type>::Log_FailedToPush(Type value) {
	std::cout << "\n LOG-" << ++log_index << ": Stack is Full! Failed to Push element '" << value << "' onto the stack " << std::endl;
}


template<typename Type>
void Stack<Type>::Log_PoppedElement(Type value) {
	std::cout << "\n LOG-" << ++log_index << ": Popped element '" << value << "' from the stack " << std::endl;
}


template<typename Type>
void Stack<Type>::Log_FailedToPop() {
	std::cout << "\n LOG-" << ++log_index << ": Stack is Empty! Failed to pop element from the stack " << std::endl;
}





// This function will never get called. It's only to fix Linking-Errors at compile time.
void LinkErrorFix() {
	// Integer Stack Link-Fixes
	Stack<int> int_stack(1);
	int_stack.Push(1);
	int_stack.Pop();
	// Float Stack Link-Fixes
	Stack<float> float_stack(1);
	float_stack.Push(1);
	float_stack.Pop();
	// Double Stack Link-Fixes
	Stack<double> double_stack(1);
	double_stack.Push(1.0);
	double_stack.Pop();
	// Char Stack Link-Fixes
	Stack<char> char_stack(1);
	char_stack.Push('c');
	char_stack.Pop();
}