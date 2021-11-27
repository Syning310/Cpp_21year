#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//»¥»»Á½¸öÈÝÆ÷µÄelem
//the function prototype : swap(container c1, container c2);
//container  ÈÝÆ÷

class MyPrint {
public:
	void operator()(int value) {
		cout << value << " ";
	}
};
void test01() {
	vector<int> v1;
	v1.push_back(1); v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);
	vector<int> v2;
	v2.push_back(10); v2.push_back(20); v2.push_back(30); v2.push_back(40); v2.push_back(50); v2.push_back(60); 
    v2.push_back(70); v2.push_back(80);
	cout << "Ìæ»»Ç°£º " << endl;
	for_each(v1.begin(), v1.end(), MyPrint()); cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint()); cout << endl;

	cout << "Ìæ»»ºó£º " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), MyPrint()); cout << endl;
	for_each(v2.begin(), v2.end(), MyPrint()); cout << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}