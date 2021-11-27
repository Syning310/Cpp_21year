#include<iostream>
using namespace std;
#include<list>

/*
  size();                                        //����������Ԫ�صĸ���
  empty();                                       //�ж������Ƿ�Ϊ��  empty���գ���Ϊ�յĻ�����true����Ϊ�շ���false
  resize(num);                                   //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
                                                 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
  resize(num,elem);                              //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                                                 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/

void printList(const list<int>& l) {
    for (list<int>::const_iterator i = l.begin(); i != l.end(); i++) {
        cout << *i << " ";
    }cout << endl;
}
void test01() {
    list<int> l1;
    l1.push_back(10); l1.push_back(20); l1.push_back(30); l1.push_back(40); l1.push_back(50);

    //1��size();                                        //����������Ԫ�صĸ���
    cout << "l1�Ĵ�СΪ��  " << l1.size() << endl;
    //2��empty();                                       //�ж������Ƿ�Ϊ��  empty���գ���Ϊ�յĻ�����true����Ϊ�շ���false
    if (!l1.empty()) {
        cout << "l1��Ϊ��!" << endl;
    }
    else {
        cout << "l1Ϊ�գ�" << endl;
    }

    //3�� resize(num);                           //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ��
                                                 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
    l1.resize(10);
    cout << "l1�Ĵ�СΪ��  " << l1.size() << endl;
    printList(l1);

    //4��resize(num,elem);                       //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                                                 //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
    l1.resize(15, 6);
    printList(l1);

    l1.resize(3);
    printList(l1);

}

int main() {
    test01();

	system("pause");
	return 0;
}