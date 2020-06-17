#include <iostream>
#include "DoublyLinkedList.h"
#include "Functions.h"

//Video Link: 

//Standard Library
using namespace std;

//Main Function is where everything is listed here.
int main()
{
	//Initial is choice 
	int choice = 0;
	int value = 0;
	DoublyLinkedList<int> List = DoublyLinkedList<int>();
	do
	{
		//Brief Commands listed for you.
		cout << "\n**************\n";
		cout << "\n1. Find";
		cout << "\n2. Insert";
		cout << "\n3. Delete";
		cout << "\n4. Display";
		cout << "\n5. Exit";
		cout << "\n\nPlease enter the # listed above: ";
		//Cin of choosing what program/number to choose.
		cin >> choice;
		//Switch Statement of commands.
		switch (choice)
		{
			//Find function
		case 1:
			cout << "Enter the value you wanted to find: ";
			cin >> value;
			List.Find(value);
			break;
			//Insert function
		case 2:
		{
			cout << "Enter the value you wanted to add: ";
			cin >> value;
			List.Insert(value);
			Node <int>* temp = List.head;
			while (temp != nullptr)
			{
				cout << temp->data << " ,";
				temp = temp->next;
			}
			break;
		}
		//Delete function
		case 3:
		{
			cout << "Enter the value you wanted to delete: ";
			cin >> value;
			List.Delete(value);
			Node <int>* temp = List.head;
			break;
		}
		//Display function
		case 4:
		{
			List.Display();
		}
		}
	}
	//While choosing five.
	while (choice != 5);
	system("pause");
	return 0;
}
