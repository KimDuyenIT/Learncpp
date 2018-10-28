#include<iostream>
using namespace std;
int main()
{
	unsigned long t1000, t2000, t5000, t10000, t20000;
	unsigned long dem = 0;
	unsigned long sotien;
	cout << "Moi nhap so tien:";
	cin >> sotien;
	for (t1000 = 0; t1000 <= 300; t1000++)
	{
		for (t2000 = 0; t2000 <= 150; t2000++)
		{
			for (t5000 = 0; t5000 <= 60; t5000++)
			{
				for (t10000 = 0; t10000 <= 30; t10000++)
				{
					for (t20000 = 0; t20000 <= 15; t20000++)
					{
						if (t1000 * 1000 + t2000 * 2000 + t5000 * 5000 + t10000 * 10000 + t20000 * 20000 == sotien)
						{
							dem++;
							cout <<"\nCo "<< t1000 <<" to 1000d";
							cout << "\nCo " << t2000 <<" to 2000d";
							cout << "\nCo " << t5000 <<" to 5000d";
							cout << "\nCo " << t10000 <<" to 10000d";
							cout << "\nCo " << t20000 <<" to 20000d";
							cout << "\n-------------------------";
						}
					}
				}
			}
		}
	}
	cout << "\nVay so phuong an la: " << dem << endl;
	system("pause");
	return 0;
}