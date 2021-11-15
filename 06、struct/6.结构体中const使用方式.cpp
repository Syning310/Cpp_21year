#include<iostream>
using namespace std;

struct wife {
	string name;
	int age;
	int appearance;
};

void printWife(const wife * a) {  //加入const之后只能读，不能改
	//a->age = 4500;  形参中加入const之后，一旦有修改就会报错，可以防止误操作
	cout << "姓名：" << a->name << "  年龄：" << a->age << "  容貌：" << a->appearance << endl;
}
int main() {
	wife z = { "卿",4000,100 };
	//使用函数打印结构体信息
	printWife(&z);

	cout << z.age << endl;
	system("pause");
	return 0;
}