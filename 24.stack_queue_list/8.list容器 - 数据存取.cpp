#include<iostream>
using namespace std;
#include<list>

//liat��������[]���������е�Ԫ�أ�Ҳ��������at��ʽ���ʣ���Ϊlist���������������������Կռ䣬������Ҳ�ǲ�֧���������
//˫�������˼�ǣ�ֻ֧�� ++��ǰ�ƣ���--�����ƣ�����֧����Ծʽ�ķ���

//front();  //���ص�һ��Ԫ��
//back();   //�������һ��Ԫ��

void test01() {
	list<int> p;
	p.push_back(10);
	p.push_back(20);
	p.push_front(5);
	p.push_front(0);

	cout << "p�ĵ�һ��Ԫ���ǣ�  " << p.front() << endl;
	cout << "p�����һ��Ԫ���ǣ�  " << p.back() << endl;

	//��������֧���������
	list<int>::iterator i = p.begin();
	i++;
	i--;
	//i = i + 1;

}
int main() {
	test01();

	system("pause");
	return 0;
}