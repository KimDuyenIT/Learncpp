//Liệt kê vị trí mà giá trị bằng giá trị âm đầu tiên
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
void LKVTAmDau(vector<int> &a)
{
	int vt = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < 0)
		{
			vt = i;
			cout <<"Vi tri am dau tien: "<< vt;
			break;
		}
	}
	cout << endl;
}
int main()
{
	vector<int> a;
	nhap(a);
	LKVTAmDau(a);
	system("pause");
	return 0;
}
