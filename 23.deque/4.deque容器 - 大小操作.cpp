#include<iostream>
using namespace std;
#include<deque>

/*
  deque.empty();                          //�ж������Ƿ�Ϊ��   Ϊ�յĻ�����true����Ϊ���򷵻�false
  deque.size();                           //����������Ԫ�صĸ���
  deque.resize(num);                      //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
                                          //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
  deque.resize(num, elem);                //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                                          //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
  dequeû�������ĸ���ԭ���ǣ������п����洢��ַ���������������,�����Ͽ������޼����ݣ�������Ҫ��vectorһ��ÿһ�ζ���̬��չ
*/

void printdeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printdeque(d1);

	//1��deque.empty();                          //�ж������Ƿ�Ϊ��   Ϊ�յĻ�����true����Ϊ���򷵻�false
	if (d1.empty()) {
		cout << "d1Ϊ�գ�����" << endl;
	}
	else {
		cout << "d1��Ϊ��" << endl;
		//deque.size();                           //����������Ԫ�صĸ���
		cout << "d1�Ĵ�СΪ��  " << d1.size() << endl;
	}

	//3��deque.resize(num);                       //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
                                                  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	d1.resize(12);
	printdeque(d1);

	//4��deque.resize(num, elem);                 //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                                                  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	d1.resize(18, 6);
	printdeque(d1);

}

int main() {
	test01();


	system("pause");
	return 0;
}