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
	int n = 0,dem = 0;
	while (n <= 0)
	{
		cout << "Nhap so nguyen bat ky: ";
		cin >> n;
	}
	//Liet ke cac so nguyen to < n
	for (int i = 0; i < n; i++)
	{
		if (KTNguyento(i) == true)
		{
			cout << i << endl;
			dem++;
		}
	}
	if (dem == 0)
		cout << "Khong co so nguyen to nao!!!" << endl;
	system("pause");
	return 0;
}