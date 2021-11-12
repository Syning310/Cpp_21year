#include<iostream>;
using namespace std;

int main() {
	//分别输出三名同学总成绩
	int scores[3][3] = {
		{100,100,100},  //张三
		{90,50,100},    //李四
		{60,70,80}      //王五
	};

	string names[3] = { "张三","李四","王五" };

	for (int i = 0; i < 3; i++) {
		int sum = 0;  //统计分数总和变量
		for (int j = 0; j < 3; j++) {
			//cout << scores[i][j] << "  ";
			sum += scores[i][j];
		}
		//cout << "第" << i + 1 << "个人的总分为：  " << sum << endl;
		cout << names[i] << "的总分为：  " << sum << endl;
	}

	system("pause");
	return 0;
}