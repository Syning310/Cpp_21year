#pragma once
#include <iostream>
using namespace std;
#include"point.h"

class circle  //1��Բ��
{
public:
	void setR(int r);

	int getR();

	void setCenter(Point center);  //����Բ��

	Point getCenter();

private:
	int m_R;  //�뾶

	//�����п�������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center;  //Բ��

};