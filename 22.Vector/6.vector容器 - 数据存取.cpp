#include<iostream>
using namespace std;
#include<vector>

//总结：除了用迭代器获取vector容器中的元素，[]和at也可以
//      front返回容器第一个元素       front（前面）
//      back返回容器最后一个元素      back（背部）

/*
  at(int idx);                     //返回索引idx所指的数据
  operator[];                      //返回索引idx所指的数据
  front();                         //返回容器中第一个数据元素
  back();                          //返回容器中最后一个数据元素
*/

void test01() {
	vector<int> v1;
	for (int i = 0; i < 6; i++) {
		v1.push_back(i);
	}
	for (int i = 0; i < v1.size(); i++) {
	//operator[];                      //返回索引idx所指的数据
		cout << v1[i] << " ";
	}cout << endl;

	for (int i = 0; i < v1.size(); i++) {
		//at(int idx);                     //返回索引idx所指的数据
		cout << v1.at(i) << " ";
	}cout << endl;

	//front();                         //返回容器中第一个数据元素
	cout << "第一个元素为：  " << v1.front() << endl;

	//back();                          //返回容器中最后一个数据元素
	cout << "最后一个元素为：  " << v1.back() << endl;

}


int main() {
	test01();

	system("pause");
	return 0;
}