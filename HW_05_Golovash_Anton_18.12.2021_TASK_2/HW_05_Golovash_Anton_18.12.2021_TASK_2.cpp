#include<string>
#include<sstream>
#include<iostream>
#include"Queue.h"
#include "Queue.cpp"
#include "Printer.h"
#include "Printer.cpp"

using namespace std;

void main()
{
	Queue<string> queue1;
	queue1.AddToQueue("string1", 9);
	cout << queue1.sizeOfQueue() << endl;

	queue1.AddToQueue("string2", 6);
	cout << queue1.sizeOfQueue() << endl;

	queue1.AddToQueue("string3", 4);
	cout << queue1.sizeOfQueue() << endl;

	queue1.AddToQueue("string4", 6);
	cout << queue1.sizeOfQueue() << endl;

	queue1.AddToQueue("string5", 7);
	cout << queue1.sizeOfQueue() << endl;

	queue1.AddToQueue("string6", 3);
	cout << queue1.sizeOfQueue() << endl;

	//Printer<Queue<string>> printer(queue1);
	//printer.Print(queue1);

	system("pause");
};