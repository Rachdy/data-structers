// Linked_List.cpp
// 
#include <iostream>
#include "List.h"


template<typename T> 
void List<T>::print_list(List<T>* Head) {
	if (Head == nullptr) return ;//check if the List is empty

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

template<typename T>
List<T>* add_end(List<T>* Head, T value) {

	List<T>* NewNode = new List<T>(value);
	if (Head != nullptr) {
	
		List<T>* temp;
		temp = Head;

		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = NewNode;
		return Head;

	}
	return NewNode;
}

template<typename T>
List<T> insert_at_position(List<T>* Head, T value , int index) {

	List<T>* NewNode = new List<T>*(value);//Initialize New Node 
	if (Head == nullptr) return NewNode;// if the List is empty then the new Node is the Head
	
	List<T>* current, previous; // Initialize two Variables  current and previous
	current = previous = Head;
	int counter = 0; // for tracking the right index for the new Node

	while (current == nullptr &&  counter != index) {
		previous = current;
		current = current->next;
		counter = counter + 1;
	}
	if (current == nullptr) return Head;// the index is out of range of the list

	previous->next = NewNode;// previous will be the parent of New Node 
	NewNode->next = current;//New Node will be the parent of current 
	return Head;
}

template<typename T>
List<T>* delete_at_position(List<T>* Head, T value) {

	List<T>* current, previous; // Initialize two Variables  current and previous
	current = previous = Head;
	 

	while (current-> next !=  nullptr && current->data != value ) {// searching for a Node 
		previous = current;
		current = current->next;
		
	}
	if (current == nullptr) return Head;// a Node with this value does not exist in the List

	previous->next = current->next;// previous will be the parent of child of current
	delete current;
	return Head;

}
