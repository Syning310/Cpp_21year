#include <iostream>
using namespace std;

  //三只小猪称体重，判断哪只最重
int main() {
	//1、创建三只小猪体重的变量
	int z1 = 0;
	int z2 = 0;
	int z3 = 0;

	//2、输入三只小猪的体重
	cout << "请输入z1的体重： " << endl;
	cin >> z1;
	cout << "请输入z2的体重： " << endl;
	cin >> z2;
	cout << "请输入z3的体重： " << endl;
	cin >> z3;

	cout << "小猪z1的体重为： " << z1 << endl;
	cout << "小猪z2的体重为： " << z2 << endl;
	cout << "小猪z3的体重为： " << z3 << endl;

	//3、比较哪只小猪最重
    //先比较 z1和z2的体重
	if (z1 > z2)   // z1和z2先作比较 如果z1大于z2  运行下面大括号，反之跳过
	{
		if (z1 > z3)  // 嵌套if 其次和z3做比较 如果z1大于z3
		{
			cout << "小猪z1最重" << endl;
		}
		else  
		{
			cout << "小猪z3最重" << endl;
		}
	}
	else  
	{
		if (z2 > z3)  //z2和z3作比较  如果z2大于z3  往下运行
		{
			cout << "小猪z2最重" << endl;
		}
		else
		{
			cout << "小猪z3最重" << endl;
		}
	}


	system("pause");
	return 0;
	}

int main() {
	
	int a = 153;
	cout << "a= " << a << endl;

    //对数字取模于“（%）”10     可以获取个位数
	int b = a % 10;  //获取a的个位数
	cout << "a取模于10为： " << b << endl;

	//对数字整除10之后，再取模于10得到 十位
	int c = a / 10 % 10;  //获取a的十位数
	cout << "a的十位数为： " << c << endl;

	//获取a的百位数
	int d = a / 100 % 10;
	cout << "a的百位数为： " << d << endl;

	system("pause");
	return 0;
}


  //1、所有三位数中的水仙花数
  //2、只打印水仙花数
int main() {

	int mun = 100;
      
	do {
		int a = 0;  
		int b = 0;
		int c = 0;

		a = mun % 10;        //个位
		b = mun / 10 % 10;   //十位
		c = mun / 100 % 10;  //百位
		if (a*a*a + b*b*b + c*c*c == mun) {
			cout << mun << endl;

		}
		
		mun++;
	} 	while (mun < 1000);
	system("pause");
	return 0;
}