#include<iostream>
using namespace std;

  //结构体变量利用操作符 " . "访问成员

  //  1、创建学生数据类型  ：  学生包括（姓名，年龄，分数）

	
	//struct  结构体名  {结构体成员列表};
struct Student    //自定义的数据类型，就是一些类型集合组成的一个类型
{
	//成员列表

	string name;  //姓名	

	int age;      //年龄

	int score;    //分数
}s3;  //顺便创建结构体变量
	
	//2、通过学生类型创建具体学生	 
	//2.1 struct Student s1;
	
	//2.3 在定义结构体时顺便创建结构体变量

int main() {
	
	//2.1 struct Student s1;    与int a 创建一个变量的意思一样
	struct Student s1;  //然后给s1属性赋值,
	s1.name = "小翁";
	s1.age = 21;
	s1.score = 80;

	cout << "  姓名：" << s1.name << "  年龄：" << s1.age << "  分数：" << s1.score << endl;


    //2.2 struct Student s2 = { ... } ;
	struct Student s2 = { "小张", 21, 100 };

	cout << "  姓名：" << s2.name << "  年龄：" << s2.age << "  分数：" << s2.score << endl;


	//2.3 在定义结构体时顺便创建结构体变量
	s3.name = "灵希";
	s3.age = 23;
	s3.score = 100;

	cout << "  姓名：" << s3.name << "  年龄：" << s3.age << "  分数：" << s3.score << endl;
	
	system("pause");
	return 0;
}