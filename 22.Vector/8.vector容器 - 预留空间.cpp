#include<iostream>
using namespace std;
#include<vector>


//功能：减少vector在动态扩展容量时扩展次数
//函数原型：reserve(int len);    //容器预留len个元素长度，预留位置不初始化，元素不可访问
//reserve  ——  储备


void test01() {
	vector<int> v;
	v.reserve(100000);  

	int num = 0;  //统计动态扩展的次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);

		if (p != &v[0]) {    //因为vector每一次动态扩展都要开辟新的内存空间，拷贝原来的数据
			p = &v[0];       //所以从p的每一次指向v的首地址，都是vector的一次动态扩展
			num++;
		}
	}
	cout << "num = " << num << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}