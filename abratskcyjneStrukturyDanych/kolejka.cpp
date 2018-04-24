#include "stdafx.h"
#include "kolejka.h"
#include<iostream>
using namespace std;

kolejka::kolejka()
{
}

kolejka::~kolejka()
{
}

void kolejka::enqueue(int element)
{
	tablica.push_back(element);
}

int kolejka::isEmpty()
{
	int liczbaElementow = tablica.size();
	if (liczbaElementow == 0)
	{
		string wyjatek = "QUEUE IS EMPTY !!!";
		throw wyjatek;
	}

	int zwrot = tablica.at(0);
	return zwrot;
}
int kolejka::dequeue() 
{
	int zwrot;
	try
	{
		zwrot = this->isEmpty();
		this->moveElements();
		//przepisanie tablicy 
		return zwrot;
	}
	catch (string w)
	{
		cout << w << endl;
	}
}

void kolejka::moveElements()
{
	for (int i = 0; i < this->tablica.size()-1; i++)
	{
		this->tablica.at(i) = this->tablica.at(i + 1);
	}
	this->tablica.pop_back();
}

int kolejka::front() 
{
	int zwrot;
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

int kolejka::size() 
{
	return tablica.size();
}

bool kolejka::isQueueEmpty() 
{
	if (tablica.size() == 0)return true;	//jest pusta
	return false;	//sa jakie elementy

}

void kolejka::show()
{
	for (int i = 0; i < tablica.size(); i++)
	{
		cout << tablica.at(i) << endl;
	}
}
