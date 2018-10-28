#include<iostream>
using namespace std;
void GiaiHePhuongTrinh(int a, int b, int c, int d, int e, int f, float &x, float &y)
{
	int D = a * e - d * b;
	int Dx = c * e - f * b;
	int Dy = a * f - d * c;
	if (D != 0)
	{
		x = float(Dx) / D;
		y = float(Dy) / D;
		cout << "He phuong trinh co nghiem" << endl;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	else
	{
		if (Dx != 0 || Dy != 0)
			cout << "He phuong trinh vo nghiem" << endl;
		else if (Dx == Dy == 0)
			cout << "He phuong trinh vo so nghiem" << endl;
	}
}
int main()
{
	int a, b, c, d, e, f;
	float x, y;
	cout << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
	cout << "Nhap c = "; cin >> c;
	cout << "Nhap d = "; cin >> d;
	cout << "Nhap e: "; cin >> e;
	cout << "Nhap f: "; cin >> f;
	GiaiHePhuongTrinh(a, b, c, d, e, f, x, y);
	system("pause");
	return 0;
}