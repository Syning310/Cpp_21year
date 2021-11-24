#include<iostream>
using namespace std;
#include<fstream>    //1、包含头文件


/*
  二进制文件
    打开方式要指定ios::binary
	the function prototype : opsream& write(const chat* buffer, int len);
	字符指针buffer指向内存中一段存储空间，len是读写的字节数
*/

class Person {
public:

	char m_Name[64];
	int m_Age;
};

void test01() {
	//2、创建流对象
	ofstream out;

	//3、打开文件
	out.open("Person", ios::out | ios::binary);   //用二进制方式写文件需要在后面加上 | ios::binary

	//4、写文件
    //opsream& write(const chat* buffer, int len);
	Person p = { "宁", 2000 };
	out.write((const char*)&p, sizeof(Person));

	//5、关闭文件
	out.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}



class forefinger {
public:
	char m_Name[64];  //姓名
	int m_Age;        //年龄
};

void test01() {
	//2、创建流对象
	ofstream ofs;

	//3、打开文件
	ofs.open("forefinger.txt", ios::out | ios::binary);

	//4、写文件
	forefinger f = { "红尘", 18 };
	ofs.write((const char*)&f, sizeof(forefinger));  //文件输出流对象  可以通过write函数，以二进制方式写数据

	//5、关闭文件
	ofs.close();
}
int main() {
	test01();

	system("pause");
	return 0;
}