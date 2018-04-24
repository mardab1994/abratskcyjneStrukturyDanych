#pragma once
#include "stdafx.h"
#include <vector>
#include<string>

using namespace std;

class stos_tablica
{
private:
	vector <int> tablica;
	int isEmpty();
public:
	stos_tablica();
	~stos_tablica();

	void push(int element);
	int pop();
	int top();
	int size();
	bool isStackEmpty();
	void show();
};

