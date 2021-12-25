#include<string>
#include<sstream>
#include<iostream>
#include"Queue.h"
#include "Printer.h"
//#include "Queue.cpp"
//#include "Printer.cpp"

using namespace std;

void main()
{
	Queue<string> queue1;
	queue1.AddToQueue("string1", 9);
	queue1.AddToQueue("string2", 6);
	queue1.AddToQueue("string3", 4);
	queue1.AddToQueue("string4", 6);
	queue1.AddToQueue("string5", 7);
	queue1.AddToQueue("string6", 3);

	cout << queue1.sizeOfQueue() << endl;

	Printer<Queue<string>> printer(queue1);
	printer.Print();

	system("pause");
};