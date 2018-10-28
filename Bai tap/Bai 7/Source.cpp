#include<iostream>
#include<cmath> 
using namespace std;
int Demchuso(int n)
{
	int dem = 0, temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		dem++;
	}
	return dem;
}

void KTArmstrong(int n)
{
	int temp = n;
	int mu = Demchuso(n);
	int sum = 0;
	while (n != 0)
	{
		sum += pow((n % 10), mu);
		n = n / 10;
	}
	if (temp == sum)
		cout << "La Armstrong" << endl;
	else
		cout << "Khong la Armstrong" << endl;
}
int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	KTArmstrong(n);
	cout << endl;
	system("pause");
	return 0;
}