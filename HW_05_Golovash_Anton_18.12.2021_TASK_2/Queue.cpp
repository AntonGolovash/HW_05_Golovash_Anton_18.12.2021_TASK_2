#include "Queue.h"

template<typename T>
inline Queue<T>::Queue() : _data(nullptr), _size(0), _capacity(100), _priority(0)
{
	cout << "Constructor default:\t" << this << endl;
}

template<typename T>
inline Queue<T>::~Queue()
{
	delete[] _data;
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
		_size++;
		T* temp_item = new T[_size];// create new teporary bigger array for T
		int* temp_priority = new int[_size];// create new teporary bigger array for _priority

		for (int i = 0; i < _size - 1; i++)
		{
			temp_item[i] = _data[i];// copy array T to temporary array T
			temp_priority[i] = _priority[i];// copy array _priority to temporary array _priority
		}
		delete[] _data;
		delete[] _priority;

		temp_item[_size - 1] = item;// add new element to the end of the new teporary array
		temp_priority[_size - 1] = priority;// add new element to the end of the new teporary array

		_data = new T[_size];// create new bigger T array
		_priority = new int[_size];// create new bigger _priority array

		for (int i = 0; i < _size; i++)
		{
			_data[i] = temp_item[i];// copy temporary array to new bigger T array
			_priority[i] = temp_priority[i];// copy temporary array to new bigger _priority array
		}
		delete[] temp_item;
		delete[] temp_priority;
	}
	else
	{
		_size++;
		_data = new T[_size];
		_priority = new int[_size];
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

template<typename T>
int Queue<T>::sizeOfQueue()
{
	for (size_t i = 0; i < _size; i++)
	{
		_sizeOfQueue += sizeof(_data[i]);
	}
	return _sizeOfQueue;
}
