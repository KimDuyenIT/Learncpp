#include<iostream>
using namespace std;

template<class T>

T CsangF(T c)
{
	return 5 / 9.0 * (F - 32.0);
}
int main()
{
	int f;
	cout << "Nhap so F = ";
	cin >> f;
	cout << "Doi C --> F = " << CsangF(f);
	system("pause");
	return 0;
}