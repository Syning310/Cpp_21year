#include<iostream>
using namespace std;

//C++中允许父子之间的类型转换，不需要作强制的类型转换，父类的指针可以直接指向子类对象

//静态多态的函数地址早绑定：  编译阶段确定函数地址
//动态多态的函数地址晚绑定：  运行阶段确定函数地址
//函数前加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了

class Animal {
public:
	virtual void speak(){  //虚函数
		cout << "动物在说话" << endl;
	}
};
class Cat : public Animal {
public:
	//重写的概念  函数返回值  函数名  参数列表  完全相同
	void speak() {
		cout << "小猫在说话" << endl;
	}
};
class Dog : public Animal {
public:
	void speak() {
		cout << "小狗在说话" << endl;
	}
};
//地址早绑定  在编译阶段就确定了函数的地址
//如果想执行猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段绑定，也就是地址晚绑定
void doSpeak(Animal& animal) {    // Animal& animal = cat;
	animal.speak();  
}
void test01() {
	Cat cat;
	doSpeak(cat); 
	Dog dog;
	doSpeak(dog);
}
//动态多态满足条件：
//1、有继承关系；
//2、子类要重写父类的虚函数；

//动态多态的使用 
//父类的指针或者引用 指向子类对象

int main() {

	test01();


	system("pause");
	return 0;
}

//由于我们书写了一个虚函数，类的内部发生了结构的改变，多了一个虚函数表指针，指针指向一个虚函数表
//虚函数内部存放的内容是，虚函数的函数入口地址，当子类重写了虚函数表，他会把自身继承下来的虚函数表中的原本函数给替换掉
//替换成子类的函数，所以当用父类的引用去指向子类的对象时，由于本身还是一个子类对象，
//所以当我们去调用这个公共的speak接口时，他会从子类的虚函数表中找子类函数的地址
//