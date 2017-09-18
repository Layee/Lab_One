#pragma once
template <class ItemType>
class Sequence
{

private:
	int num_used;
	int array_Capacity;
	string * myarray;


public:
	Sequence();
	Sequence(const ItemType& size);
	~Sequence();
	bool isFull();
	bool isEmpty();
	int arrayCapacity(); // return array capacity
	int numOfElements(); // return num of element
	int front(); // return the front item in the container
	int back(); // return the back item in the container
	void push_back(const ItemType& increment);
	void pop_back(const ItemType& decrease);
	int At(const ItemType& returnPosition);
	void resize(const ItemType & changeCapacity);
	void  insert(const ItemType & insert, ItemType & remove);


};

