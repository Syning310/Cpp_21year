#include<iostream>
using namespace std;
#include<fstream>  //1、头文件



/*
  the function prototype : istream& read(char* buffer, int len);
  字符指针buffer指向内存中一段存储空间，len是读写的字节数
*/

class Person {
public:

	char m_Name[64];
	int m_Age;
};
void test01() {
	//2、创建对象
	ifstream in;
	//3、打开文件  读文件需要先判断是否打开成功
	in.open("Person", ios::in | ios::binary);  //二进制操作要加上ios::binary

	if (!in.is_open()) {   //打开成功返回的是true
		cout << "文件不存在或为空！" << endl;
	}
	//4、读文件
	Person p;
	in.read((char*)&p, sizeof(Person));

	cout << "姓名： " << p.m_Name << "  年龄: " << p.m_Age << endl;
	//5、关闭文件
	in.close();

}
int main() {
	test01();

	system("pause");
	return 0;
}

class forefinger {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
    //2、创建流对象
	ifstream ifs;

    //3、打开文件  判断文件是否打开成功
	ifs.open("forefinger.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//4、读文件
	forefinger f;
	ifs.read( (char*)&f, sizeof(forefinger) );
	cout << "姓名：  " << f.m_Name << "    年龄：  " << f.m_Age << endl;

	//5、关闭文件
	ifs.close();
}

int main() {
	test01();


	system("pause");
	return 0;
}