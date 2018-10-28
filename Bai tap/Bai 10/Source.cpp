#include<iostream>
using namespace std;
long long sum(int n)
{
	long long s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i;
	}
	return s;
}
int main()
{
	int n;
	cout << "Nhap  n = ";
	cin >> n;
	cout << sum(n) << endl;
	system("pause");
	return 0;
}