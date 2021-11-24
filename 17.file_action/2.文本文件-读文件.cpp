#include<iostream>
using namespace std;
#include<fstream>  //1��ͷ�ļ�
#include<string>

/*
  1������ͷ�ļ�
  2������������
  3�����ļ����ж��ļ��Ƿ�򿪳ɹ�
  4��������  ���ֶ�ȡ��ʽ
  5���ر��ļ�
*/

void test01() {
	ifstream in;  //2������������
    
	in.open("aaa.txt", ios::in);

	//3�����ļ����ж��ļ��Ƿ�򿪳ɹ�
	if (!in.is_open()) {    //in.is_open ���������ж��Ƿ���ˣ�����ԭ�ͷ��ص���bool;�򿪳ɹ����ص���true����ʧ�ܷ��ص���false
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}

	// 4��������  ���ֶ�ȡ��ʽ

	//��һ��
	char b[1024] = { 0 };
	while (in >> b) {
		cout << b;
	}cout << endl;

	//�ڶ���
	char buf[1024] = { 0 };
	while (in.getline(buf, sizeof(buf)))
	{
		cout << buf;
	}
	cout << endl;

	//������  �Ƽ�
	string be;
	while (getline(in, be)) {    //getline(in(����), be(�ַ���))
		cout << be;
	}cout << endl;

	//������
	char c;
	while ((c = in.get()) != EOF) {  //EOF end of file  ��˼��ֻҪû�ж����ļ�β���Ǿ�һֱ��
		cout << c;
	}cout << endl;

    //5���ر��ļ�
	in.close();
}
int main() {
	test01();

	system("pause");
	return 0;
}



void test01() {
	//2������������
	ifstream ifs;
	//3�����ļ� ���ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	//4��������
	//����һ��
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//��������
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}
	//�����ģ�
	char c;
	while ((c = ifs.get()) != EOF)  //EOF end of file  ��˼��ֻҪû�ж����ļ�β����һֱ��
	{
		cout << c;
	}
	
	
	//��������
	string buf;  
	while ( getline(ifs, buf) ) {
		cout << buf << endl;
	}

	//5���ر��ļ�
	ifs.close();
}
int main() {
	test01();


	system("pause");
	return 0;
}