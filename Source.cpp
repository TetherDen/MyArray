#include <iostream>
using namespace std;
#include "Array.h"

//	������� ���� Array.���� Array � �� ���� ���������� ������.
//	����� ������ ���� ���� ��������� �� �������� ���
//	������� �� ��������� ������� ������� - �����.���� ������� ��������� ����������� ����� ����������, ���������� ���� ������, �������� ����� ������, ���������
//	�����, ��������� �������� � ����������� ��������.
//	���� ������� ������ ���� ������������(�����������
//		��������� �����������), ����������.
//		������ � ���� Array ����������� ����������.


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