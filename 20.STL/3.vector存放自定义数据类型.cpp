#include<iostream>
using namespace std;
#include<vector>


class east {
public:
	east(string name, int age) {
		this->m_Age = age;
		this->m_Name = name;
	}
	
	string m_Name;
	int m_Age;
};
void test01() {
	vector<east> e;
	east p1("青青", 25);
	east p2("红尘", 10);
	east p3("飞羽", 40);
	east p4("无月", 50);
	east p5("灵希", 20);

	//利用尾插法，向容器中添加数据
	e.push_back(p1);
	e.push_back(p2);
	e.push_back(p3);
	e.push_back(p4);
	e.push_back(p5);

	//遍历容器中的数据      i就跟指针一样，解引用出来的数据类型就是<east>里的数据类型；使用方法也可以 i->m_Name
	for (vector<east>::iterator i = e.begin(); i < e.end(); i++) {
		//cout << "姓名：  " << (*i).m_Name << "\t年龄：  " << (*i).m_Age << endl;
		cout << "姓名：  " << i->m_Name << "\t年龄：  " << i->m_Age << endl;
	}

}

//存放自定义数据类型  指针
void test02() {
	vector<east*> e;
	east p1("青青", 25);
	east p2("红尘", 10);
	east p3("飞羽", 40);
	east p4("无月", 50);
	east p5("灵希", 20);

	//利用尾插法，向容器中添加数据
	e.push_back(&p1);
	e.push_back(&p2);
	e.push_back(&p3);
	e.push_back(&p4);
	e.push_back(&p5);

	//遍历容器            //i是一个指针 解引用出来的数据类型也还是一个指针，所以要解引用两次才能拿出地址中的数据
	for (vector<east*>::iterator i = e.begin(); i < e.end(); i++) {
		//cout << "姓名：  " << (*(*i)).m_Name << "\t年龄：  " <<(*(*i)).m_Age << endl;  //或者
		cout << "姓名：  " << (*i)->m_Name << "\t年龄：  " << (*i)->m_Age << endl;

	}

}
int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}