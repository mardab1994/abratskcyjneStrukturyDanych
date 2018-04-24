#include "stdafx.h"
#include "element.h"


element::element()
{
}


element::~element()
{
}

element::element(int v, int p)
{
	this->value = v;
	this->priority = p;
}

int element::getValue()
{
	return this->value;
}

int element::getPriority()
{
	return this->priority;
}

void element::setValue(int v)
{
	this->value = v;
}

void element::setPriority(int p)
{
	this->priority = p;
}