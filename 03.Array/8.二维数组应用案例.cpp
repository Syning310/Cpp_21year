#include<iostream>;
using namespace std;

int main() {
	//�ֱ��������ͬѧ�ܳɼ�
	int scores[3][3] = {
		{100,100,100},  //����
		{90,50,100},    //����
		{60,70,80}      //����
	};

	string names[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++) {
		int sum = 0;  //ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++) {
			//cout << scores[i][j] << "  ";
			sum += scores[i][j];
		}
		//cout << "��" << i + 1 << "���˵��ܷ�Ϊ��  " << sum << endl;
		cout << names[i] << "���ܷ�Ϊ��  " << sum << endl;
	}

	system("pause");
	return 0;
}