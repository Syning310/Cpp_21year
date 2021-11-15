#include<iostream>
using namespace std;


//结构体定义
struct Student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //成绩
};

//结构体数组语法
//struct student 数组名[ 元素个数 ] = { {}, {}, ...{} };
int main() {
	//1、创建结构体数组
	struct Student stuArray[3] =
	{
		{"小翁", 21 ,100 },//2、给结构体数组中的元素赋值
		{"灵希", 23 ,150 },
		{"小黑", 21 ,100 }
	};

	//后期改数组中的数据
	stuArray[2].name = "星灵";
	stuArray[2].age = 22;
	stuArray[2].score = 300;

	//4、遍历结构体数组
	for (int i = 0; i < 3; i++) {

		cout << "  姓名：  " << stuArray[i].name 
			 << "  年龄：  " << stuArray[i].age 
			 << "  分数：  " << stuArray[i].score << endl;
	};



	system("pause");
	return 0;
}