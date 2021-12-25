#pragma once
#include<string>
#include<sstream>
#include<iostream>

using namespace std;

template<typename T>
class Printer : public Queue<T>
{
public:
	Printer(T object);
	~Printer();
	void Print();
private:

};