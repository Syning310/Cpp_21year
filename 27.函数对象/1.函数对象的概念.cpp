#include<iostream>
using namespace std;

/*  函数对象 ---- 仿函数
  概念：
    重载函数调用操作符的类，其对象称为函数对象
    函数对象使用重载()时，行为类似函数调用，也叫仿函数
  本质：
    函数对象(仿函数)是一个类，不是一个函数
  特点：
    1、函数对象使用时，可以像普通函数那样调用，可以有参数，可以有返回值
    2、函数对象超出普通函数的概念，函数对象可以有自己的状态
    3、函数对象可以作为参数传递
*/

//总结：仿函数写用法非常灵活，可以作为参数进行传递

class MyAdd {
public:
    int operator()(int v1, int v2) {
        return v1 + v1;
    }
};

class MyPrint {
public:
    MyPrint() {
        this->count = 0;
    }
    void operator()(string speech) {
        cout << speech << endl;
        count++;
    }
    int count;  //内部的状态
};


void test01() {
    MyAdd myadd;  
    //1、函数对象使用时，可以像普通函数那样调用，可以有参数，可以有返回值
    cout << myadd(10, 10) << endl;  //类创建的对象，利用重载后的()；调用时和函数调用很相像，所以叫做函数对象，也叫做仿函数

    // 2、函数对象超出普通函数的概念，函数对象可以有自己的状态；可以在类中创建一个变量来记录仿函数被调用多少次
    MyPrint p;
    p("万古归一"); p("万古归一"); p("万古归一"); p("万古归一"); p("万古归一");
    cout << "MyPrint调用的次数为：  " << p.count << endl;
}

void doPrint(MyPrint& myprint, string tell) { //3、函数对象可以作为参数传递
    myprint(tell);
}
void test02() {
    //3、函数对象可以作为参数传递
    MyPrint myPrint;
    doPrint(myPrint, "hello");
}
int main() {
    //test01();
    test02();
    system("pause");
    return 0;
}