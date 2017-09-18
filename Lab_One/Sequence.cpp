#include "Sequence.h"
#include <string>

template <class ItemType>
Sequence <ItemType>::Sequence() {

	myarray = new string[10];
	num_used = 0;

}

template <class ItemType>
Sequence <ItemType>::Sequence(const ItemType& size) {
	myarray = new string[size];
	num_used = 0;
}


template <class ItemType>
bool Sequence<ItemType>::isFull() {
	if (num_used >= array_Capacity) {
		return true;
	}
	else {
		return false;
	}
}

template<class ItemType>
bool Sequence <ItemType>::isEmpty() {
	if (array_Capacity == 0) {
		return true;
	}
	else {
		return false;
	}
}

template<class ItemType>
int Sequence <ItemType> ::arrayCapacity() {
	int itemSize;
	for (int i = 0; i < array_Capacity; i++) {
		itemSize = sizeof(myarray) / sizeof(myarray[0]); // return the size of the array
	}
	return itemSize;
}


template <class ItemType>
int Sequence <ItemType>::numOfElements() {

}



template<class ItemType>
int Sequence <ItemType> ::front() {

}


template<class ItemType>
int Sequence <ItemType>:: back() {

}

template<class ItemType>
void Sequence <ItemType>:: push_back(const ItemType& increment) {

}


template<class ItemType>
void Sequence <ItemType>:: pop_back(const ItemType& decrase) {

}

template<class ItemType>
int Sequence <ItemType>:: At(const ItemType& returnPosition) {

}


template<class ItemType>
void Sequence <ItemType>::resize(const ItemType & changeCapacity) {

}


template <class ItemType>
void Sequence <ItemType>::insert(const ItemType & insert, ItemType & remove) {

}



template<class ItemType>
Sequence <ItemType>:: ~Sequence(){}