#include<iostream>
using namespace std;
#include<functional>  //�ڽ���������ͷ�ļ�

/*
  �º���ԭ�ͣ�
    template<typename T> T plus<T>                  //�ӷ��º���
	template<typename T> T minus<T>                 //�����º���
	template<typename T> T multiplies<T>            //�˷��º���
	template<typename T> T divides<T>               //�����º���
	template<typename T> T modulus<T>               //ȡģ�º���
	template<typename T> T negate<T>                //ȡ���º���

	ʵ����������
	����negate��һԪ���㣨һԪν�ʣ����������Ƕ�Ԫ���� 
*/

void test01() {
	//template<typename T> T negate<T>                //ȡ���º���
	negate<int> n;
	cout << n(50) << endl;
	//negate��һ��STL�ṩ���ࣻ����д��һ������()��ȡ���º���

	//template<typename T> T plus<T>                  //�ӷ��º���
	plus<int> p;
	cout << p(10, 20) << endl;

}
int main() {
	test01();
	int a = 10;
	double b = 3.14;


	system("pause");
	return 0;
}