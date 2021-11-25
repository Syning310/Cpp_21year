#include<iostream>
using namespace std;
#include<vector>


/*
  push_back(ele);                                     //β������Ԫ��ele
  pop_back();                                         //ɾ�����һ��Ԫ��
  insert(const_iterator pos, ele);                    //������ָ��λ��pos����Ԫ��ele
  insert(const_iterator pos, int count,ele);          //������ָ��λ��pos����count��Ԫ��ele
  erase(const_iterator pos);                          //ɾ��������ָ���Ԫ��
  erase(const_iterator start, const_iterator end);    //ɾ����������start��end֮���Ԫ��
  clear();                                            //ɾ������������Ԫ��  
*/

void printvector(vector<int>& vec) {
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	//1��push_back(ele);                                     //β������Ԫ��ele
	v1.push_back(10);  //β�巨�����������д����ݵ�β���������ݣ�����ʱ���������Ǵ�0�±꿪ʼ
	v1.push_back(20);
    v1.push_back(30);
	printvector(v1);

	//2��pop_back();                                         //ɾ�����һ��Ԫ��
	v1.pop_back();
	printvector(v1);

	//3��insert(const_iterator pos, ele);                    //������ָ��λ��pos����Ԫ��ele
	v1.insert(v1.begin(), 0);  //��һ�������ǵ�����
	printvector(v1);

	//4��insert(const_iterator pos, int count,ele);          //������ָ��λ��pos����count��Ԫ��ele
	v1.insert(v1.begin(), 2, 6);//��һ�������ǵ��������ڶ����Ǹ�������������Ԫ��
	printvector(v1);

	//5��erase(const_iterator pos);                          //ɾ��������ָ���Ԫ��
	v1.erase(v1.begin());  //erase�ǲ�������˼������Ҳ�ǵ�����
    printvector(v1);

	//6��erase(const_iterator start, const_iterator end);    //ɾ����������start��end֮���Ԫ��
	v1.erase(v1.begin(), v1.end());
	printvector(v1);

	//7��clear();                                            //ɾ������������Ԫ��
	v1.clear();
    printvector(v1);
}

int main() {
	test01();

	system("pause");
	return 0;
}

