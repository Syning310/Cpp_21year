#include <iostream>
using namespace std;


  //for 循环打印 0 ~ 9
  //for (起始表达式; 条件表达式; 末尾循环体;) { 循环语句; }
int main() {

	for (int a = 0; a < 10; a++) {
		cout << "a= " << a << endl;
	}


	system("pause");
	return 0;
}



  //敲桌子
  //1、输出数字 1~100
  //2、从100个数字中找到特殊数字，打印"敲桌子"
  //  如果是 7的倍数、个位有7、或者十位有7，打印敲桌子
int main() {

	for (int a = 1; a <= 100;a++ ) {
		
		//  如果是 7的倍数、   个位有7、    或者十位有7    
		if ( a % 7 == 0 || a % 10 == 7 || a / 10 % 10 == 7 )      //  "||"  逻辑或
		{
			cout << "敲桌子" << endl;  //打印敲桌子
		}
		else {
			cout << a << endl;
		}
	}

	system("pause");
	return 0;

}



