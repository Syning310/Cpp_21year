#include<iostream>
using namespace std;
#include<vector>

void test01() {
	//�����������Ϊ���飬����Ƕ�������Ϳ������Ϊ��ά����
	vector<vector<int>> e;  //����Ƕ������  

	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//��С�������������
	for (int i = 0; i < 4; i++) {
		v1.push_back(i + 1);  //β�巨�������
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//��С�������뵽��������
	e.push_back(v1);
	e.push_back(v2);
	e.push_back(v3);
	e.push_back(v4);

	//ͨ�������������������ݱ���һ��          �ѵ���������ָ�룻�ѵ���������ָ�룻�ѵ���������ָ��
	for (vector<vector<int>>::iterator i = e.begin(); i != e.end(); i++) {
		//i��һ��ָ������������vector<vector<int>>
		//*i  �����ú����滹��һ�������� vector<int>
		for (vector<int>::iterator vi = (*i).begin(); vi != (*i).end(); vi++) {
			cout << *vi << "  ";
		}cout << endl;

	}

}

int main() {
	test01();

	system("pause");
	return 0;
}