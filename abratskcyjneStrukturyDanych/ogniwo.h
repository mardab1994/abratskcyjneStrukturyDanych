#pragma once
#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

class ogniwo
{
private:
	string name;
	
public:
	ogniwo();
	~ogniwo();
	ogniwo *next;
	void setName(string Name);
	void show();
};

