#include <iostream>
#include "MyArray.h"
using namespace std;

template<typename T, int KSize, int KValue>
MyArray<T, KSize, KValue>::MyArray()
{
		m_pArr = new T[KSize];
		for(int i = 0; i < KSize; ++i)
		{
			m_pArr[i] = KValue;
		}
}

template<typename T, int KSize, int KValue>
MyArray<T, KSize, KValue>::~MyArray()
{
		delete []m_pArr;
		m_pArr = NULL;
}

template<typename T, int KSize, int KValue>
void MyArray<T, KSize, KValue>::display()
{
		for(int i = 0; i < KSize; ++i)
		{
				cout << m_pArr[i] << endl;
		}
}
