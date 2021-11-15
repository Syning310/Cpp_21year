#include<iostream>
using namespace std;


//总结：在结构体中可以定义另一个结构体作为成员，用来解决实际的问题

//2、定义学生的结构体
struct student
{
	string name;
	int age;
	int score;
};

//1、定义老师结构体
struct teacher
{
	int id;        //教师编号
	string name;   //教师姓名
	int age;       //教师年龄
	struct student stu;  //在结构体中可以定义另一个结构体作为成员，用来解决实际的问题
};

int main() {
	//3、给老师结构体赋值
	struct teacher t;
	t.name = "亦宁";
	t.id = 1546878513;
	t.age = 10000;
	t.stu.name = "红尘";
	t.stu.age = 20;
	t.stu.score = 90;
	cout << "  老师的姓名：  " << t.name << endl;
	cout << "  老师的编号：  " << t.id << endl;
	cout << "  老师的年龄：  " << t.age << endl;
	cout << "  老师的学生：  " << t.stu.name << endl;
	cout << "  学生的年龄：  " << t.stu.age << endl;
	cout << "  学生的成绩：  " << t.stu.score << endl;

	system("pause");
	return 0;
}