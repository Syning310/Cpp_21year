#include<iostream>
using namespace std;
#include<map>

//�ܽ᣺���÷º�������ָ��map�������������
//�����Զ����������ͣ�map����Ҫָ���������ͬset����һ��


class Compare {
public:
	//�ǵú��������б����Ҫ����const��ֹ���ݶ�ʧ
	bool operator()(int v1, int v2) const{  //��һ��С���������ص���������ڶ���С���Ų��Ǻ����Ĳ����б�
		//��Ϊ�ǽ�������Ҫ��һ�����ȵڶ������󣬲ŷ���true
		return v1 > v2;
	}
};
void printmap(const map<int, int, Compare>& m) {
	for (map<int, int>::const_iterator i = m.begin(); i != m.end(); i++) {
		cout << "key = " << i->first << "\tvalue = " << i->second << endl;
	}
}
void test01() {
	map<int, int, Compare> p; //��set����һ����Ҫ�ı��������ͱ������Ԫ��֮ǰ�ı�����Ĭ���������
	//�ı��������ķ������������Ĳ����б��в���º���
	p.insert(make_pair(1, 10));
	p.insert(make_pair(2, 20));
	p.insert(make_pair(3, 30));
	p.insert(make_pair(4, 40));
	p.insert(make_pair(5, 50));
	printmap(p);
}
int main() {
	test01();

	system("pause");
	return 0;
}