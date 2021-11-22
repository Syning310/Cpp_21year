#include <iostream>
using namespace std;
//��̬�ŵ㣺
//1��������֯�ṹ������2���ɶ���ǿ��3������ǰ�ںͺ��ڵ���չ�Լ�ά��


//�ֱ�ʹ����ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
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
		//�����Ҫ��չ�µĹ��ܣ���Ҫ�޸�Դ��
		//����Ŀ����У��ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
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

//��̬�ô���1����֯�ṹ������2���ɶ���ǿ��3������ǰ�ںͺ�����չ�Լ�ά���Ը�
//���ö�̬ʵ�ּ�����
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
	//��̬ʹ������������ָ��ָ��������������
	AbstractCalculator* ac = new AddCalculator;
	ac->m_Num1 = 100;
	ac->m_Num2 = 100;
	cout << ac->m_Num1 << " + " << ac->m_Num2 << " = " << ac->getResult() << endl;
	delete ac;  //ʹ����Ҫ���ٶ����������
	
	ac = new SubCalculator;
	ac->m_Num1 = 100;
	ac->m_Num2 = 100;
	cout << ac->m_Num1 << " - " << ac->m_Num2 << " = " << ac->getResult() << endl;
	delete ac;  //ʹ����Ҫ���ٶ����������

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