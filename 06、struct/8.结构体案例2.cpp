#include<iostream>
using namespace std;

struct hero {
	string name;
	int age;
	string sex;  //性别
};
//冒泡排序，实现年龄的升序排列
void bubbleSort(hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArray[j].age > heroArray[j + 1].age) {
				hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}	
}

void printHero(hero heroArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "英雄姓名： " << heroArray[i].name 
			 << "  年龄:  " << heroArray[i].age 
			 << "  性别：  " << heroArray[i].sex << endl;
	}

}

int main() {
	//1、创建一个数组存放5名英雄
	hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	}; cout << "排序前：  " << endl;
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << "英雄姓名： " << heroArray[i].name
			<< "  年龄:  " << heroArray[i].age
			<< "  性别：  " << heroArray[i].sex << endl;
	}
	cout << "排序后：  " << endl;
	//3、对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);

	//4、打印排序后的英雄信息
	printHero(heroArray, len);

	
	system("pause");
	return 0;
}