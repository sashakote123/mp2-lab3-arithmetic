

template <class ValType>
class TStack {

private:
	int stackSize;
	int top;
	ValType *data;
public:
	// constructors
	TStack() { stackSize = 100; data = new ValType[stackSize]; top = -1; }
	TStack(int _size) { 
		if (!_size) throw "Can't have null size";
		stackSize = _size; data = new ValType[stackSize]; top = -1;
	}
	// methods
	ValType getTop();
	ValType getSize();
	ValType pop();
	void push(const ValType &x);
	void clear();
	bool isEmpty();
	bool isFull();
};

template <class ValType>
void TStack<ValType>::clear(){
	top = -1;
	delete[] data;
	data = new ValType[stackSize];
}

template<class ValType> 
ValType TStack<ValType>::getSize(){
	return top + 1;
}

template <class ValType> 
ValType TStack<ValType>::getTop(){
	if (isEmpty())
		throw "Stack is empty";
	return data[top];
}

template <class ValType>
bool TStack<ValType>::isEmpty(){
	return top == -1;
}

template <class ValType>
void TStack <ValType>::push(const ValType &x){
	if (isFull()) {
		stackSize = (stackSize+1) * 2;
		ValType* tmp = new ValType[stackSize];
		for (int i = 0; i < top + 1; i++) {
			tmp[i] = data[i];
		}
		delete[] data;
		data = tmp;
	}
	top++;
	data[top] = x;
}

template <class ValType>
ValType TStack <ValType>::pop(){
	if (!isEmpty())
		return data[top--];
	else throw "Stack is empty";
}

template <class ValType>
bool TStack<ValType>::isFull(){
	return top >= stackSize - 1;
}