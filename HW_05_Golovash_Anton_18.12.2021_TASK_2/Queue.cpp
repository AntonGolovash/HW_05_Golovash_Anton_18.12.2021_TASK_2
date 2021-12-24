#include "Queue.h"

template<typename T>
inline Queue<T>::Queue() :
	_data(nullptr), _queueStart(nullptr), _queueEnd(nullptr),
	_newElement(nullptr), _size(0), _capacity(1000), _priority(0)
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
		T* temp = new T[++_size];// create new teporary bigger array
		for (int i = 0; i < _size - 1; i++)
			temp[i] = _data[i];// copy array to temporary array
		temp[_size] = item;// add new element to the end of the new teporary array
		delete[] _data;
		_data = temp;
		temp = nullptr;

		//_data = new T[++temp_size];// create new bigger array
		//_size = temp_size;
		//for (int i = 0; i < temp_size; i++)
		//	_data[i] = temp[i];// copy temporary array to new bigger array
		//delete[] temp;
		//_data[_size] = item;// add new element to the end of new bigger array
	}
	else
	{
		_data = new T[++_size];
		_data[0] = item;
	}

}

template<typename T>
inline bool Queue<T>::IsQueueEmpty()
{
	if (_data == nullptr)
		return true;
	return false;
}
