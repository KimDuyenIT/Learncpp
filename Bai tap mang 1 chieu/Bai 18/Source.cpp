//Liệt kê giá trị có dạng 3^k. Nếu mảng ko có thì trả về 0
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
void LKGT3muK(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > 0)
		{
			float x = log(a[i]) / log(3);
			if (x == floor(x))
				cout << a[i];
		}
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKGT3muK(a);
	system("pause");
	return 0;
}