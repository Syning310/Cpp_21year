#include <iostream>
using namespace std;

//while 循环语句和 do...while 循环语句的区别在于 后者会先执行一遍再判断条件



  //while 循环语句
int main() {
	//在屏幕中打印 0 ~ 9 这10个数字
	int a = 0;
	while (a < 10)  //while（）中填入循环条件
	{
		cout << a << endl;
		a++;
	}


	system("pause");
	return 0;
}


  //do...while 循环语句
int main() {
	int a = 0;
	do {
		cout << "a= " << a << endl;
		a++;
	} 
	while (a < 10);

	system("pause");
	return 0;
}


  //猜数字
int main() {
	//添加随机数种子  作用是利用当前系统时间生成随机数  防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统要生成一个随机数
	int num = rand() % 100 + 1;
	//rand()意思是生成一个随机数 ；rand（）%100 —— 生成0 ~ 99 的随机数
	//rand( )%100 + 1 意思是生成 0 +1 ~ 99 + 1 的随机数
	//cout << num << endl;
	
	//2、玩家进行猜测
	int val = 0;  //玩家输入的数据
	
	while (1) {
		cin >> val;
		//3、判断玩家猜测对错

		//猜错		提示猜的结果过大或过小	重新返回第二步
		if (val > num) {
			cout << "猜大了" << endl;
		}
		else if (val < num) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "恭喜你猜对了" << endl;
			//猜对		退出游戏
		break;  //break,可以利用此关键字来退出循环
		}
		
	}
	system("pause");
	return 0;
}