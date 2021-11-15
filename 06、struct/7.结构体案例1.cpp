#include<iostream>
using namespace std;


struct student {
	string Sname;
	int score;
};


struct teacher {
	string Tname;
	struct student sArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(teacher tArray[], int len) {
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++) {
		tArray[i].Tname = "Teacher_";
		tArray[i].Tname += nameSeed[i];

		//通过循环给每个老师所带的学生赋值
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].Sname = "Student_";
			tArray[i].sArray[j].Sname += nameSeed[j];

			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}

}

//打印所有信息的函数
void printInfo(teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "老师的姓名：  " << tArray[i].Tname << endl;
        
		for (int j = 0; j < 5; j++) {

			cout << "\t学生的姓名：  " << tArray[i].sArray[j].Sname <<
				" 考试分数：  " << tArray[i].sArray[j].score << endl;
		}

	
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建3个老师的数组
	teacher tArray[3];

	//2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3、打印所有老师及所带的学生的信息
	printInfo(tArray,len);

	system("pause");
	return 0;
}