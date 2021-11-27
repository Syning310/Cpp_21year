#include<iostream>
using namespace std;
#include<map>

//总结：map中所有元素都是成对出现，插入数据时必须使用对组

//map插入（insert） 需要在里面写匿名对组；匿名对组会把两个数据insert入map容器
//pair    （对组）

/*
  map<T1, T2> mp;                         //map默认构造函数
  map(const map& mp);                     //拷贝构造函数

  map& operator=(cosnt map& mp);          //重载等号运算符
 
*/
void printmap(map<int, int>& m) {
	for (map<int, int>::iterator i = m.begin(); i != m.end(); i++) {
		cout << "key值为：  " << i->first << "\tvalue值为：  " << (*i).second << endl;
	}cout << endl;
}
void test01() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));  //(pair)是匿名的对组，匿名对象；把这对匿名对组insert入map容器中；匿名对象这行代码执行结束自动释放
	m.insert(pair<int, int>(5, 50));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(2, 20));
	printmap(m);

	//拷贝构造
	map<int, int> m2(m);
	printmap(m2);

	//等号赋值
	map<int, int> m3;
	m3 = m2;
	printmap(m3);

}
int main() {
	test01();


	system("pause");
	return 0;
}