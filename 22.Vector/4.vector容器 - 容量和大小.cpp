#include<iostream>
using namespace std;
#include<vector>

//总结：vector并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间

/*
  empty();                    //判断是否为空，返回值是bool，返回真true即为空，返回false即不为空
  capacity();                 //容器的容量           容量永远大于或者等于size
  size();                     //返回容器中的元素个数
  resize(int num);            //重新指定容器的长度为num，若容器变长，则以默认值填充新位置，默认值为0
                              //如果容器变短，则末尾超出容器长度的元素被删除
  resize(int num, elem)       //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
                              //如果容器变短，则末尾超出容器长度的元素被删除
*/

void printvector(vector<int>& vec) {
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 9; i++) {
		v1.push_back(i);
	}
	printvector(v1);
	//1、empty();                    //判断是否为空，返回值是bool，返回真true即为空，返回false即不为空
	if (v1.empty()) {  //empty 是空的意思，所以返回值是true即这个容器为空
		cout << "v1为空" << endl;
	}
	else {             //返回的是false，则说明这个容器不为空
		cout << "v1不为空" << endl;
    //2、capacity();                 //容器的容量           容量永远大于或者等于size
		cout << "v1的容量为：  " << v1.capacity() << endl;
	//3、size();                     //返回容器中的元素个数
		cout << "v1的大小为：  " << v1.size() << endl;
	}
	
	//resize(int num);            //重新指定容器的长度为num，若容器变长，则以默认值填充新位置，默认值为0
							      //如果容器变短，则末尾超出容器长度的元素被删除
	v1.resize(15);
	printvector(v1);
	cout << "v1的容量为：  " << v1.capacity() << endl;
	cout << "v1的大小为：  " << v1.size() << endl;

	//resize(int num, elem)       //重新指定容器的长度为num，若容器变长，则以elem值填充新位置
						          //如果容器变短，则末尾超出容器长度的元素被删除

	v1.resize(20, 6);
	printvector(v1);
	cout << "v1的容量为：  " << v1.capacity() << endl;   //22
	cout << "v1的大小为：  " << v1.size() << endl;       //20

	v1.resize(5);
	printvector(v1);
	cout << "v1的容量为：  " << v1.capacity() << endl;    //22
	cout << "v1的大小为：  " << v1.size() << endl;        //5

}

int main() {
	test01();


	system("pause");
	return 0;
}