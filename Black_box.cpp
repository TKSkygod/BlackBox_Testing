#include <iostream>
using namespace std;

int main()
{
	int thuesuat;
	double luong, thue;
	cout << "Nhap so tien luong =  ";
	cin >> luong;
	if (luong >= 15)
	{
		thue = luong * 0.3;
	}
	else if (luong >= 7)
	{
		thue = luong * 0.2;
	}
	else if (luong >= 0)
	{
		thue = luong * 0.1;
	}
    else {
        cout << "Input khong hop le";
        return 0;
    }
	cout << "thue thu nhap = " << thue << endl;
	return 0;
}

