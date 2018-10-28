#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	cout << "So lon nhat la: " << max(a, b, c) << endl;
	system("pause");
	return 0;
}