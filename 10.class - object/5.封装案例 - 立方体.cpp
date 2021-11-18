#include<iostream>
using namespace std;

//  &&  ：相当于一个开关语句，如果&&前面值为false那么他就不再继续执行其后面


class Cube {
public:
	//设置长，获取长
	void setL(int l) {
		m_L = l;
	}
	int getL() {
		return m_L;
	}
	//设置宽，获取宽
	void setW(int w) {
		m_W = w;
	}
	int getW() {
		return m_W;
	}
	//设置高，获取高
	void setH(int h) {
		m_H = h;
	}
	int getH() {
		return m_H;
	}
	//获取立方体面积
	int calculateS() {
		return m_L * m_W * 2 + m_W * m_H * 2 + m_L * m_H * 2;
	}
	//获取体积
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//利用成员函数判断两个立方体是否相等  
	bool isSameByClass(Cube& c) {  //相当于Cube& c = c2;  又相当于Cube* c = &c2
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
	  }
		return false;
	}


private:  //属性都尽量设置为私有
	int m_L;  //长
	int m_W;  //宽
	int m_H;  //高
};
//利用全局函数判断  两个立方体是否相等
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
	//cout << "c1的面积：  " << c1.calculateS() << endl;
	//cout << "c1的体积：  " << c1.calculateV() << endl;

	Cube c2;
	c2.setL(15);
	c2.setW(10);
	c2.setH(6);
	//cout << "c2的面积：  " << c2.calculateS() << endl;
	//cout << "c2的体积：  " << c2.calculateV() << endl;

	//利用全局函数判断
	bool ret = isSame(c1, c2);
    if (ret) {
		cout << "c1和c2两个立方体相同" << endl;
	}
	else {
		cout << "c1和c2两个立方体不同" << endl;
	}

	//利用成员函数判断
	bool ret2 = c2.isSameByClass(c1);
	if (ret2) {
		cout << "成员函数判断： c1和c2两个立方体相同" << endl;
	}
	else {
		cout << "成员函数判断： c1和c2两个立方体不同" << endl;
	}


	system("pause");
	return 0;
}