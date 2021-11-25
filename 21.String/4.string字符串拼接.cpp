#include<iostream>
using namespace std;

/*
 1��string& operator+=(const char* str);                   //����+=������
 2��string& operator+=(const char c);                      //����+=������
 3��string& operator+=(const string& str);                 //����+=������
 4��string& append(const char* s);                         //���ַ���s���ӵ���ǰ�ַ�����β
 5��string& append(const char* s, int n);                  //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
 6��string& append(const string& s);                       //ͬoperator+=(const string& str)
 7��string& append(const string& s, int pos, int n);       //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

void test01() {
	//1��string& operator+=(const char* str);                   //����+=��������׷��һ���ַ�
	string str1 = "would";
	str1 += " you mind helping me";
	cout << "str1 = " << str1 << endl;

	//2��string& operator+=(const char c);                      //����+=��������׷��һ���ַ�
	str1 += "?";
	cout << "str1 = " << str1 << endl;

	//3��string & operator+=(const string & str);                 //����+=��������׷��һ��stringͬ���Ͷ���
	string str2 = "  please ";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	//4��string & append(const char* s);                         //���ַ���s���ӵ���ǰ�ַ�����β
	string str4 = "they";
	str4.append(" are twins ");
	cout << "str4 = " << str4 << endl;

	//5��string& append(const char* s, int n);                  //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	str4.append("but their personalities differ",10);
	cout << "str4 = " << str4 << endl;

	//6��string& append(const string& s);                       //ͬoperator+=(const string& str)
	string str5 = "personalities differ";
	str4.append(str5);
	cout << "str4 = " << str4 << endl;

	//7��string& append(const string& s, int pos, int n);       //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
	str4.append(str1, 14, 11);       //�ӵڼ����±꿪ʼ��ȡ���ٸ�
	cout << "str4 = " << str4 << endl;

}

int main() {
	test01();

	system("pause");
	return 0;
}