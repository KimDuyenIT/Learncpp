#include<iostream>
#include<cmath>
using namespace std;
bool KTNguyento(int n)
{
	if (n < 2)
		return false;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}
int main()
{
	int n = 0;
	while (n <= 0)
	{
		cout << "Nhap so nguyen bat ky: ";
		cin >> n;
	}
	if (KTNguyento(n) == true)
		cout << "La so nguyen to" << endl;
	system("pause");
	return 0;
}