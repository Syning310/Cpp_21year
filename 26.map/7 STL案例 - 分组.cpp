#include<iostream>
using namespace std;
#include<vector>
#include<map>

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
	
};

void test01() {
	Person p1("无月", 150000);
	Person p2("灵希", 2500);
	Person p3("卿儿", 4000);
	Person p4("夏瑜", 3000);
	Person p5("洛姬", 3000);
	Person p6("梵心", 5000);
	Person p7("罗乷", 2500);
	Person p8("池瑶", 3100);
	vector<Person> vp;
	vp.push_back(p1);vp.push_back(p2);vp.push_back(p3);vp.push_back(p4);vp.push_back(p5);vp.push_back(p6);vp.push_back(p7);vp.push_back(p8);	
	/*for (vector<Person>::iterator i = vp.begin(); i != vp.end(); i++) {
		cout << "姓名：  " << i->m_Name << "\t年龄：" << i->m_Age << endl;
	}*/
	
	multimap<string, Person> mp;
	mp.insert(make_pair("地狱", p1)); mp.insert(make_pair("地狱", p2)); mp.insert(make_pair("星恒天", p3)); mp.insert(make_pair("地狱", p4));
	mp.insert(make_pair("星恒天", p5)); mp.insert(make_pair("天庭", p6)); mp.insert(make_pair("地狱", p7)); mp.insert(make_pair("天庭", p8));
	
	for (multimap<string, Person>::iterator i = mp.begin(); i != mp.end(); i++) {
		cout << "所属：" << i->first << "\t姓名：  " << i->second.m_Name << "\t年龄：  " << i->second.m_Age << endl;
	}
	

}
int main() {
	test01();

	system("pause");
	return 0;
}