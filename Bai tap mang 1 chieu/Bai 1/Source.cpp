// Liệt kê các số âm trong mảng 1 chiều
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
void LKSoAm(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < 0)
			cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKSoAm(a);
	system("pause");
	return 0;
}