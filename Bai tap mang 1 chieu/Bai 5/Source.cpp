/*Liệt kê các giá trị thỏa: nhỏ hơn trị tuyệt đối của giá trị đứng liền sau và lớn hơn giá trị đứng liền trước nó*/
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
void LKSo(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i]<abs(a[i + 1]) && a[i]>a[i - 1])
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