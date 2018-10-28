#include<iostream>
using namespace std;
int main()
{
	int n = 0,dem = 0;
	cout << "Nhap n bat ky: ";
	cin >> n;
	while (n > 0)
	{
		n = n / 10;
		dem++;
	}
	cout << dem << endl;
	system("pause");
	return 0;
}