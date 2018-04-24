#pragma once
class element
{
private:
	int value;
	int priority;
public:
	element();
	element(int v, int p);
	~element();

	int getValue();
	int getPriority();
	void setValue(int v);
	void setPriority(int p);

};

