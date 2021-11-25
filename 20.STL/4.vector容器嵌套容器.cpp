#include<iostream>
using namespace std;
#include<vector>

void test01() {
	//容器可以理解为数组，容器嵌套容器就可以理解为二维数组
	vector<vector<int>> e;  //容器嵌套容器  

	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//向小容器中添加数据
	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);  //尾插法添加数据
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//将小容器插入到大容器中
	e.push_back(v1);
	e.push_back(v2);
	e.push_back(v3);
	e.push_back(v4);

	//通过大容器，把所有数据遍历一遍          把迭代器看作指针；把迭代器看作指针；把迭代器看作指针
	for (vector<vector<int>>::iterator i = e.begin(); i != e.end(); i++) {
		//i是一个指针数据类型是vector<vector<int>>
		//*i  解引用后里面还是一个容器： vector<int>
		for (vector<int>::iterator vi = (*i).begin(); vi != (*i).end(); vi++) {
			cout << *vi << "  ";
		}cout << endl;

	}

}

int main() {
	test01();

	system("pause");
	return 0;
}