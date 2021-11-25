#include<iostream>
using namespace std;
#include<vector>

//总结：vector赋值方式比较简单，使用operaor=，或者assign都可以

/*
  vector& operator=(const vector& vec);             //重载等号操作符
  assign(v.beg(), v.end());                         //将[beg, end]区间中的数据拷贝赋值给本身
  assign(n, elem);                                  //将n个elem拷贝赋值给本身
*/

void printVector(vector<int>& vec) {
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//1、vector& operator=(const vector& vec);             //重载等号操作符
	vector<int> v2;
	v2 = v1;   
	printVector(v2);

    //2、assign(v.beg(), v.end());                         //将[beg, end]区间中的数据拷贝赋值给本身
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector(v3);

	//3、assign(n, elem);                                  //将n个elem拷贝赋值给本身
	vector<int> v4;
	v4.assign(6, 6);
	printVector(v4);

}

int main() {
	test01();

	system("pause");
	return 0;
}