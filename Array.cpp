#include "Array.h"
#include <iostream>
using namespace std;



Array::Array() :arr{ nullptr }, size{ 0 }
{
}

Array::Array(int s)
{
	if (s > 0)
	{
		arr = new int[s];
		size = s;
	}
	else
	{
		throw exception("Size must be >0");
	}

}

Array::Array(const Array& obj)  // конструктор копирования
{
	if (obj.arr != nullptr)
	{
		size = obj.size;
		this->arr = new int[size];
		for (int i = 0; i < obj.size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
}

Array::Array(Array&& obj)  // Конструктор перемещения
{
	size = obj.size;
	this->arr = obj.arr;
	obj.size = 0;
	obj.arr = nullptr;
}




void Array::makeArr() // Розмір масиву може бути заданий за допомогою виклику функції-члена.
{
	int s;
	cout << "Enter size of array: ";
	cin >> s;
	delete[]arr;
	size = s;
	arr = new int[s];
}

void Array::fillArr()  // Заполнять массив значениями
{
	int n;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter index " << i << ": ";
		cin >> n;
		arr[i] = n;
	}
}

void Array::changeSize(int s) // Изменять размер масссива
{
	if (s <= 0)
	{
		throw exception ("Size must be >0 ");
	}
	int* newArr = new int[s];

	if (arr != nullptr)
	{
		for (int i = 0; i < s; i++)
		{
			newArr[i] = arr[i];
		}
	}
	size = s;
	delete[]arr;
	arr = newArr;
}

void Array::show() // відображати вміст масиву
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}

void Array::sorting()  // quick sort
{
	quickSort(0, size - 1);
}

void Array::quickSort(int l, int r)	// quick sort 
{
	if (l < r)
	{
		int pivot = arr[r];
		int i = l, j = r;
		int temp;
		while (i <= j)
		{
			while (arr[i] < pivot)
			{
				i++;
			}
			while (arr[j] > pivot)
			{
				j--;
			}
			if (i <= j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
			}
		}
		quickSort(l, j);
		quickSort(i, r);
	}
}

int Array::maxArr()
{
	if (arr != nullptr)
	{
		int temp = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > temp)
			{
				temp = arr[i];
			}
		}
		return temp;
	}
	return INT32_MIN;
}

int Array::minArr()
{
	if (arr != nullptr)
	{
		int temp = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] < temp)
				temp = arr[i];
		}
		return temp;
	}
	return INT32_MAX;
}


Array::~Array()
{
	if (arr != nullptr)
	{
		delete[]arr;
	}
}
