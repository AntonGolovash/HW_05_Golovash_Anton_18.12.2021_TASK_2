#include<string>
#include<sstream>
#include<iostream>
#include "Queue.h"
#include "Queue.cpp"
using namespace std;

int main()
{
	Queue<string> queue1;
	queue1.AddToQueue("string1", 9);
	queue1.AddToQueue("string2", 6);
	queue1.AddToQueue("string3", 4);
	queue1.AddToQueue("string4", 6);
	queue1.AddToQueue("string5", 7);
	queue1.AddToQueue("string6", 3);

	queue1.~Queue();
	return 0;
};