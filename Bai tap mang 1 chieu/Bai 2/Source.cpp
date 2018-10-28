//Liệt kê các số trong mảng thực thuộc [x,y] cho trước
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
void LKSoTrongKhoang(vector<int> &a, int &x, int &y)
{
	cout << "Nhap [x,y]: ";
	cin >> x >> y;
	for (int i = 0; i < a.size(); i++)
	{
		if (x <= a[i] && a[i] <= y)
			cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	int x, y;
	nhap(a);
	LKSoTrongKhoang(a,x,y);
	system("pause");
	return 0;
}