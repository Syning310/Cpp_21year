#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>

//作用：洗牌，指定范围内的元素随机调整次序
//函数原型：random_shuffle(iterator beg, iterator end);  

void print(int val) {
		cout << val << " ";
	}

void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6); v.push_back(7);

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), print); cout << endl;

}
int main() {
	//可以加上随机数种子，让他每次洗牌后结果都不同
	srand((unsigned int)time(NULL));
	test01();


	system("pause");
	return 0;
}