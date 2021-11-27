#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//注意：两个容器必须是有序序列
//intersection返回值是交集elem中的最后一个elem的位置

/*
  集合算法：
    set_intersection               //求两个容器的交集  ——  交集就是两个容器中重复的elem
	set_union                      //求两个容器的并集  ——  并集就是两个容器中不重复的elem + (重复的elem只留一个)
	set_difference                 //求两个容器的差集  ——  差集是相对的；求v1和v2的差集，得到的是v1在v2中不重复的elem，重复的去除
	                                                                       求v2和v1的差集，得到的是v2在v1中不重复的elem，重复的去除
*/

//the function prototype : set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);


class MyPrint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 3);
	}
	cout << "交集前：" << endl;
	for_each(v1.begin(), v1.end(), MyPrint()); cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint()); cout << endl;


	vector<int> Target;  //目标容器;需要提前开辟空间，两个容器最特殊的情况就是其中一个容器包含另一个容器的所有elem
	                     //所以开辟最小的容器的空间即可
	Target.resize(min(v1.size(), v2.size()));  //min()返回的是取最小的值

	//gets the intersection
	vector<int>::iterator i = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), Target.begin());

	cout << "v1和v2的交集有：" << endl;
	for_each(Target.begin(),i, MyPrint()); cout << endl;  
	//因为resize可能会扩展出多余的空间，而多余的空间填充的elem为0；所以遍历时的结束迭代器要填 i；
	//i指向的是两个容器的交集中的最后一个elem
  
}
int main() {
	test01();

	system("pause");
	return 0;
}