#include <iostream>
using namespace std;

int tong(int a, int b)
{
	return a + b;
}

int hieu(int a, int b)
{
	return a - b;
}

int tich(int a, int b)
{
	return a * b;
}

float thuong(int a, int b)
{
	return (float)a / b;
}
int main()
{
	int a, b;
	cout << "\nNhap so thu nhat:"; cin >> a;
	cout << "\nNhap so thu hai:"; cin >> b;
	cout << "\n Tong la:" << tong(a, b);
	cout << "\n Tong la:" << hieu(a, b);
	cout << "\n Tong la:" << tich(a, b);
	cout << "\n Tong la:" << thuong(a, b)<<endl;
	system("pause");
}

