#pragma once
#include "stdafx.h"
#include<iostream>
#include<string>

#include"ogniwo.h"


using namespace std;

class listaJednokierunkowa
{
private:
	ogniwo *first;
public:
	listaJednokierunkowa();
	~listaJednokierunkowa();

	void dodajOgniwo(string name);
	void usunOgniwo(int nr);
	void showAll();
};

