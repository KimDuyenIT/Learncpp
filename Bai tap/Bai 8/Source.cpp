#include<iostream> 
#include<cmath>
using namespace std;

template<class T>   
void Nhapheso(T &x,T &y)
{
	cout << "Nhap a: ";
	cin >> x;
	cout << "Nhap b: ";
	cin >> y;
}
void GiaiPTBac1(int a1, int b1)
{
	if (a1 == 0)
	{
		if (b1 == 0)
			cout << "Vo so nghiem" << endl;
		else
			cout << "Vo nghiem" << endl;
	}
	else
		cout << "x = " << -b1 / (float)a1 << endl;
}
template<class Y>
void Nhapheso(Y &i, Y &j, Y &k)
{
	cout << "Nhap a: ";
	cin >> i;
	cout << "Nhap b: ";
	cin >> j;
	cout << "Nhap b: ";
	cin >> k;
}
void GiaiPtBac2(float a2, float b2, float c2)
{
	if (a2 == 0)
	{
		// trở về PT bậc nhất: bx + c = 0
		if (b2 == 0)
		{
			if (c2 == 0)
				cout << "Phuong trinh vo so nghiem" << endl;
			else // <=> if(c != 0)
				cout << "Phuong trinh vo nghiem" << endl;
		}
		else //  <=> if(b != 0)
		{
			cout << "Phuong trinh co nghiem: " << -c2 / b2 << endl;
		}
	}
	else // <=> if(a != 0)
	{
		float delta = (b2 * b2) - (4 * a2 * c2);
		// kiểm tra các trường hợp của delta
		if (delta == 0)
			cout << "Phuong trinh co nghiem kep: " << -b2 / 2 * a2 << endl;
		else if (delta < 0)
			cout << "Phuong trinh vo nghiem" << endl;
		else // trường hợp còn lại - delta > 0
		{
			cout << "Phuong trinh co 2 nghiem phan biet: " << endl;
			cout << "x1: " << (-b2 + sqrt(delta)) / (2 * a2) << endl;
			cout << "x2: " << (-b2 - sqrt(delta)) / (2 * a2) << endl;
		}
	}
}
int main()
{
	int a1, b1; 
	float a2, b2, c2;
	Nhapheso(a1, b1); // T sẽ có kiểu int
	GiaiPTBac1(a1, b1);
	cout << "\n---------------\n";
	Nhapheso(a2, b2, c2); //Y có kiểu float
	GiaiPtBac2(a2, b2, c2);
	system("pause");
	return 0;
}