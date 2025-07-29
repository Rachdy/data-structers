// Linked_List.cpp
// 
#include <iostream>
#include "List.h"


//template<typename T> struct List;

template<typename T> 
void List<T>::print_list(List<T>* Head) {
	if (Head == nullptr) return ;
	List<T>* temp;

	temp = Head;
	while (temp != nullptr) {
		std::cout <<temp->data << "\n";
		temp = temp->next;

	}
}

template<typename T>
void List<T>::delete_list(List<T>* Head) {
	List<T>* temp;
	List<T>* prev;
	temp = prev = Head;

	while (temp != nullptr) {
		prev = temp;
		temp = temp->next;
		delete prev;
	}
}

template<typename T>
List<T>* List<T>::add_front(List<T>* Head, T value) {

	List<T>* NewNode = new List<T>(value);
	if (Head != nullptr) {
		NewNode->next = Head;
	}
	return NewNode;
}
