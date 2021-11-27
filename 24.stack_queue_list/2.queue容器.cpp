#include<iostream>
using namespace std;
#include<queue>

/*  queue�����У����������stack�෴��queue��һ���Ƚ��ȳ��������������������ڣ���ͷ���β��������
    ��ͷ��һ��ֻ�ܳ����ݣ���β��һ��ֻ�ܽ����ݣ�������̽����push()�������ݵĹ��̽г���pop()
	��������ֻ����Ӷ�β����Ԫ�أ��Ӷ�ͷ�Ƴ�Ԫ��
	������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ��ֻ�ܵõ���ͷ�Ͷ�β��Ԫ��

	���캯����
	  queue<T> que;
	  queue(const queue& que);
	��ֵ������
	  queue& operator=(const queue& que);
	���ݴ�ȡ��
	  push(elem);
	  pop();
	  back();
	  front();
	��С������
      empty();
      size();

*/

class person {
public:
	person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01() {
	queue<person> q;
	person p1("����", 150000);
	person p2("����", 4000);
	person p3("�쳾", 28);
	person p4("����", 1000);
	person p5("���", 6000);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "���д�СΪ��  " << q.size() << endl;
	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β��ִ�г���
	while (!q.empty()) {
		cout << "��ͷ --- ������  " << q.front().m_Name << "\t���䣺  " << q.front().m_Age << endl;
		cout << "��β --- ������  " << q.back().m_Name << "\t���䣺  " << q.back().m_Age << endl;
		q.pop();
	}
	cout << "���д�СΪ��  " << q.size() << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}