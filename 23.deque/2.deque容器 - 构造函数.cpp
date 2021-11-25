#include<iostream>
using namespace std;
#include<deque>

/*
  deque<T> deqT;                      //Ĭ�Ϲ��캯��
  deque(beg, end);                    //���캯����(beg, end)�����е�Ԫ�ؿ���������
  deque(n, elem);                     //���캯����n��elem����������
  deque(const deque& deq);            //�������캯��
*/

void printDeque(const deque<int>& deq) {                                     //��Ϊ������ǰ����const��Ϊֻ��
	for (deque<int>::const_iterator i = deq.begin(); i != deq.end(); i++) {  //�ڵ�����ǰ����const_
		//*i = 10;  //��Ϊ����ǰ����const�����ֻ�ܶ�����д�����ǿ��޸ĵ���ֵ
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d;
	for (int i = 0; i < 10; i++) {
		d.push_back(i);
	}
	printDeque(d);

	//2�� deque(beg, end);                    //���캯����(beg, end)�����е�Ԫ�ؿ���������
	deque<int>d2(d.begin(), d.end());
	printDeque(d2);

	//3��deque(n, elem);                     //���캯����n��elem����������
	deque<int> d3(6, 6);
	printDeque(d3);

	//4��deque(const deque& deq);            //�������캯��
	deque<int>d4(d3);
    printDeque(d4);
}
int main() {
	test01();

	system("pause");
	return 0;
}