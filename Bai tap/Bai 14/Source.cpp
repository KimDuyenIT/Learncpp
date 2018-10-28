#include<iostream>
using namespace std;

int main()
{
	int n = 0, x = 0;
	float s = 0;
	cout << "Nhap n = ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		x = x + i;
		s = s + (float)1 / x;
	}
	cout << s << endl;
	system("pause");
	return 0;
}