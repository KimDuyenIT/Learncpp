#include<iostream>
using namespace std;
int main()
{
	int so_nho, a, b, us, bs;
	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;
	if (a < b)
		so_nho = a;
	else
		so_nho = b;
	for (int i = 1; i <= so_nho; i++)
	{
		if (a % i == 0 && b % i == 0)
			us = i;
	}
	bs = (a * b) / us;
	cout << "USCLN la: " <<us <<endl;
	cout << "BSCNN la: " << bs <<endl;
	system("pause");
	return 0;
}