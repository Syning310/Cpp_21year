#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"


class Point  //����
{
public:
	void setX(int x) {
		m_X = x;
	}
	int getX() {
		return m_X;
	}
	void setY(int y) {
		m_Y = y;
	}
	int geiY() {
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};

class circle  //1��Բ��
{
public:
	void setR(int r) {
		m_R = r;
	}
	int getR() {
		return m_R;
	}
	void setCenter(Point center) {  //����Բ��
		m_Center = center;
	}
	Point getCenter() {
		return m_Center;
	}

private:
	int m_R;  //�뾶

	//�����п�������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center;  //Բ��

};


//�жϵ��Բ�Ĺ�ϵ
void isInCircle(circle& c, Point& p) {
	//��������֮���ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().geiY() - p.geiY()) * (c.getCenter().geiY() - p.geiY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance) {
		cout << "����Բ��" << endl;
	}
	else {
		cout << "����Բ��" << endl;
	}
}


int main() {

	//ʵ����һ��Բ
	circle c;
	c.setR(10);
	Point center;  //Բ��
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//ʵ����һ����
	Point p;
	p.setX(10);
	p.setY(10);

	//�ж�Բ�͵�Ĺ�ϵ
	isInCircle(c, p);


	system("pause");
	return 0;
}