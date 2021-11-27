#include<iostream>
using namespace std;
#include<list>

/*
  size();                                        //返回容器中元素的个数
  empty();                                       //判断容器是否为空  empty（空）；为空的话返回true，不为空返回false
  resize(num);                                   //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                                                 //如果容器变短，则末尾超出容器长度的元素被删除
  resize(num,elem);                              //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
                                                 //如果容器变短，则末尾超出容器长度的元素被删除
*/

void printList(const list<int>& l) {
    for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }cout << endl;
}
void test01() {
    list<int> l1;
    l1.push_back(10); l1.push_back(20); l1.push_back(30); l1.push_back(40); l1.push_back(50);

    //1、size();                                        //返回容器中元素的个数
    cout << "l1的大小为：  " << l1.size() << endl;
    //2、empty();                                       //判断容器是否为空  empty（空）；为空的话返回true，不为空返回false
    if (!l1.empty()) {
        cout << "l1不为空!" << endl;
    }
    else {
        cout << "l1为空！" << endl;
    }

    //3、 resize(num);                           //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
                                                 //如果容器变短，则末尾超出容器长度的元素被删除
    l1.resize(10);
    cout << "l1的大小为：  " << l1.size() << endl;
    printList(l1);

    //4、resize(num,elem);                       //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
                                                 //如果容器变短，则末尾超出容器长度的元素被删除
    l1.resize(15, 6);
    printList(l1);

    l1.resize(3);
    printList(l1);

}

int main() {
    test01();

	system("pause");
	return 0;
}