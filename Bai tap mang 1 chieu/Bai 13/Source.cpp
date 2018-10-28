//Liệt kê vị trí chẵn lớn nhất
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
void LKVTChanMax(vector<int> &a)
{
	int vt = 0;
	int max = INT_MIN;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] % 2 == 0 && a[i] > max)
		{
			max = a[i];
			vt = i;
		}
	}
	cout << "Vi tri chan lon nhat la: " << vt << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKVTChanMax(a);
	system("pause");
	return 0;
}
