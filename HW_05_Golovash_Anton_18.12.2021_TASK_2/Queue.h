#pragma once
#include<string>
#include<sstream>
#include<iostream>

using namespace std;

class Queue
{
public:
	Queue();
	~Queue();
	void AddToQueue();
	bool IsQueueEmpty();

private:
	Queue* _data;
	int _queueStart;
	int _queueEnd;
	int _newElement;
	int _size;
	int _capacity;

};