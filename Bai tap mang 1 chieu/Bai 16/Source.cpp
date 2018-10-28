//Liệt kê các giá trị cực đại. Cực đại khi lớn hơn các ptử lận cận
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

void LKGTCucDai(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > a[i + 1] && a[i - 1] < a[i])
			cout << a[i];
	}
	cout << endl;
}

int main()
{
	vector<int> a;
	nhap(a);
	LKGTCucDai(a);
	system("pause");
	return 0;
}