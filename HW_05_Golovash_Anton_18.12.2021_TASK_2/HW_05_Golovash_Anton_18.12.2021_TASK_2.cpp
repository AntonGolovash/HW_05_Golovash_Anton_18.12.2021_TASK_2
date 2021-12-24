#include<string>
#include<sstream>
#include<iostream>
#include "Queue.h"
#include "Queue.cpp"
using namespace std;

int main()
{
	Queue<string> queue1;
	queue1.AddToQueue("qwerty", 9);
	queue1.AddToQueue("asdfgh", 6);
	queue1.AddToQueue("zxcvbn", 4);
	queue1.AddToQueue("poiuyt", 6);
	queue1.AddToQueue("lkjhgf", 7);
	queue1.AddToQueue("mnbvcv", 3);

	queue1.~Queue();
	return 0;
};