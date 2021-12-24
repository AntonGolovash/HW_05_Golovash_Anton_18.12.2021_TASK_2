#pragma once
#include<string>
#include<sstream>
#include<iostream>
using namespace std;

template<typename T>
class Printer
{
public:
	Printer();
	~Printer();
	void Print(T object);
private:
	T* _data;
	int _size;
	int _capacity;
	int* _priority;

};