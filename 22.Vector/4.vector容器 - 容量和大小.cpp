#include<iostream>
using namespace std;
#include<vector>

//�ܽ᣺vector��������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ����¿ռ䣬�ͷ�ԭ�ռ�

/*
  empty();                    //�ж��Ƿ�Ϊ�գ�����ֵ��bool��������true��Ϊ�գ�����false����Ϊ��
  capacity();                 //����������           ������Զ���ڻ��ߵ���size
  size();                     //���������е�Ԫ�ظ���
  resize(int num);            //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã�Ĭ��ֵΪ0
                              //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
  resize(int num, elem)       //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                              //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/

void printvector(vector<int>& vec) {
	for (vector<int>::iterator i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}cout << endl;
}

void test01() {
	vector<int> v1;
	for (int i = 0; i < 9; i++) {
		v1.push_back(i);
	}
	printvector(v1);
	//1��empty();                    //�ж��Ƿ�Ϊ�գ�����ֵ��bool��������true��Ϊ�գ�����false����Ϊ��
	if (v1.empty()) {  //empty �ǿյ���˼�����Է���ֵ��true���������Ϊ��
		cout << "v1Ϊ��" << endl;
	}
	else {             //���ص���false����˵�����������Ϊ��
		cout << "v1��Ϊ��" << endl;
    //2��capacity();                 //����������           ������Զ���ڻ��ߵ���size
		cout << "v1������Ϊ��  " << v1.capacity() << endl;
	//3��size();                     //���������е�Ԫ�ظ���
		cout << "v1�Ĵ�СΪ��  " << v1.size() << endl;
	}
	
	//resize(int num);            //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã�Ĭ��ֵΪ0
							      //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	v1.resize(15);
	printvector(v1);
	cout << "v1������Ϊ��  " << v1.capacity() << endl;
	cout << "v1�Ĵ�СΪ��  " << v1.size() << endl;

	//resize(int num, elem)       //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
						          //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

	v1.resize(20, 6);
	printvector(v1);
	cout << "v1������Ϊ��  " << v1.capacity() << endl;   //22
	cout << "v1�Ĵ�СΪ��  " << v1.size() << endl;       //20

	v1.resize(5);
	printvector(v1);
	cout << "v1������Ϊ��  " << v1.capacity() << endl;    //22
	cout << "v1�Ĵ�СΪ��  " << v1.size() << endl;        //5

}

int main() {
	test01();


	system("pause");
	return 0;
}