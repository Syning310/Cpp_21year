#pragma once
#include<iostream>
using namespace std;


template<typename T1, typename T2>
class index {
public:
	index(T1 name, T2 age);

	void showIndex();

	T1 m_Name;
	T2 m_Age;

};

template<typename T1, typename T2>
index<T1, T2>::index(T1 name, T2 age) {
	this->m_Name = name;
	this->m_Age = age;
}

template<typename T1, typename T2>
void index<T1, T2>::showIndex() {
	cout << "ÐÕÃû£º  " << this->m_Name << endl;
	cout << "ÄêÁä£º  " << this->m_Age << endl;
}
