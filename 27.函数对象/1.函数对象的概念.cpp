#include<iostream>
using namespace std;

/*  �������� ---- �º���
  ���
    ���غ������ò��������࣬������Ϊ��������
    ��������ʹ������()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
  ���ʣ�
    ��������(�º���)��һ���࣬����һ������
  �ص㣺
    1����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
    2���������󳬳���ͨ�����ĸ����������������Լ���״̬
    3���������������Ϊ��������
*/

//�ܽ᣺�º���д�÷��ǳ���������Ϊ�������д���

class MyAdd {
public:
    int operator()(int v1, int v2) {
        return v1 + v1;
    }
};

class MyPrint {
public:
    MyPrint() {
        this->count = 0;
    }
    void operator()(string speech) {
        cout << speech << endl;
        count++;
    }
    int count;  //�ڲ���״̬
};


void test01() {
    MyAdd myadd;  
    //1����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
    cout << myadd(10, 10) << endl;  //�ഴ���Ķ����������غ��()������ʱ�ͺ������ú��������Խ�����������Ҳ�����º���

    // 2���������󳬳���ͨ�����ĸ����������������Լ���״̬�����������д���һ����������¼�º��������ö��ٴ�
    MyPrint p;
    p("��Ź�һ"); p("��Ź�һ"); p("��Ź�һ"); p("��Ź�һ"); p("��Ź�һ");
    cout << "MyPrint���õĴ���Ϊ��  " << p.count << endl;
}

void doPrint(MyPrint& myprint, string tell) { //3���������������Ϊ��������
    myprint(tell);
}
void test02() {
    //3���������������Ϊ��������
    MyPrint myPrint;
    doPrint(myPrint, "hello");
}
int main() {
    //test01();
    test02();
    system("pause");
    return 0;
}