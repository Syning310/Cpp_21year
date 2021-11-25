#include<iostream>
using namespace std;
#include<vector>


//���ܣ�  ʵ������������Ԫ�ؽ��л���
//����ԭ�ͣ�
//  swap(vec);    //��vec�뱾���Ԫ�ػ���


void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	cout << "����ǰ��  " << endl;
	printVector(v1);

	vector<int> v2;
	for (int i = 9; i > -1; i--) {
		v2.push_back(i);
	}
	printVector(v2);

	v1.swap(v2);
	cout << "������  " << endl;
	printVector(v1);
	printVector(v2);
}
//2��ʵ����;
//����swap���������ڴ�ռ�
void test02() {
	vector<int> v;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
	}

	cout << "v������Ϊ��  " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��  " << v.size() << endl;

	v.resize(5);
	cout << "v������Ϊ��  " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��  " << v.size() << endl;

	//����swap�����ڴ�
	vector<int>(v).swap(v);
	cout << "v������Ϊ��  " << v.capacity() << endl;
	cout << "v�Ĵ�СΪ��  " << v.size() << endl;

	//vector<int>(v)�����������൱�ڵ����˿������캯��������һ���µĶ�������µĶ���û����
	//����v��������ʼ���Ĳ��������ᰴ��vĿǰ���õ�Ԫ�ظ�����size��������ʼ����������Ķ���Ĵ�С
	//���������������һ��ʼ������ֻ��������СҲֻ����
	//��󻥻�֮��v�����������ָ������˽���
    
	//����������ص㣬��ǰ�д���ִ���꣬ϵͳ���Զ�����
}

int main() {
	//test01();
	test02();
	system("pause");
	return 0;
}