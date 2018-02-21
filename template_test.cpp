#include <iostream>
using namespace std;

template <class T>
void myswap(T &a, T &b)
{
		T c;
		c = a;
		a = b;
		b = c;
}

int main(int argc, char *argv[])
{
	int a = 10, b = 20;
	myswap<int>(a,b);
	cout << "a = " << a << ", b = " << b << endl;

	string t1 = "hello", t2 = "world";
	myswap<string>(t1, t2);
	cout << t1 << t2 <<endl;

	return 0;
}
