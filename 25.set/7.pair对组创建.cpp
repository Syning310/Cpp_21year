#include<iostream>
using namespace std;

//pair���������ݷ��ʷ�ʽ����һ�����ݣ�first����һ�����ڶ������ݣ�second���ڶ���

/*
  ���ܣ�
    �ɶԳ��ֵ����ݣ����ö�����Է�����������
  ���ִ�����ʽ��
    pair<type, type> p ( value, value2 );
	pair<type, type> p = make_pair( value1, value2 );

*/
void test01() {
	//pair<type, type> p ( value, value2 );
	pair<string, int> p("�쳾", 20);
	cout << "������  " << p.first << "\t���䣺   " << p.second << endl;

	//pair<type, type> p = make_pair( value1, value2 );
	pair<string, int> w = make_pair("����", 18);
    cout << "������  " << w.first << "\t���䣺   " << w.second << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}