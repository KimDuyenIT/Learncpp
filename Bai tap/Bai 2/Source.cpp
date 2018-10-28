#include<iostream>
using namespace std;

template<class T>

T tongbinhphuong(T a, T b)
{
	return a*a + b*b;
}
int main()
{
	int x,y;
	while (x < 0 || y < 0)
	{
		cout << "Moi nhap lai so khac 0!!!" << endl;
		cout << "Nhap so x, y: ";
		cin >> x >> y;
	}
	cout << "Tong binh phuong la: " << tongbinhphuong(x,y);
	system("pause");
	return 0;
}