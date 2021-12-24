#include "Queue.h"

template<typename T>
inline Queue<T>::Queue() :
	_data(nullptr), _queueStart(nullptr), _queueEnd(nullptr),
	_newElement(nullptr), _size(0), _capacity(20), _priority(0)
{
	cout << "Constructor default:\t" << this << endl;
}

template<typename T>
inline Queue<T>::~Queue()
{
	delete[] _data;
	delete _queueStart;
	delete _queueEnd;
	delete _newElement;
}

template<typename T>
inline void Queue<T>::AddToQueue(T item, int priority)
{
	if (_capacity <= _size)
	{
		cout << "******** Queue Overflow ********\t" << item << endl;
		return;
	}
	if (!IsQueueEmpty())
	{
		T* temp = new T[_size];
		for (size_t i = 0; i < _size; i++)
			temp[i] = _data[i];
		delete[] _data;
		_data = new T[_size+1];

		for (size_t i = 1; i < _size; i++)
			_data[i] = temp[i];
		delete[] temp;
		_data[_size] = item;
		_priority[_size] = priority;
	}
	else
	{
		_data = new T[++_size];
		_data[0] = item;
		_priority[0] = priority;
	}

}

template<typename T>
inline bool Queue<T>::IsQueueEmpty()
{
	if (_data == nullptr)
		return true;
	return false;
}