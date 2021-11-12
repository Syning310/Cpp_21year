#include <iostream>
using namespace std;


  //三目运算符
int main() {
	//创建三个变量 a b c 
	int a = 10;
	int b = 20;
	int c = 0;
	//        真  假
	c = (a > b ? a : b);//三目运算符（如果a > b是真，那么a赋值给c，如果是假，那么b赋值给c
	cout << "c= " << c << endl;

	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 1000;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	system("pause");
	return 0;
}


  switch语句  switch表达式类型只能是整形或者字符型；case里如果没有break，程序会一直向下执行
  if 和 switch 的区别？
  switch 的缺点：判断时候只能是整形或者字符型，不可以是一个区间；
  switch 的优点：结构清晰，执行效率高；
int main() {
	//给电影打分
	//10 ~ 9  非常好
	//8  ~ 7  经典
	//6  ~ 5  一般
	//5分以下 烂片

	//1、提示用户给电影评分
	cout << "请给电影打分" << endl;
	//2、用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "你的评分为： " << score << endl;
	//3、根据用户输入的分数，来告诉用户最后的结果

	switch (score)
	{
	case 10:
		cout << "你认为电影非常好" << endl;
		break;  //退出当前分支
	case 9:
		cout << "你认为电影非常好" << endl;
		break;
	case 8:
		cout << "你认为电影很经典" << endl;
		break;
	case 7:
		cout << "你认为电影很经典" << endl;
		break;
	case 6:
		cout << "你认为电影很一般" << endl;
		break;
	case 5:
		cout << "你认为电影很一般" << endl;
		break;
	default:
		cout << "你认为这电影是个烂片" << endl;
		break;
	}

	system("pause");
	return 0;
}

 
  
  
  