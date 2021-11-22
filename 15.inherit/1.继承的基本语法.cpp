#include<iostream>
using namespace std;

//下级别的成员除了拥有上一级别的共性，还有自己的特性
//例如我们看到很多网站中，都有公共的头部，公共的底部，甚至公共的左侧列表，只有中心的核心内容不同

//继承的好处：减少重复的代码
// class A : public B;
// A类称为子类 或 派生类
// B类称为父类 或 基类
// 派生类中的成员，包括两大部分：一类是从基类继承过来的，一类是自己增加的成员
// 从基类继承过来的表现其共性，而新增的成员体现了其个性


////普通实现页面
////java页面
class Java {
public:
	void header() {
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left() {
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}
	void content() {  //内容
		cout << "Jave学科视频" << endl;
	}
};
 //Python
class Python {
public:
	void header() {
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left() {
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}
	void content() {  //内容
		cout << "Python学科视频" << endl;
	}
};
// C++
class CPP {
public:
	void header() {
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left() {
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}
	void content() {  //内容
		cout << "C++学科视频" << endl;
	}
};


//继承语法： class 子类 : 继承方式 父类
// 子类也称为 派生类
// 父类也称为 基类
//继承实现页面
class BasePage  //(基页) 
{
public:
	void header() {
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
	void left() {
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}	
};
//Java页面
class Java : public BasePage  //继承书写语法
{
public:
	void content() {
		cout << "Java学科视频:" << endl;
	}
};
//Python页面
class Python : public BasePage {
public:
	void content() {
		cout << "Python学科视频:" << endl;
	}
};
//C++页面
class CPP : public BasePage {
public:
	void content() {
		cout << "C++学科视频:" << endl;
	}
};

void test01() {
	Java ja;
	cout << "Java下载视频如下:  " << endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "————————————————————————————————————————————————————" << endl;
	Python py;
	cout << "Python下载视频如下:  " << endl;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "————————————————————————————————————————————————————" << endl;
	CPP c;
	cout << "C++下载视频如下:  " << endl;
	c.header();
	c.footer();
	c.left();
	c.content();
}
int main() {
	test01();  
	
	system("pause");
	return 0;
}