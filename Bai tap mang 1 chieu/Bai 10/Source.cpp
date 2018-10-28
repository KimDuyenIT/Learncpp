//Liệt kê vị trí của số chính phương
#include<iostream>
#include<cmath>
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

void LKVTChinhPhuong(vector<int> &a)
{
	int vitri = 0;
	for (int i = 0; i < a.size(); i++)
	{
		for (int k = 0; k <= a[i]; k++)
		{
			if (sqrt(a[i]) == k)
			{
				vitri = i;
				cout << vitri << "";
			}
		}
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKVTChinhPhuong(a);
	system("pause");
	return 0;
}