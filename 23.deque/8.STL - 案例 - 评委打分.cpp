#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<deque>
#include<ctime>

//ѡ����
class Person {
public:
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;
};
void createperson(vector<Person>& p) {
	for (int i = 0; i < 5; i++) {
		string nameSeed = "ABCDE";
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person s(name, score);

		//��������person���󣬷��뵽������
		p.push_back(s);
	}
}
//���e
void setScore(vector<Person>& p) {
	for (vector<Person>::iterator i = p.begin(); i != p.end(); i++) {
		//����ί��ķ��������뵽deque������
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;  //���������˼��60 �� 60 + 41 - 1 ֮����������60 ~ 100
			d.push_back(score);
		}

		//�鿴ÿ��ѡ�ֵĵ÷�
		cout << (*i).m_Name << "��֣�  " << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << "  ";
		}cout << endl;

		//������Ȼ��ȥ��һ����߷֣�ȥ��һ����ͷ֣�����ƽ��ֵ
		sort(d.begin(), d.end());  //����
		d.pop_front();   //ȥ��һ����һ��Ԫ��
		d.pop_back();    //ȥ�����һ��Ԫ��

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;  //�ۼ�ÿ����ί�ķ���
		} 
		int avg = sum / d.size();    //ƽ����

		//��ƽ���֣���ֵ��ѡ������
		i->m_Score = avg;
	}
}
int main() {
	//���������
	srand((unsigned int)time(NULL));

	//1������5��ѡ��
	vector<Person> p;
	createperson(p);

	//����
	//for (vector<Person>::iterator i = p.begin(); i != p.end(); i++) {
	//	cout << (*i).m_Name << "\t" << "������  " << (*i).m_Score << endl;
	//}

	//2����5��ѡ�ִ��
	setScore(p);
	for (vector<Person>::iterator i = p.begin(); i != p.end(); i++) {
		cout << (*i).m_Name << "\t" << "ƽ����Ϊ��  " << (*i).m_Score << endl;
	}

	//3����ʾ���ĵ÷�

	system("pause");
	return 0;
}