#ifndef __MYARRAY_H__
#define __MYARRAY_H__
//#include <iostream>
//using namespace std;

template<typename T, int KSize, int KValue>
class MyArray
{
public:
		MyArray();
		~MyArray();
		void display();
private:
		T *m_pArr;
};

#include "MyArray.cpp"

/*
template<typename T, int KSize, int KValue>
MyArray<T, KSize, KValue>::MyArray()
{
      m_pArr = new T[KSize];
      for(int i = 0; i < KSize; ++i)
      {   
            m_pArr[i] = KValue;
	  }   
}

template<typename T, int KSzie, int KValue>
MyArray<T, KSzie, KValue>::~MyArray()
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
*/

#endif
