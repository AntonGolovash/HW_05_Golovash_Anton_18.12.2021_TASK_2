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
	int sizeOfQueue();
	int getSize();
protected:
	T* _data;
	int _size;
	int _capacity;
	int* _priority;
	int _sizeOfQueue;
};