#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap 3 so a,b,c: ";
	cin >> a >> b >> c;
	if (c >= a && c <= b)
		cout <<"Chua trong khoang [a,b] la: "<< c << endl;
	system("pause");
	return 0;
}