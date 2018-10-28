//Liệt kê vị trí mà giá trị bằng giá trị dương nhỏ nhất
#include<iostream>
#include <climits> 
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
void LKVTDuongMin(vector<int> &a)
{
	int vt = 0;
	int min = INT_MAX;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 0 && a[i] < min)
		{
			min = a[i];
			vt = i;
		}
	}
	cout << "Vi tri duong nho nhat la: " << vt << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKVTDuongMin(a);
	system("pause");
	return 0;
}
