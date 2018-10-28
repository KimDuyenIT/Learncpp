//Liệt kê giá trị có chữ số đầu tiên là chẵn
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

void LKGTChanDau(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= -9 && a[i] <= 9)
		{
			int b = a[i] % 10;
			if (b % 2 == 0)
				cout << "Gia tri co so dau so chan la: " << a[i] << endl;
		}
		if (a[i] >= -99 && a[i] <= -10 || a[i] >= 10 && a[i] <= 99)
		{

			int c = a[i] / 10;
			if (c % 2 == 0)
				cout << "Gia tri co so dau so chan la: " << a[i] << endl;
		}
		if (a[i] >= -999 && a[i] <= -100 || a[i] >= 100 && a[i] <= 999)
		{
			int d = a[i] / 100;
			if (d % 2 == 0)
				cout << "Gia tri co so dau so chan la: " << a[i] << endl;
		}
		if (a[i] >= -9999 && a[i] <= -1000 || a[i] >= 1000 && a[i] <= 9999)
		{
			int e = a[i] / 1000;
			if (e % 2 == 0)
				cout << "Gia tri co so dau so chan la: " << a[i] << endl;
		}
		if (a[i] >= -99999 && a[i] <= -10000 || a[i] >= 10000 && a[i] <= 99999)
		{
			int f = a[i] / 10000;
			if (f % 2 == 0)
				cout << "Gia tri co so dau so chan la: " << a[i] << endl;
		}
	}
	cout << endl;
}

int main()
{
	vector<int> a;
	nhap(a);
	LKGTChanDau(a);
	system("pause");
	return 0;
}