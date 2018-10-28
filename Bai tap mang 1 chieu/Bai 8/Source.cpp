//Liệt kê vị trí mà giá trị tại đó là giá trị lớn nhất
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


void VTMax(vector<int> &a)
{
	int max = a[0]; 
	int vitri = 0;
	//gia tri max
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	//Vi tri max
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == max)
		{
			vitri = i;
			cout << vitri;
		}
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	VTMax(a);
	system("pause");
	return 0;
} 