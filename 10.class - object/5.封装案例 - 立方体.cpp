#include<iostream>
using namespace std;

//  &&  ���൱��һ��������䣬���&&ǰ��ֵΪfalse��ô���Ͳ��ټ���ִ�������


class Cube {
public:
	//���ó�����ȡ��
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	//���ÿ���ȡ��
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	//���øߣ���ȡ��
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	//��ȡ���������
	int calculateS() {
		return m_L * m_W * 2 + m_W * m_H * 2 + m_L * m_H * 2;
	}
	//��ȡ���
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж������������Ƿ����  
	bool isSameByClass(Cube& c) {  //�൱��Cube& c = c2;  ���൱��Cube* c = &c2
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
	  }
		return false;
	}


private:  //���Զ���������Ϊ˽��
	int m_L;  //��
	int m_W;  //��
	int m_H;  //��
};
//����ȫ�ֺ����ж�  �����������Ƿ����
bool isSame(Cube& c1, Cube& c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	
		return false;
	
}

int main() {

	Cube c1;
	c1.setL(15);
	c1.setW(10);
	c1.setH(6);
	//cout << "c1�������  " << c1.calculateS() << endl;
	//cout << "c1�������  " << c1.calculateV() << endl;

	Cube c2;
	c2.setL(15);
	c2.setW(10);
	c2.setH(6);
	//cout << "c2�������  " << c2.calculateS() << endl;
	//cout << "c2�������  " << c2.calculateV() << endl;

	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
    if (ret) {
		cout << "c1��c2������������ͬ" << endl;
	}
	else {
		cout << "c1��c2���������岻ͬ" << endl;
	}

	//���ó�Ա�����ж�
	bool ret2 = c2.isSameByClass(c1);
	if (ret2) {
		cout << "��Ա�����жϣ� c1��c2������������ͬ" << endl;
	}
	else {
		cout << "��Ա�����жϣ� c1��c2���������岻ͬ" << endl;
	}


	system("pause");
	return 0;
}