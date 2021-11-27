#include<iostream>
using namespace std;
#include<queue>

/*  queue（队列）基本概念：与stack相反，queue是一种先进先出的容器，它有两个出口，队头与队尾两端相望
    队头这一端只能出数据，队尾这一端只能进数据；进入过程叫入队push()，出数据的过程叫出队pop()
	队列容器只允许从队尾新增元素，从队头移除元素
	队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为，只能得到队头和队尾的元素

	构造函数：
	  queue<T> que;
	  queue(const queue& que);
	赋值操作：
	  queue& operator=(const queue& que);
	数据存取：
	  push(elem);
	  pop();
	  back();
	  front();
	大小操作：
      empty();
      size();

*/

class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01() {
	queue<person> q;
	person p1("无月", 150000);
	person p2("飞羽", 4000);
	person p3("红尘", 28);
	person p4("孔乐", 1000);
	person p5("卿儿", 6000);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "队列大小为：  " << q.size() << endl;
	//判断只要队列不为空，查看队头，查看队尾，执行出队
	while (!q.empty()) {
		cout << "队头 --- 姓名：  " << q.front().m_Name << "\t年龄：  " << q.front().m_Age << endl;
		cout << "队尾 --- 姓名：  " << q.back().m_Name << "\t年龄：  " << q.back().m_Age << endl;
		q.pop();
	}
	cout << "队列大小为：  " << q.size() << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}