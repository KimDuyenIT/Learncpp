#include<iostream>
using namespace std;
void KTFibonaci(int n);

int main()
{
	int n;
	cout << "Nhap so: ";
	cin >> n;
	KTFibonaci(n);
	system("pause");
	return 0;
}
void KTFibonaci(int n)
{
	int n1 = 0, n2 = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			cout << n1 << " ";
			continue;
		}
		if (i == 2)
		{
			cout << n2 << " ";
			continue;
		}
		int x = n1 + n2;
		n1 = n2;
		n2 = x;
		cout << x << " ";
	}
	cout << endl;
}