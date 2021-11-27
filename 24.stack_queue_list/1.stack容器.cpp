#include<iostream>
using namespace std;
#include<stack>

/*  �������stack����ջ����һ���Ƚ���������ݽṹ����ֻ��һ�����ڣ�ջ��ֻ�ж��˵�Ԫ�زſ��Ա����ʹ�ã����ջ�������б�����Ϊ�������ж������Ƿ�Ϊ��
    ���԰������Ϊһ�������䣬�ȷŽ�ȥ�ı��Ӻ��ó�����ֻ�ܲ�������ı��ӣ�Ҳ��������ɵ���
	ջ�н������ݳ�Ϊ ���� ��ջ
	ջ�е������ݳ�Ϊ ���� ��ջ

	���캯����
	1��stack<T> stk;                                           //stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
	2��stack(const stack& stk);                                //�������캯��
	��ֵ������
	3��stack& operator=(const stack& stk);                     //���صȺ������
	���ݴ�ȡ��
	4��push(elem);                                             //��ջ�����Ԫ��
	5��pop();                                                  //��ջ���Ƴ���һ��Ԫ��
	6��top();                                                  //����ջ��Ԫ��
	��С������
	7��empty();                                                //�ж϶�ջ�Ƿ�Ϊ��
	8��size();                                                 //����ջ�Ĵ�С
*/

void test01() {
	//1��stack<T> stk;                                           //stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
	stack<int> s;

	//4��push(elem);                                             //��ջ�����Ԫ��
	s.push(1); s.push(2); s.push(3); s.push(4); s.push(5); s.push(6); s.push(7);

	//2��stack(const stack& stk);                                //�������캯��
	stack<int> s2(s);

	//8��size();                                                 //����ջ�Ĵ�С
	cout << "s�Ĵ�СΪ��  " << s.size() << endl;
	cout << "s2�Ĵ�СΪ��  " << s2.size() << endl;

	//5��pop();                                                  //��ջ���Ƴ���һ��Ԫ��
	s2.pop();
	cout << "s2�Ĵ�СΪ��  " << s2.size() << endl;

	//6��top();                                                  //����ջ��Ԫ��
	cout << "s2ջ����Ԫ��Ϊ��  " << s2.top() << endl;

	//3��stack& operator=(const stack& stk);                     //���صȺ������
	stack<int> s5 = s2;
	cout << "s5�Ĵ�СΪ��  " << s5.size() << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}