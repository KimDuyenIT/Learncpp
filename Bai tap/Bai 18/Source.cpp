#include<iostream>
using namespace std;
int main()
{
	int sotien = 5000;
	float km = 0.0;
	//Xe chưa chạy
	while (km <= 0)
	{
		cout << "So km di dc: ";
		cin >> km;
	}
	//Xe bat dau chạy 0. km -> 1km dc 5000đ
	if (km <= 1)
		cout << sotien << endl;
	//Xe chay 1.1 km =>(0.1 km chua toi 200m)
	//Chay 100m dc 500đ
	//Vay 1 km + 0.1 km dc 5,500đ
	else if (km < 1.2)
	{
		cout << sotien + (km - 1) * 5000 << endl;
	}
	//b. Xe chay 1.2 km =>(0.2 km bang 200m)
	//Chay 200m dc 1000đ
	//Vay 1 km + 0.2 km dc 6000đ
	//Toi da la 1.29 km
	else if (km >= 1.2 && km <= 30)
	{
		cout << sotien + (km - 1) * 5000 << endl;
	}
	//c.Xe chay > 30 km ==> 30.1 km
	else
	{
		cout << sotien + 29 * 5000 + (km - 30) * 3000 << endl;
	}
	system("pause");
	return 0;
	system("pause");
	return 0;
}