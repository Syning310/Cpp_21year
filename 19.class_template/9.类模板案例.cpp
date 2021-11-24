#include<iostream>
using namespace std;
#include"MyArray.hpp"

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << arr[i] << endl;
	}
}

void test01() {
	MyArray<int>arr1(5);

	//MyArray<int>arr2(arr1);

	//MyArray<int>arr3(100);
	//arr3 = arr2;

	for (int i = 0; i < 5; i++) {
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��  " << endl;
	printIntArray(arr1);
	cout << "arr1������Ϊ��  " << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��  " << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ��  " << endl;
	printIntArray(arr2);
	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��  " << endl;
	printIntArray(arr2);
	cout << "arr2������Ϊ��  " << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��  " << arr2.getSize() << endl;

}

//�����Զ�����������
class person {
public:
	person() {};
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void printPersonArray(MyArray<person>& arr) {
	for (int i = 0; i < arr.getSize(); i++) {
		cout << "������  " << arr[i].m_Name << "\t���䣺  " << arr[i].m_Age << endl;
	}
}
void test02() {
	MyArray<person>arr(10);
	person p1("����", 2000);
	person p2("����", 130000);
	person p3("����", 150000);
	person p4("���", 4000);
	person p5("�ށo", 2000);
	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);
	//��ӡ����
	printPersonArray(arr);
	//�������
	cout << "arr������Ϊ��  " << arr.getCapacity() << endl;
	//�����С
	cout << "arr�Ĵ�СΪ��  " << arr.getSize() << endl;
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}