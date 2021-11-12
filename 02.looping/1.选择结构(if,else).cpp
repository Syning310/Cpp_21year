#include <iostream>
using namespace std;


	//选择结构 单行if语句
int main() {
	//学生输入分数，如果分数大于600分，视为考上一本大学，在屏幕输出

	//1、学生输入分数
	int score = 0;
	cout << "请输入分数： " << endl;
	cin >> score;

	//2、打印用户输入的分数
	cout << "你的分数：" << score << endl;

	//3、判断分数是否大于600，如果大于，则输出
	if (score > 600)          //if后面不要加分号
	{
		cout << "恭喜考上了大学" << endl;
	}

	system("pause");
	return 0;
}

int main() {
//两行if语句

	//输入分数，如果分数大于60分则输出“及格”，如果小于60分则输出“挂科”
	//1、输入考试分数，提示考试分数
	int score = 0;
	cout << "请输入分数：  " << endl;
	cin >> score;
	cout << "你的分数为：  " << score << endl;

	//2、判断  如果大于60分打印及格，否则打印挂科

	if (score >= 60) //如果满足条件执行下面大括号中的内容
	{
		cout << "及格！！！！" << endl;
	}
	else  //意思是未满足，如果未满足条件则执行else后面大括号的内容
	{
		cout << "挂科！！！！" << endl;
	}
	system("pause");
	return 0;
}


//多条件if语句
int main() {
	//选择结构 多条件if语句
	//输入考试分数，如果大于600分，打印考上一本大学
	//如果大于500分，打印考上二本大学
	//如果大于400分，打印考上专科大学
	//小于400分，打印 找个厂上班吧

	int score = 0;
	cout << "请输入你的分数：  " << endl;
	cin >> score;
	cout << "你的分数为：" << score << endl;
	if (score >= 600) {
		cout << "恭喜！考上一本大学！" << endl;
	}
	else if (score >= 500) 
	{
		cout << "恭喜！考上二本大学！" << endl;
	}
	else if (score >= 400)
	{
		cout << "恭喜！考上专科大学" << endl;
	}
	else
	{
		cout << "找个厂上班吧" << endl;
	}

	system("pause");
	return 0;
}


  //嵌套if语句
int main() {
	//1、分数大于600考入一本，大于500考上二本，大于400考上专科，其余未录取
	//2、在一本中，分数达到700分考入北大，大于650分考入清华，大于600分考入人大

	int score = 0;
	cout << "请输入你的分数： " << endl;
	cin >> score;
	cout << "你的分数为： " << score << endl;

	if (score >= 600) {
		cout << "恭喜你考入一本大学" << endl;
		if (score >= 700) {
			cout << "你被北京大学录取" << endl;
		}
		else if (score >= 650) {
			cout << "你被清华大学录取" << endl;
		}
		else {
			cout << "你被人民大学录取" << endl;
		}
	}
	else if (score >= 500) {
		cout << "恭喜你考入二本大学" << endl;
	}
	else if (score >= 400) {
		cout << "恭喜你考入专科学校" << endl;
	}
	else {
		cout << "别看了，你不配" << endl;
	}
	system("pause");
	return 0;
}