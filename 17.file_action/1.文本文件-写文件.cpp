#include<iostream>
using namespace std;
#include<fstream>  //1、头文件包含


/*
  通过文件可以将数据持久化
  C++中对文件操作需要包含文件<fstream>

  文本文件：  文件以文本的ASCLL码形式存储在计算机中
  二进制文件：  文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂，因为二进制是0和1组成的

  操作文件的三大类：
    1.ofstream: 写操作
    2.ifstream: 读文件
    3.fstream : 读写操作
    第一步包含头文件、第二步创建流对象ofs（写文件），ifs（读文件）、第三步打开文件ofs.open("文件路径", 打开方式);
    第四步写数据ofs << "写入的数据";最后一步关闭文件 ofs.close();

*/

void test01() {
    //第二步创建流对象
    ofstream out;
    
    //第三步打开文件.open("文件路径", 打开方式);
    out.open("aaa.txt", ios::out);

    //第四步写数据
    out << "i ma shangyining ";

    //第五步关闭文件
    out.close();

}
int main() {
    test01();

    system("pause");
    return 0;
}





void test01() {
	//2、创建流对象
	ofstream ofs;
	//3、指定打开方式
	ofs.open("test.txt", ios::out);
    //4、写内容
	ofs << "姓名： 翁金港" << endl;
	ofs << "性别： 男" << endl;
	ofs << "年龄： 21" << endl;
	//5、关闭文件
	ofs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}