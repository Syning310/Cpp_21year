#include<iostream>
using namespace std;
#include<fstream>  //1、头文件
#include<string>

/*
  1、包含头文件
  2、创建流对象
  3、打开文件并判断文件是否打开成功
  4、读数据  四种读取方式
  5、关闭文件
*/

void test01() {
	ifstream in;  //2、创建流对象
    
	in.open("aaa.txt", ios::in);

	//3、打开文件并判断文件是否打开成功
	if (!in.is_open()) {    //in.is_open 的作用是判断是否打开了，函数原型返回的是bool;打开成功返回的是true；打开失败返回的是false
		cout << "文件打开失败！" << endl;
		return;
	}

	// 4、读数据  四种读取方式

	//第一种
	char b[1024] = { 0 };
	while (in >> b) {
		cout << b;
	}cout << endl;

	//第二种
	char buf[1024] = { 0 };
	while (in.getline(buf, sizeof(buf)))
	{
		cout << buf;
	}
	cout << endl;

	//第三种  推荐
	string be;
	while (getline(in, be)) {    //getline(in(对象), be(字符串))
		cout << be;
	}cout << endl;

	//第四种
	char c;
	while ((c = in.get()) != EOF) {  //EOF end of file  意思是只要没有读到文件尾，那就一直读
		cout << c;
	}cout << endl;

    //5、关闭文件
	in.close();
}
int main() {
	test01();

	system("pause");
	return 0;
}



void test01() {
	//2、创建流对象
	ifstream ifs;
	//3、打开文件 并判断是否打开成功
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	//4、读数据
	//方法一：
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//方法二：
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf))) {
		cout << buf << endl;
	}
	//方法四：
	char c;
	while ((c = ifs.get()) != EOF)  //EOF end of file  意思是只要没有读到文件尾，就一直读
	{
		cout << c;
	}
	
	
	//方法三：
	string buf;  
	while ( getline(ifs, buf) ) {
		cout << buf << endl;
	}

	//5、关闭文件
	ifs.close();
}
int main() {
	test01();


	system("pause");
	return 0;
}