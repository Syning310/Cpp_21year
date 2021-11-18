#pragma once
#include <iostream>
using namespace std;
#include"point.h"

class circle  //1、圆类
{
public:
	void setR(int r);

	int getR();

	void setCenter(Point center);  //设置圆心

	Point getCenter();

private:
	int m_R;  //半径

	//在类中可以让另一个类 作为本来中的成员
	Point m_Center;  //圆心

};