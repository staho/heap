// Heap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct node {
	node * L, *P;
	int val;
};

int menu();
void dodaj(node *&);

int main()
{
	node * root = NULL;
	int choice;
	while (choice != 4)
	{
		switch (menu())
		{
		case 1:
			dodaj(root);
			break;
		default:
			break;
		}
	}
    return 0;
}

int menu()
{
	cout << "Podaj ktora operacje chcesz wykonac?" << endl;
	cout << "1. Dodaj\t\t\t2. Wyswietl" << endl << "3. Posprzataj\t\t\t" << endl;
	int x;
	cin >> x;
	return x;
}
void dodaj(node *&)
{

}