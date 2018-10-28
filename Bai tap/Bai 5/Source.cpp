#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	int a, b, c;
	while (n <= 0)
	{
		cout << "Nhap 3 chu so: ";
		cin >> n;
	}
	a = n % 10; // Tach so hang don vi
	b = n / 10;
	c = b / 10; // Tach so hang tram
	b = b % 10; // Tach so hang chuc
	cout << "Tram: " << c << endl;
	cout <<"Chuc: "<< b << endl;
	cout << "Don vi: " << a << endl;
	system("pause");
	return 0;
}