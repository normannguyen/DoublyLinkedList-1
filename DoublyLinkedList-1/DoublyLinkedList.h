#pragma once

#include <iostream>

//Template
template <typename T>

//A node of the doubly linked list.
class Node
{
public:
	T data;
	Node* next = nullptr;
	Node* prev = nullptr;
	Node(T newData)
	{
		data = newData;
		next = nullptr;
		prev = nullptr;
	}
};

//Template Class
template <typename T>

//Doubly Linked List Class
class DoublyLinkedList
{
public:
	Node <T>* head;
	Node <T>* tail;
	//SIze of the linkSize of how many items stored on the doubly linked list
	int linkSize;
	//Constructor
	DoublyLinkedList() {
		head = nullptr;
		tail = nullptr;
		//Set to zero on default.
		linkSize = 0;
	}

	//Find function 
	Node<T>* Find(T newData);
	//Insert Function
	void Insert(T newData);
	//Delete Function
	void Delete(T deleteData);
	//Display
	void Display();

};