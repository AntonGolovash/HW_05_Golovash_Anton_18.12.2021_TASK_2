#pragma once
#include<string>
#include<sstream>
#include<iostream>
using namespace std;
template<typename T>
class Queue
{
public:
	Queue();
	~Queue();
	void AddToQueue(T item, int priority);
	bool IsQueueEmpty();

private:
	T* _data;
	int _size;
	int _capacity;
	int* _priority;
};