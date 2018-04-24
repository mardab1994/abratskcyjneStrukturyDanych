#include "stdafx.h"
#include "stos_tablica.h"
#include<iostream>

using namespace std;


stos_tablica::stos_tablica()
{
}

stos_tablica::~stos_tablica()
{
}

void stos_tablica::push(int element)
{
	tablica.push_back(element);
}

int stos_tablica::isEmpty()
{
	int liczbaElementow = tablica.size();
	if (liczbaElementow == 0)
	{
		string wyjatek = "ERROR: STACK IS EMPTY!!";
		throw wyjatek;
	}

	int zwrot = tablica.at(tablica.size() - 1);
	//tablica.pop_back();
	return zwrot;
}

int stos_tablica::pop()
{
	int zwrot = 0;
	try
	{
		 zwrot=this->isEmpty();
		tablica.pop_back();
		return zwrot;
	}
	catch(string w)
	{
		cout << w << endl;
	}
}

int stos_tablica::top()
{
	int zwrot = 0;
	try
	{
		zwrot = this->isEmpty();
		return zwrot;
	}
	catch (string w)
	{
		cout << w << endl;
	}
}

int stos_tablica::size()
{
	return tablica.size();
}

void stos_tablica::show()
{
	for (int i = 0; i < tablica.size(); i++)
	{
		cout << tablica[i] << endl;
	}
}

bool stos_tablica::isStackEmpty()
{
	if (this->size())return false;
	return true;
}