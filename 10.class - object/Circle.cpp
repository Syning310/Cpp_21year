#include"circle.h"




void circle::setR(int r) {    //成员函数的作用域
	m_R = r;
}
int circle::getR() {
	return m_R;
}
void circle::setCenter(Point center) {  //设置圆心
	m_Center = center;
}
Point circle::getCenter() {
	return m_Center;
}

