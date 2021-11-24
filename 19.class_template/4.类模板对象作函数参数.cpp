#include<iostream>
using namespace std;

//1、指定传入的类型 ——  直接显示对象的数据类型
//2、参数模板化     ——  将对象中的参数变为模板进行传递
//3、整个类模板化   ——  将这个对象类型 模板化进行传递

template<typename T1, typename T2>
class Shang {
public:
	Shang(T1 name, T2 age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowInfo() {
		cout << "姓名：  " << this->m_Name << "\t年龄：  " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};
  //1、指定传入的类型 ——  直接显示对象的数据类型
void PrintShang(Shang<string, int>& s) {
	s.ShowInfo();
}
void test01() {
	Shang<string, int> s("尚亦宁", 2000);
	PrintShang(s);
}

  //2、参数模板化     ——  将对象中的参数变为模板进行传递
template<typename T1, typename T2>  //将函数变为模板，把形参数据类型变为模板类型，这样就可以在形参列表中传入模板数据类型
void PrintShang2(Shang<T1, T2>& w) {
	w.ShowInfo();
    cout << "T1 = " << typeid(T1).name() << "\tT = " << typeid(T2).name() << endl;
}
void test02() {
	Shang<string, int>w("无月", 130000);
	PrintShang2(w);

}

  //3、整个类模板化   ——  将这个对象类型 模板化进行传递
template<typename T>       
void PrintShang3(T& l) {   //将函数变为模板，不过这次是把整个类，变为模板类型让编译器推导
	l.ShowInfo();
	cout << "T = " << typeid(T).name() << endl;  
}
void test03() {
	Shang<string, int> l("飞羽", 2400);
	PrintShang3(l);
}
int main() {
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}