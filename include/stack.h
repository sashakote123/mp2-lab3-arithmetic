#include <vector>
#include <iostream>
#define DEFAULT_SIZE 10
#define RESIZE_CONST 2
using namespace std;

template <class VallType>
class TStack
{
private:
	VallType *ptr;
	int _size;
	int top;
	bool is_full()
	{
		return top == (_size - 1);
	}

public:
	TStack(int size = DEFAULT_SIZE)
	{
		_size = size;
		ptr = new VallType[_size];
		top = -1;
	}
	~TStack()
	{
		delete[] ptr;
	}
	void push(VallType number)
	{
		if (this->is_full())
		{
			VallType *b = new VallType[RESIZE_CONST * _size];
			_size *= RESIZE_CONST;
			for (int i = 0; i < _size; i++)
			{
				b[i] = ptr[i];
			}
			delete[] ptr;
			ptr = b;
		}
		ptr[++top] = number;
	}
	VallType pop()
	{
		if (this->is_empty())
		{
			throw "Stack is empty";
		}
		else
		{
			return ptr[top--];
		}
	}
	VallType front()
	{
		if (top != -1)
		{
			return ptr[top];
		}
		else
		{
			throw "Stack is empty";
		}
	}
	bool is_empty()
	{
		return top == -1;
	}
	int size()
	{
		return top + 1;
	}
	void clear()
	{
		top = -1;
		delete[] ptr;
		ptr = new VallType[DEFAULT_SIZE];
	}
};
