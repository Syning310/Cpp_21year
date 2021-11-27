#include<iostream>
using namespace std;
#include<list>

/*
  push_back(elem);                                     //������β������һ��Ԫ��
  pop_back();                                          //ɾ�����������һ��Ԫ��
  push_front(elem);                                    //��������ͷ����һ��Ԫ��
  pop_front();                                         //��������ͷ�Ƴ���һ��Ԫ��
  insert(pos, elem);                                   //��posλ�ò���elemԪ�صĿ��������������ݵ�λ�ã�pos�ǵ�����
  insert(pos, n, elem);                                //��posλ�ò���n��elemԪ�صĿ������޷���ֵ
  insert(pos, beg(), end());                           //��posλ�ò���[beg(), end()]��������ݣ��޷���ֵ
  clear();                                             //�Ƴ������е���������
  erase(beg(), end());                                 //ɾ��[beg(), end()]��������ݣ�������һ�����ݵ�λ��
  erase(pos);                                          //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
  remove(elem);                                        //ɾ��������������elemֵƥ���Ԫ��

  erase ������remove �Ƴ��� insert ����
*/
void printlist(const list<int>& l) {
	for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}
void test01() {
	list<int> l;
	//push_front(elem);                                    //��������ͷ����һ��Ԫ��
	l.push_front(10); l.push_front(20); l.push_front(30); l.push_front(40); l.push_front(50);
	printlist(l);

	//insert(pos, elem);                                   //��posλ�ò���elemԪ�صĿ��������������ݵ�λ�ã�pos�ǵ�����
	list<int>::iterator it = l.begin();
	l.insert(++it, 100);
	printlist(l);

	//erase(pos);                                          //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
	it = l.begin();
	l.erase(it);
	printlist(l);

	//remove(elem);                                        //ɾ��������������elemֵƥ���Ԫ��;remove �Ƴ�
	l.remove(100);
	printlist(l);

	//clear();                                             //�Ƴ������е���������
	l.clear();
	printlist(l);

}
int main() {
	test01();


	system("pause");
	return 0;
}