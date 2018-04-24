#include "stdafx.h"
#include "listaJednokierunkowa.h"
#include "stdafx.h"
#include<iostream>
#include<string>

listaJednokierunkowa::listaJednokierunkowa()
{
	first = 0;
}

listaJednokierunkowa::~listaJednokierunkowa()
{
}

void listaJednokierunkowa::dodajOgniwo(string name)
{
	ogniwo *nowe = new ogniwo;

	nowe->setName(name);
	if (first == 0)
	{
		first = nowe;
	}
	else
	{
		ogniwo *temp = first;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = nowe;
		nowe ->next = 0;
	}
}

void listaJednokierunkowa::usunOgniwo(int nr)
{
	if (nr == 1)
	{
		ogniwo *temp = first;
		first = temp->next;
	}
	if (nr > 1)
	{
		int j = 1;
		ogniwo *temp = first;
		while (temp)
		{
			if ((j + 1) == nr)break;
			temp = temp->next;
			j++;
		}
		if (temp->next->next == 0) {
			temp->next = 0;
		}
		else
		{
			temp->next = temp->next->next;
		}
	}
}

void listaJednokierunkowa::showAll()
{
	ogniwo *temp = first;
	while (temp)
	{
		temp->show();
		temp = temp->next;
	}
}