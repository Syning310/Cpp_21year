#include<iostream>
using namespace std;
#include<fstream>  //1��ͷ�ļ�����


/*
  ͨ���ļ����Խ����ݳ־û�
  C++�ж��ļ�������Ҫ�����ļ�<fstream>

  �ı��ļ���  �ļ����ı���ASCLL����ʽ�洢�ڼ������
  �������ļ���  �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������Ϊ��������0��1��ɵ�

  �����ļ��������ࣺ
    1.ofstream: д����
    2.ifstream: ���ļ�
    3.fstream : ��д����
    ��һ������ͷ�ļ����ڶ�������������ofs��д�ļ�����ifs�����ļ��������������ļ�ofs.open("�ļ�·��", �򿪷�ʽ);
    ���Ĳ�д����ofs << "д�������";���һ���ر��ļ� ofs.close();

*/

void test01() {
    //�ڶ�������������
    ofstream out;
    
    //���������ļ�.open("�ļ�·��", �򿪷�ʽ);
    out.open("aaa.txt", ios::out);

    //���Ĳ�д����
    out << "i ma shangyining ";

    //���岽�ر��ļ�
    out.close();

}
int main() {
    test01();

    system("pause");
    return 0;
}





void test01() {
	//2������������
	ofstream ofs;
	//3��ָ���򿪷�ʽ
	ofs.open("test.txt", ios::out);
    //4��д����
	ofs << "������ �̽��" << endl;
	ofs << "�Ա� ��" << endl;
	ofs << "���䣺 21" << endl;
	//5���ر��ļ�
	ofs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}