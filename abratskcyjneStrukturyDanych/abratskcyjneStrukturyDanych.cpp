// abratskcyjneStrukturyDanych.cpp: Definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"

#include<vector>
#include<iostream>
#include<string>


#include "stos_tablica.h"
#include "kolejka.h"
#include "kolejkaPriorytetowa.h"
#include "listaJednokierunkowa.h"


using namespace std;


//-----------------------------
int main()
{
	stos_tablica stos;
	cout << "STOS" << endl;
	for (int i = 0; i < 6; i++)
	{
		stos.push(i);
	}

	stos.show();
	cout << "top = " << stos.top() << endl;
	stos.show();
	stos.pop();
	stos.pop();
	stos.pop();
	stos.top();
//---------------------------------------------------
	cout << "KOLEJKA" << endl;
	kolejka k1;
	for (int i = 4; i < 9; i++)
	{
		k1.enqueue(i);
	}
	k1.show();
	cout << "FRONT = " << k1.front() << endl;
	cout << "is empty ? = " << k1.isQueueEmpty() << endl;
	cout << "size = " << k1.size() << endl;

	cout << "zdejmujemy z kolejki " << k1.dequeue() << endl;
	cout << "size = " << k1.size() << endl;
	k1.show();
//---------------------------------------------------
	kolejkaPriorytetowa k2;
	cout << "KOLEJKA PRIORYTETOWA " << endl;
	k2.enqueue(1, 2);
	k2.enqueue(3, 5);
	k2.enqueue(6, 3);
	k2.show();
	element e1 = k2.front();

	cout << "FRONT priority= " <<e1.getPriority()<<" value="<<e1.getValue()<< endl;
	k2.dequeue();
	k2.dequeue();
	k2.dequeue();
	k2.enqueue(10, 0);
	k2.enqueue(3, 3);
	k2.enqueue(7, 11);
	k2.show();
	k2.dequeue();
	k2.front();

	//lista jednokierunkowa
	int *ptr;
	int *ptr2;
	int liczba = 9;
	ptr = &liczba;
	cout << "liczba = " << liczba;
	cout<< "  ptr adres=" << ptr << " ptr wskazuje na " << *ptr << endl;
	ptr2 = ptr;
	cout << "ptr2 wskazuje na "<<*ptr2 << endl;



	

	
	listaJednokierunkowa l1;
	l1.dodajOgniwo("Marcin");
	l1.dodajOgniwo("Justyna");
	l1.showAll();
	l1.usunOgniwo(1);
	l1.showAll();
	return 0;
}

