#include<iostream>
using namespace std;
#include<deque>

//�ܽ᣺deque��ֵ������vector������ȫ��ͬ

/*
  deque& operator=(const deque& deq);             //���صȺ������
  assign(beg, end);                               //��(beg, end)�����е����ݿ�����ֵ������
  assign(n, elem);                                //��n��elem������ֵ������
*/

void printDeque(const deque<int>& deq) {
	for (deque<int>::const_iterator i = deq.begin(); i != deq.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque(d1);

	//1��deque& operator=(const deque& deq);             //���صȺ������
	deque<int> d2 = d1;
	printDeque(d2);

	//2��assign(beg, end);                               //��(beg, end)�����е����ݿ�����ֵ������
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque(d3);

	//3��assign(n, elem);                                //��n��elem������ֵ������
	deque<int> d4;
	d4.assign(6, 6);  //assign ��ֵ
	printDeque(d4);
}

int main() {
	test01();

	system("pause");
	return 0;
}