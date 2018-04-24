#include "stdafx.h"
#include "kolejkaPriorytetowa.h"
#include<iostream>
#include<string>

using namespace std;


kolejkaPriorytetowa::kolejkaPriorytetowa()
{
}

kolejkaPriorytetowa::~kolejkaPriorytetowa()
{
}

void kolejkaPriorytetowa::enqueue(int value, int priority)
{
	element el(value, priority);
	this->tablica.push_back(el);
	if (tablica.size() > 1)
	{
		this->sort();
	}
}

void kolejkaPriorytetowa::sort()
{
	int i, j;
	bool swapped;
	for (i = 0; i < this->tablica.size() - 1; i++)
	{
		swapped = false;
		for (j = 0; j < this->tablica.size() - i - 1; j++)
		{
			if (this->tablica.at(j).getPriority() < this->tablica.at(j + 1).getPriority())
			{
				element e1 = this->tablica.at(j);
				this->tablica.at(j) = this->tablica.at(j + 1);
				this->tablica.at(j + 1) = e1;
				swapped = true;
			}
		}
		if (swapped == false)break;
	}
}

element kolejkaPriorytetowa::isEmpty()
{
	int liczbaElementow = tablica.size();
	if (liczbaElementow == 0)
	{
		string wyjatek = "QUEUE IS EMPTY !!!";
		throw wyjatek;
	}

	return this->tablica.at(0);
}

element kolejkaPriorytetowa::dequeue()
{
	element e1;
	try
	{
		e1 = isEmpty();
		this->moveElements();
		return e1;
	}
	catch (string w)
	{
		cout << w << endl;
	}
}

element kolejkaPriorytetowa::front()
{
	element e1;
	try
	{
		e1 = this->isEmpty();
		return e1;
	}
	catch (string w)
	{
		cout << w << endl;
	}
}

int kolejkaPriorytetowa::size()
{
	return this->tablica.size();
}

bool kolejkaPriorytetowa::isQueueEmpty()
{
	if (this->tablica.size() == 0)return true;
	return false;
}

void kolejkaPriorytetowa::show()
{
	for (int i = 0; i < this->tablica.size(); i++)
	{
		cout << "element nr " << i  << "  priority=" << this->tablica.at(i).getPriority() <<  "   value=" << this->tablica.at(i).getValue()<<endl;
	}
}

void kolejkaPriorytetowa::moveElements()
{
	for (int i = 0; i < this->tablica.size() - 1; i++)
	{
		this->tablica.at(i) = this->tablica.at(i + 1);
	}
	this->tablica.pop_back();
}