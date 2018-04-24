#pragma once
#include<string>
#include <vector>
#include "element.h"

using namespace std;

class kolejkaPriorytetowa
{
private:
	vector <element> tablica;

	element isEmpty();
	void moveElements();
	void sort();
public:
	kolejkaPriorytetowa();
	~kolejkaPriorytetowa();

	void enqueue(int value, int priority);
	element dequeue();
	element front();
	int size();
	bool isQueueEmpty();
	void show();
};

