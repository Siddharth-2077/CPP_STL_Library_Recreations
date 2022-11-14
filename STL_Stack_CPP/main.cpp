

#include <iostream>
#include "Stack.h"

using namespace std;


int main() {

	// [Comment out blocks when not in use, Expand a block to see its test cases]
	
	// Integer Stack Tests Block: 
	{
		cout << " INTEGER STACK TESTS \n" << endl;\
		cout << " size of data-type (int) = " << sizeof(int) << " byte(s) \n" <<  endl;
		Stack <int> i_stack(2);

		i_stack.Push(10);
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Push(20);
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Push(30);	// Should give error (Stack is Full)
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Pop();
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Pop();
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Pop();		// Should give error (Stack is Empty)
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Push(1);
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();

		i_stack.Push(2);
		i_stack.DisplayTopIndex();
		i_stack.DisplayStack();
	}

	// Float Stack Tests Block:
	/*{
		cout << " FLOAT STACK TESTS \n" << endl;
		cout << " size of data-type (float) = " << sizeof(float) << " byte(s) \n" <<  endl;
		Stack<float> f_stack(10);

		f_stack.Push(10.5f);
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Push(20.5f);
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Push(30.5f);	// Should give error (Stack is Full)
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Pop();
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Pop();
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Pop();		// Should give error (Stack is Empty)
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Push(1.5f);
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();

		f_stack.Push(2.5f);
		f_stack.DisplayTopIndex();
		f_stack.DisplayStack();
	}*/

	// Double Stack Tests Block:
	/*{
		cout << " DOUBLE STACK TESTS " << endl;
		cout << " size of data-type (double) = " << sizeof(double) << " byte(s) \n" <<  endl;
		Stack<double> d_stack(7);

		d_stack.Push(10.5);
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Push(20.5);
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Push(30.5);	// Should give error (Stack is Full)
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Pop();
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Pop();
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Pop();		// Should give error (Stack is Empty)
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Push(1.5);
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();

		d_stack.Push(2.5);
		d_stack.DisplayTopIndex();
		d_stack.DisplayStack();
	}*/

	// Character Stack Tests Block:
	/*{
		cout << " CHARACTER STACK TESTS " << endl;
		cout << " size of data-type (char) = " << sizeof(char) << " byte(s) \n" << endl;
		Stack<char> c_stack(5);

		c_stack.Push('a');
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Push('b');
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Push('c');	// Should give error (Stack is Full)
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Pop();
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Pop();
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Pop();		// Should give error (Stack is Empty)
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Push('x');
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();

		c_stack.Push('y');
		c_stack.DisplayTopIndex();
		c_stack.DisplayStack();
	}*/	

	
	return 0;
}