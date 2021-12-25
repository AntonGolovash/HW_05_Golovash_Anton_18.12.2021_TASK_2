#pragma once
#include<string>
#include<sstream>
#include<iostream>
#include "Queue.h"

using namespace std;

template<typename T>
class Printer : public virtual Queue<T>
{
public:
	Printer(T object);
	~Printer();
	void Print(T object);
private:

};