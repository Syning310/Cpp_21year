#include<iostream>
using namespace std;
#include<set>

//set����Ĭ����������ǴӴ�С�����÷º��������Ըı��������

class myCompare {  //�º�����������һ�����ͣ��ѷº���ж��һ������
public:
	bool operator()(int v1, int v2) const{    //��һ��С���������أ��ڶ���С���Ų��ǲ����б�;�����б����Ҫ��const
		return v1 > v2;  //����һ�������ڵڶ�����ʱ������ture�����򷵻�false
	}
};

void test01() {
	set<int> s1;

	s1.insert(10); s1.insert(50); s1.insert(40); s1.insert(30); s1.insert(20);
	for (set<int>::iterator i = s1.begin(); i != s1.end(); i++) {
		cout << *i << " ";
	}cout << endl;

	//ָ���������Ϊ�Ӵ�С
	set<int,myCompare> s2;  //ģ������б���ֻ�ܷ��������ͣ����Էº�����ж��һ������

    //Ӧ�ڲ�������֮ǰ�͸��������Ӵ�С������
	s2.insert(10); s2.insert(50); s2.insert(40); s2.insert(30); s2.insert(20);

	for (set<int, myCompare>::iterator i = s2.begin(); i != s2.end(); i++) {
		cout << *i << " ";
	}cout << endl;


}

int main() {
	test01();

	system("pause");
	return 0;
}