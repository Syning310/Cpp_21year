#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

//总结：利用fill可以将容器区间内元素填充为指定的值

//fill  填充
//the function prototype : fill(iterator beg, iterator end, value);  value -> 填充的值

void MyPrint(int value) {
	cout << value << " ";
}
void test01() {
	vector<int> v;
	v.resize(10);  //十个0

	//后期填充
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), MyPrint); cout << endl;
}
int main() {
	test01();

	system("pause");
	return 0;
}