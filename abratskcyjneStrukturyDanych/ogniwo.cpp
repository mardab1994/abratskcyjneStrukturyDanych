#include "stdafx.h"
#include "ogniwo.h"

#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
#include<string>

ogniwo::ogniwo()
{
	next = NULL;
}


ogniwo::~ogniwo()
{
}

void ogniwo::setName(string Name)
{
	name = Name;
}



void ogniwo::show()
{
	cout << "moje ime: " << name << endl;
}