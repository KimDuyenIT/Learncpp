#include<iostream>
using namespace std;
int giaithua_n(int n1)
{
	int s1 = 1;
	for (int i = 1; i <= n1; i++)
	{
		s1 *= i;
	}
	return s1;
}
int giaithua_k(int n2)
{
	int s2 = 1;
	for (int j = 1; j <= n2; j++)
	{
		s2 *= j;
	}
	return s2;
}
int Tohop(int n1, int n2)
{
	return giaithua_n(n1) / (giaithua_k(n2) * (giaithua_n(n1 - n2)));
}
int main()
{
	int n1, n2;
	cout << "Nhap n va k: ";
	cin >> n1 >> n2;
	cout << "To hop kCn la: " << Tohop(n1, n2) << endl;
	system("pause");
	return 0;
}