//Liệt kê các số có ít nhất 1 lận cận trái dấu với nó.
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
void LKSo(vector<int> &a)
{
	int x, y;
	for (int i = 0; i < a.size(); i++)
	{
		x = a[i] * a[i - 1];
		y = a[i] * a[i + 1];
		if (x < 0 || y < 0)
			cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKSo(a);
	system("pause");
	return 0;
}