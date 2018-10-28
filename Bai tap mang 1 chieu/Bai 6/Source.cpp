//Liệt kê số chẵn có ít nhất 1 lận cận cũng là giá trị chẵn
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
void LKSoChan(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 0 || a[i] % 2 == 0 && a[i - 1] % 2 == 0)
			cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKSoChan(a);
	system("pause");
	return 0;
}