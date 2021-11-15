#include<iostream>
using namespace std;



struct Student    //1、定义学生的结构体  此时Student自成一种数据类型
{
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main() {
	//2、创建学生的结构体变量
	struct Student s = { "红尘", 18, 100 };

	//3、通过指针指向结构体变量
	Student* p = &s;    //数据类型要相同才能创建指针


	//4、通过指针访问结构体变量中的数据

	p->name;  //  "->"  结构体中使用指针要"p->"

	cout << "姓名：  " << p->name << endl;
	cout << "年龄：  " << p->age << endl;
	cout << "成绩：  " << p->score << endl;

	system("pause");
	return 0;
} 