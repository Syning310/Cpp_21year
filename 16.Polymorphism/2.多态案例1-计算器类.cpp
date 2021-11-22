#include <iostream>
using namespace std;
//多态优点：
//1、代码组织结构清晰；2、可读性强；3、利于前期和后期的扩展以及维护


//分别使用普通写法和多态技术实现计算器

//普通写法
class Calculator {
public:
	int getResult(string oper) {
		if (oper == "+") {
			return m_Num1 + m_Num2;
		}
		else if (oper == "-") {
			return m_Num1 - m_Num2;
		}
		else if (oper == "*") {
			return m_Num1 * m_Num2;
		}
		else if (oper == "/") {
			return m_Num1 / m_Num2;
		}
		//如果想要扩展新的功能，需要修改源码
		//在真的开发中，提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
	}

	int m_Num1;
	int m_Num2;
};
void test01() {
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
	cout << c.m_Num1 << " / " << c.m_Num2 << " = " << c.getResult("/") << endl;
}

//多态好处：1、组织结构清晰；2、可读性强；3、对于前期和后期扩展以及维护性高
//利用多态实现计算器
class AbstractCalculator {
public:
	virtual int getResult() 
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};
class AddCalculator : public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 + m_Num2;
	}
};
class SubCalculator : public AbstractCalculator {
	int getResult() {
		return m_Num1 - m_Num2;
	}
};
class MulCalculator : public AbstractCalculator {
	int getResult() {
		return m_Num1 * m_Num2;
	}
};
void test02() {
	//多态使用条件：父类指针指向或引用子类对象
	AbstractCalculator* ac = new AddCalculator;
	ac->m_Num1 = 100;
	ac->m_Num2 = 100;
	cout << ac->m_Num1 << " + " << ac->m_Num2 << " = " << ac->getResult() << endl;
	delete ac;  //使用完要销毁堆区里的数据
	
	ac = new SubCalculator;
	ac->m_Num1 = 100;
	ac->m_Num2 = 100;
	cout << ac->m_Num1 << " - " << ac->m_Num2 << " = " << ac->getResult() << endl;
	delete ac;  //使用完要销毁堆区里的数据

	ac = new MulCalculator;
	ac->m_Num1 = 100;
	ac->m_Num2 = 100;
	cout << ac->m_Num1 << " * " << ac->m_Num2 << " = " << ac->getResult() << endl;
	delete ac;

}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}