#include<iostream>
using namespace std;
#include"point.h"
#include"circle.h"


class Point  //点类
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

class circle  //1、圆类
{
public:
	void setR(int r) {
		m_R = r;
	}
	int getR() {
		return m_R;
	}
	void setCenter(Point center) {  //设置圆心
		m_Center = center;
	}
	Point getCenter() {
		return m_Center;
	}

private:
	int m_R;  //半径

	//在类中可以让另一个类 作为本来中的成员
	Point m_Center;  //圆心

};


//判断点和圆的关系
void isInCircle(circle& c, Point& p) {
	//计算两点之间的平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().geiY() - p.geiY()) * (c.getCenter().geiY() - p.geiY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance) {
		cout << "点在圆外" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
}


int main() {

	//实例化一个圆
	circle c;
	c.setR(10);
	Point center;  //圆心
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//实例化一个点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断圆和点的关系
	isInCircle(c, p);


	system("pause");
	return 0;
}