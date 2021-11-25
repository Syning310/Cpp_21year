#include<iostream>
using namespace std;

/*
              find�����Ǵ�������rfind��������
              find�ҵ��ַ����󷵻ز��ҵ��ĵ�һ���ַ�λ�ã��Ҳ�������-1
              replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ���
*/

/*
 1��int find(const string& str, int pos = 0) const;         //����str��һ�γ���λ��,��pos��ʼ����
 2��int find(const char* s, int pos = 0) const;             //����s��һ�γ���λ��,��pos��ʼ����
 3��int find(const char* s, int pos, int n) const;          //��posλ�ò���s��ǰn���ַ���һ��λ��
 4��int find(const char c, int pos = 0) const;              //�����ַ�c��һ�γ���λ��
 5��int rfind(const string& str, int pos = npos) const;     //����str���һ��λ��,��pos��ʼ����
 6��int rfind(const char* s, int pos = npos) const;         //����s���һ�γ���λ��,��pos��ʼ����
 7��int rfind(const char* s, int pos, int n) const;         //��pos����s��ǰn���ַ����һ��λ��
 8��int rfind(const char c, int pos = 0) const;             //�����ַ�c���һ�γ���λ��
 9��string& replace(int pos, int n, const string& str);     //�滻��pos��ʼn���ַ�Ϊ�ַ���str
 10��string& replace(int pos, int n,const char* s);         //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

//���ң�����ָ���ַ����Ƿ����
//�滻����ָ����λ���滻�ַ���

void test01() {
	//����
	//1��int find(const string & str, int pos = 0) const;         //����str��һ�γ���λ��,��pos��ʼ����
	string str1 = "differ nature";
	int i = str1.find("ff");
	cout << "i = " << i << endl;
	int j = str1.find("fr");
	cout << "j = " << j << endl;  //û��fr����-1

	//5��int rfind(const string & str, int pos = npos) const;     //����str���һ��λ��,��pos��ʼ����
	int p = str1.rfind("na");    //rfind��find������rfind����������� find�������Ҳ���
	cout << "p = " << p << endl;
}

void test02() {
	//�滻
	string str = "differ natrre";
	//9��string& replace(int pos, int n, const string& str);     //�滻��pos��ʼn���ַ�Ϊ�ַ���str
	str.replace(10, 1, "uuuu");  //�ӵ�10��λ����1���ַ����滻��"uuuu"
	cout << "str = " << str << endl;

}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}