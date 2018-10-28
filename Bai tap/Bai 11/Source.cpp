#include<iostream>
using namespace std;
double sum(int n)
{
	double s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += float(1)/i;
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