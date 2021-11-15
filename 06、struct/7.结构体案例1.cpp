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

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(teacher tArray[], int len) {
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++) {
		tArray[i].Tname = "Teacher_";
		tArray[i].Tname += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].Sname = "Student_";
			tArray[i].sArray[j].Sname += nameSeed[j];

			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}

}

//��ӡ������Ϣ�ĺ���
void printInfo(teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ��������  " << tArray[i].Tname << endl;
        
		for (int j = 0; j < 5; j++) {

			cout << "\tѧ����������  " << tArray[i].sArray[j].Sname <<
				" ���Է�����  " << tArray[i].sArray[j].score << endl;
		}

	
	}
}

int main() {
	//���������
	srand((unsigned int)time(NULL));

	//1������3����ʦ������
	teacher tArray[3];

	//2��ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3����ӡ������ʦ��������ѧ������Ϣ
	printInfo(tArray,len);

	system("pause");
	return 0;
}