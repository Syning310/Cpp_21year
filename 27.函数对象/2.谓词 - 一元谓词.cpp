#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

/*
  概念：
    返回bool类型的仿函数称为谓词
	如果operator()接收一个参数，那么叫做一元谓词
	如果operator()接收两个参数，那么叫做二元谓词
*/

class GreaterFive {
public:
	bool operator()(int val) {  //小括号中如果时一个参数就是一元谓词，如果是两个参数就是二元谓词
		return val > 5;  //大于5的为true
	}
};
void test01() {
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	//查找容器中有没有大于5的数字
	vector<int>::iterator i = find_if(v.begin(), v.end(), GreaterFive());  //GreaterFive()这个是匿名的函数对象；因为前面没有创建出一个函数对象
	//如果找到了会返回满足条件元素的迭代器的位置，如果没有找到返回end()；所以要用迭代器去接收这个结果
	if (i == v.end()) {
		cout << "未找到满足条件的元素！！！" << endl;
	}
	else {
		cout << "找到了大于5的元素为：  " << *i << endl;
	}

}
int main() {
	test01();

	system("pause");
	return 0;
}