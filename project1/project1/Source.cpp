#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//ver 1.0.0
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
//ver 2.0.0
float chuvitron(int r)
{
	return (float)r * 2 * 3.14;
}
float dientichtron(int r)
{
	return (float)r * r*3.14;
}
int chuvivuong(int c)
{
	return c * 4;
}
int dientichvuong(int c)
{
	return c * c;
}
int chuvicn(int d, int r)
{
	return (d + r) * 2;
}
int dientichcn(int d, int r)
{
	return d * r;
}


//chuong trinh chinh
int main()
{
	//ver1.0
	int a, b;
	cout << "\nNhap so thu nhat:"; cin >> a;
	cout << "\nNhap so thu hai:"; cin >> b;
	cout << "\n Tong la:" << tong(a, b);
	cout << "\n Tong la:" << hieu(a, b);
	cout << "\n Tong la:" << tich(a, b);
	cout << "\n Tong la:" << thuong(a, b) << endl;
	//ver2.0
	int chon = 0;
	cout << "\n1/Hinh tron";
	cout << "\n2/Hinh vuong";
	cout << "\n3/Hinh chu nhat";
	while (chon < 1 || chon>3)
	{
		cout << "\nMoi chon hinh so:";
		cin >> chon;
	}
	if (chon == 1)
	{
		int r; cout << "\nMoi nhap ban kinh:"; cin >> r;
		cout << "\nDien tich hinh tron la:" << dientichtron(r);
		cout << "\nChu vi hinh tron la:" << chuvitron(r);
	}
	else if (chon == 2)
	{
		int c; cout << "\nMoi nhap canh:"; cin >> c;
		cout << "\nDien tich hinh vuong la:" << dientichvuong(c);
		cout << "\nChu vi hinh vuong la:" << chuvivuong(c);
	}
	else
	{
		int d; cout << "\nMoi nhap chieu dai:"; cin >> d;
		int r; cout << "\nMoi nhap chieu rong:"; cin >> r;
		cout << "\nDien tich hinh chu nhat la:" << dientichcn(d,r);
		cout << "\nChu vi hinh chu nhat la:" << chuvicn(d,r);
	}
	cout << endl;
	//ver 3.0
	srand(time(0));
	int so1 = rand() % 100;
	int so2 = rand() % 100;
	cout << "\nSo ngau nhien 1 la:" << so1;
	cout << "\nSo ngau nhien 2 la:" << so2;
	cout << "\nTong 2 so ngau nhien la:" << tong(so1, so2);
	cout << endl;
	//ver 4.0
	int so3 = rand() % 100;
	int so4 = rand() % 100;
	cout << "\nSo ngau nhien 1 la:" << so3;
	cout << "\nSo ngau nhien 2 la:" << so4;
	cout << "\nHieu 2 so ngau nhien la:" << hieu(so3, so4);
	cout << endl;
	system("pause");
}


