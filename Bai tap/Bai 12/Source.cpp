#include<iostream>
using namespace std;
int giaithua(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
int main()
{
	int n;
	cout << "Nhap  n = ";
	cin >> n;
	cout << giaithua(n) << endl;
	system("pause");
	return 0;
}