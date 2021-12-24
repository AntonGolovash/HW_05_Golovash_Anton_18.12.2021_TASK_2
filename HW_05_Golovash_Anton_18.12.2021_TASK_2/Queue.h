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
	void AddToQueue(T item);
	bool IsQueueEmpty();

private:
	T* _data;
	T* _queueStart;
	T* _queueEnd;
	T* _newElement;
	int _size;
	int _capacity;

};