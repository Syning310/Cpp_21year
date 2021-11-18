#include<iostream>
using namespace std;

const double PI = 3.14;  //圆周率

//设计一个圆类（class），求圆的周长
//求园的周长，公式：2 * PI * 半斤

//class代表设计一个类，类后面紧跟着的就是类的名称

class circle  //圆类
{
	//访问权限
	//公共权限
public:

	//属性
	int m_r;  //半径

	//行为  获取圆的周长      行为在代码中通常是书写函数
	double calculateZC() {
		return 2 * PI * m_r;
	}

};



int main() {
	//通过圆类  创建具体的圆（对象）
	circle c1;  //实例化 —— 通过一个类，来创建一个对象的过程叫实例化
	//给圆对象  的属性进行赋值
	c1.m_r = 10;

	cout << "圆的周长为：  " << c1.calculateZC() << endl;

	system("pause");
	return 0;
}


//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学校
class student
{
public:
	//属性
	string m_name;  //姓名
	int m_id;  //学号
	string school;  //学校
	
	//行为
	void setstudent(string name, int id,string school = "人民大学") {  //打印学生姓名，学号，学校
		cout << "姓名 ： " << name << endl;
		cout << "学号 ： " << id << endl;
		cout << "学校 ： " << school << endl;
	}

};

int main() {
	student s1;
	s1.setstudent("红尘", 22250);


	system("pause");
	return 0;
}


class student {
public:

	//类目中的属性和行为，统一称为成员
	//属性——成员属性  成员变量
	//行为——成员函数  成员方法
	

	//属性
	string Name;
	int ID;
	//行为  显示姓名和学号
	void showstudent() {
		cout << "姓名 ： " << Name << "    "
		     << "学号 ： " << ID << endl;
	}
	//利用行为给姓名赋值
	void setname(string name) {
		Name = name;
	}
	void setid(int id) {
		ID = id;
	}
};

int main() {
	student S3;
	S3.setname("羽烟");
	S3.setid(4545131);
	S3.showstudent();
	student S4;
	S4.setname("灵希");
	S4.setid(666666);
	S4.showstudent();
	
	student S1;
	S1.Name = "红尘";
	S1.ID = 10000;
	S1.showstudent();
	student S2;
	S2.Name = "孔乐";
	S2.ID = 56990372;
	S2.showstudent();
	
	


	system("pause");
	return 0;
}