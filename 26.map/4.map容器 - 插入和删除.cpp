#include<iostream>
using namespace std;
#include<map>


/*
  insert(elem);                     //�������в���Ԫ��
  clear();                          //�������Ԫ��
  erase(pos);                       //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
  erase(beg, end);                  //ɾ������[beg, end]������Ԫ�أ�������һ��Ԫ�صĵ�����
  erase(key);                       //ɾ�������м�ֵΪkey��Ԫ��
*/

void printMap(const map<int, int>& p) {
	for (map<int, int>::const_iterator i = p.begin(); i != p.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
}
void test01() {
	map<int, int> p;
	//insert(elem);                     //�������в���Ԫ��
	// 
	//��һ��
	p.insert(pair<int, int>(1, 10));

	//�ڶ���
	p.insert(make_pair(2, 20));   //�Ƽ�ʹ��
	
	//������
	p.insert(map<int, int>::value_type(3, 30));

	//������  //���������ţ�����������ʹ���������
	p[4] = 40;

	//cout << p[5] << endl;  //������ʹ�������Ų���Ԫ�ص�ԭ����Ϊ���û���ҵ�keyֵΪ5�������Զ�����Ȼ��ֵvalueΪ0
	//[]��;������key���ʵ�value
	printMap(p);

	//erase(pos);                       //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
	p.erase(p.begin());
	printMap(p);

	//erase(key);                       //ɾ�������м�ֵΪkey��Ԫ��
	p.erase(3);  //ͨ��keyֵ��ɾ��Ԫ��
	printMap(p);

	p.clear();  //���
	printMap(p);

}
int main() {
	test01(); 

	system("pause");
	return 0;
}