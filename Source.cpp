#include <iostream>
using namespace std;
#include "Array.h"

//	Створіть клас Array.Клас Array — це клас динамічного масиву.
//	Розмір масиву може бути переданий як параметр або
//	заданий за допомогою виклику функції - члена.Клас повинен дозволяти заповнювати масив значеннями, відображати вміст масиву, змінювати розмір масиву, сортувати
//	масив, визначати мінімальне і максимальне значення.
//	Клас повинен містити набір конструкторів(конструктор
//		копіювання обов’язковий), деструктор.
//		Додати в клас Array конструктор переміщення.


int main()
{
	Array arr0;
	arr0.show();
	arr0.makeArr();
	arr0.show();

	arr0.fillArr();
	arr0.show();

	Array arr1 = arr0;
	cout << "copy constructor: " << endl;
	arr1.show();

	cout << "changeSize" << endl;
	arr1.changeSize(5);
	arr1.show();

	cout << "QUick sort test: " << endl;
	arr1.sorting();
	arr1.show();


	//Array arr5;
	//cout << "max in arr: " << arr5.maxArr() << endl;;

	//cout << "min in arr: " << arr1.minArr() << endl;;
	





	return 0;
}