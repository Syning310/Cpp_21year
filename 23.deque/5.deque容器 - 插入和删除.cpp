#include<iostream>
using namespace std;
#include<deque>

/*    
  ���˲��������
  push_back(elem);                              //������β�����һ������
  push_front(elem);                             //������ͷ������һ������
  pop_back();                                   //ɾ���������һ������
  pop_front();                                  //ɾ��������һ������

  ָ��λ�ò�����   //ͨ��������ָ����λ�ã� begin()  end()
  insert(pos, elem);                            //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
  insert(pos, n, elem);                         //��posλ�ò���n��elem���ݣ��޷���ֵ
  insert(pos, beg(), end());                    //��posλ�ò���[beg, end]��������ݣ��޷���ֵ
  clear();                                      //��������е���������
  erase(beg(), end());                          //ɾ��[beg, end]��������ݣ�������һ�����ݵ�λ��
  erase(pos);                                   //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
*/

void printdeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	deque<int> d1;
	//1��push_back(elem);                              //������β�����һ������
	d1.push_back(10); d1.push_back(20); d1.push_back(30); d1.push_back(40); d1.push_back(50);
	
	//2��push_front(elem);                             //������ͷ������һ������
	d1.push_front(100), d1.push_front(110), d1.push_front(120), d1.push_front(130), d1.push_front(140);
		printdeque(d1);

	//3��pop_back();                                   //ɾ���������һ������
		d1.pop_back();
	//4��pop_front();                                  //ɾ��������һ������
		d1.pop_front();
		printdeque(d1);
}


void test02() {
	deque<int> d;
	d.push_back(10);
	d.push_back(15);
	d.push_front(100);
	d.push_front(200);
	printdeque(d);

	//5��insert(pos, elem);                            //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
	d.insert(d.begin(), 1000);
	printdeque(d);

	//6��insert(pos, n, elem);                         //��posλ�ò���n��elem���ݣ��޷���ֵ
	d.insert(d.begin(), 2, 5);
	printdeque(d);

	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	//7��insert(pos, beg(), end());                    //��posλ�ò���[beg, end]��������ݣ��޷���ֵ
	//�������������в���
	d.insert(d.begin(), d2.begin(), d2.end());
	printdeque(d);

	//10��erase(pos);                                   //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
	deque<int>::iterator i = d.begin();
	i += 5;
	d.erase(i);
	printdeque(d);

	//9��erase(beg(), end());                          //ɾ��[beg, end]��������ݣ�������һ�����ݵ�λ��
	d.erase(d.begin(), d.end());
	printdeque(d);

	//8��clear();                                      //��������е���������
	d.clear();
	printdeque(d);

}
int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}