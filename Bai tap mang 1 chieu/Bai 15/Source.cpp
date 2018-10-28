//Liệt kê giá trị tòan chữ số lẻ
#include<iostream>
#include<vector>
using namespace std;

void nhap(vector<int> &a)
{
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	if (n < 1)
		return;
	a.resize(n);
	cout << "Nhap gia tri moi phan tu" << endl;
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
}
void LTGTToanLe(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= -9 && a[i] <= 9)
		{
			int b = a[i] % 10;
			if (b % 2 != 0)
				cout <<"So toan le la: "<< a[i] << endl;
		}
		if (a[i] >= -99 && a[i] <= -10 || a[i] >= 10 && a[i] <= 99)
		{
			int c = a[i] / 10;
			int d = a[i] % 10;
			if (c % 2 != 0 && d % 2 != 0)
				cout << "So toan le la: " << a[i] << endl;
		}
		if (a[i] >= -999 && a[i] <= -100 || a[i] >= 100 && a[i] <= 999)
		{
			int e = a[i] / 100;
			int f = a[i] / 10;
			int g = a[i] % 10;
			if (e % 2 != 0 && f % 2 != 0 && g % 2 != 0)
				cout << "So toan le la: " << a[i] << endl;
		}
		if (a[i] >= -9999 && a[i] <= -1000 || a[i] >= 1000 && a[i] <= 9999)
		{
			int j = a[i] / 1000;
			int k = a[i] / 100;
			int l = a[i] / 10;
			int m = a[i] % 10;
			if (j % 2 != 0 && k % 2 != 0 && l % 2 != 0 && m % 2 != 0)
				cout << "So toan le la: " << a[i] << endl;
		}
		if (a[i] >= -99999 && a[i] <= -10000 || a[i] >= 10000 && a[i] <= 99999)
		{
			int o = a[i] / 10000;
			int p = a[i] / 1000;
			int q = a[i] / 100;
			int r = a[i] / 10;
			int s = a[i] % 10;
			if (o % 2 != 0 && p % 2 != 0 && q % 2 != 0 && r % 2 != 0 && s % 2 != 0)
				cout << "So toan le la: " << a[i] << endl;
		}
	}
}
int main()
{
	vector<int> a;
	nhap(a);
	LTGTToanLe(a);
	system("pause");
	return 0;
}