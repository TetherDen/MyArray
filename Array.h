#pragma once
class Array
{
	int* arr;
	int size;

	void quickSort(int l, int r);	// quick sort rec
public:
	Array();
	Array(int s);
	
	Array(const Array& arr);	// конструктор копирования
	Array(Array&& arr);	// Конструктор перемещения 

	void makeArr();	// Розмір масиву може бути заданий за допомогою виклику функції-члена.
	void fillArr();	 // Заполнять массив значениями
	void changeSize(int s);	 // Изменять размер масссива
	void show();		// відображати вміст масиву

	void sorting();		// quick sort
	int maxArr();
	int minArr();

	~Array();


};

