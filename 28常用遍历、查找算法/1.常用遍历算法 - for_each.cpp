#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//�ܽ᣺������������ͨ����ֱ�ӷź��������ɣ����Բ��ò����б��º�����Ҫ��()

/*
  �㷨��Ҫ����ͷ�ļ�#include<algorithm> <functional> <numeric> ���
  <algorithm> ������STLͷ�ļ�������һ������Χ�漰���Ƚϡ����������ҡ����������ơ��޸ĵȵ�
  <numeric> �����С��ֻ��������������������м���ѧ�����ģ��
  <functional> ������һЩģ���࣬����������������  �ڽ���������
*/

//����ԭ�ͣ�  for_each(iterator beg, iterator end, _func); ��ʼ���������������������º���������ͨ����������

//��ͨ����
void print(int val) {
	cout << val << " ";

}
//�º���
class Myprint {
public:
	void operator()(int val) {
		cout << val << " " ;
	}
};
void test01() {
	vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(3); v.push_back(4); v.push_back(5); v.push_back(6);

	//����ԭ�ͣ�  for_each(iterator beg, iterator end, _func); ��ʼ���������������������º���������ͨ����������
	for_each(v.begin(), v.end(), print);  //��ͨ����ֱ�ӷ��뺯�����Ϳɣ�����Ҫ�����б�
	cout << endl;

	for_each(v.begin(), v.end(), Myprint());  //��Ϊ����Ǻ�����������û�д������������Ҫ��()�����������ĺ�������
	//�º�����Ҫ�Ѻ����������
	cout << endl;



}
int main() {
	test01();

	system("pause");
	return 0;
}