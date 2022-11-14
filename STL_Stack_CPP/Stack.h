
// Stack.h - Header file

#pragma once

#include <iostream>

template <typename Type>
class Stack {

	// Class Attributes:
	int size;
	int top;
	Type* stack = nullptr;		

public:
	// Constructor:
	Stack(int);
	
	// Member Methods:
	void Push(Type);
	Type Pop();
	void DisplayStack();
	void DisplayTopIndex();
	
private:
	// Helper Functions:
	void InitializeStack();
	bool CanPush();
	bool CanPop();

	// Logging Functions:
	void Log_PushedElement(Type);
	void Log_FailedToPush(Type);
	void Log_PoppedElement(Type);
	void Log_FailedToPop();

};