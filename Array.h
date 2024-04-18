#pragma once
class Array
{
	int* arr;
	int size;

	void quickSort(int l, int r);	// quick sort rec
public:
	Array();
	Array(int s);
	
	Array(const Array& arr);	// ����������� �����������
	Array(Array&& arr);	// ����������� ����������� 

	void makeArr();	// ����� ������ ���� ���� ������� �� ��������� ������� �������-�����.
	void fillArr();	 // ��������� ������ ����������
	void changeSize(int s);	 // �������� ������ ��������
	void show();		// ���������� ���� ������

	void sorting();		// quick sort
	int maxArr();
	int minArr();

	~Array();


};

