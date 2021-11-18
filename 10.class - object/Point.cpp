#include"point.h"



void Point::setX(int x) {    //加上Point::  的意思是告诉编译器这是Point作用域中的成员函数
	m_X = x;
}
int Point::getX() {
	return m_X;
}
void Point::setY(int y) {
	m_Y = y;
}
int Point::geiY() {
	return m_Y;
}

