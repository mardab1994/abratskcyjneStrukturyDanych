#pragma once
#include "stdafx.h"
#include <vector>
#include<string>

using namespace std;

class kolejka
{
private: 
	vector <int> tablica;
	int isEmpty();
	void moveElements();
public:
	kolejka();
	~kolejka();

	void enqueue(int element);
	int dequeue();
	int front();
	int size();
	bool isQueueEmpty();
	void show();

};

