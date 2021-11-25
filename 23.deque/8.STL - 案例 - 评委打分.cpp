#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<deque>
#include<ctime>

//选手类
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
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person s(name, score);

		//将创建的person对象，放入到容器中
		p.push_back(s);
	}
}
//打分e
void setScore(vector<Person>& p) {
	for (vector<Person>::iterator i = p.begin(); i != p.end(); i++) {
		//将评委打的分数，放入到deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;  //随机数，意思是60 到 60 + 41 - 1 之间的随机数；60 ~ 100
			d.push_back(score);
		}

		//查看每个选手的得分
		cout << (*i).m_Name << "打分：  " << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << "  ";
		}cout << endl;

		//先排序，然后去掉一个最高分，去掉一个最低分，再算平均值
		sort(d.begin(), d.end());  //排序
		d.pop_front();   //去掉一个第一个元素
		d.pop_back();    //去掉最后一个元素

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit;  //累加每个评委的分数
		} 
		int avg = sum / d.size();    //平均分

		//将平均分，赋值到选手身上
		i->m_Score = avg;
	}
}
int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建5名选手
	vector<Person> p;
	createperson(p);

	//测试
	//for (vector<Person>::iterator i = p.begin(); i != p.end(); i++) {
	//	cout << (*i).m_Name << "\t" << "分数：  " << (*i).m_Score << endl;
	//}

	//2、给5名选手打分
	setScore(p);
	for (vector<Person>::iterator i = p.begin(); i != p.end(); i++) {
		cout << (*i).m_Name << "\t" << "平均分为：  " << (*i).m_Score << endl;
	}

	//3、显示最后的得分

	system("pause");
	return 0;
}