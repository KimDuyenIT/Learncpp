//Liệt kê vị trí của số nguyên tố
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

void LKVTNguyenTo(vector<int> &a)
{
	bool kq;
	int vt = 0;
	for (int i = 0; i < a.size(); i++)
	{
		kq = true;
		if (a[i] < 2)
			kq = false;
		for (int j = 2; j <= sqrt(a[i]); j++)
		{
			if (a[i] % j == 0)
				kq = false;
		}
		if (kq == true)
		{
			vt = i;
			cout << vt <<" ";
		}
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKVTNguyenTo(a);
	system("pause");
	return 0;
}
