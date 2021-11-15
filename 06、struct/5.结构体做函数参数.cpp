#include<iostream>
using namespace std;

//将结构体作为参数想函数中传递，分为两种：
//值传递：无论形参如何改变，都不会改变实参
//地址传递：形参发生改变，实参也会跟着发生改变
struct girl
{
	string name;
	int age;
	int score;
	
};

//1、值传递
void printgirl1(girl z) {
	cout << "子函数中打印    姓名：" << z.name << "  年龄：" << z.age << "  成绩：" << z.score << endl;
}
//2、地址传递
void printgirl2(girl* p) {
	cout << "子函数2中打印  姓名：" << p->name << "  年龄：" << p->age << "  成绩：" << p->score << endl;
}

int main() {
	//将girl传入到一个参数中，打印girl身上的信息
	girl z;
	z.name = "红尘";
	z.age = 22;
	z.score = 80;
    printgirl1(z);   //值传递
	printgirl2(&z);  //地址传递
	cout << sizeof(girl) << endl;

	system("pause");
	return 0;
}