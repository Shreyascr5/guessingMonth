#include<iostream>
using namespace std;

int main()
{
	int year, month;
	cout << "Year and month: " << endl;
	cin >> year >> month;

	switch (month)
	{
	case 2:(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?
		cout << "29 Days month" : cout << "28 Days month"; break;
	case 4:
	case 6:
	case 9: 
	case 11: cout << "31 Days month"; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8 :
	case 10:
	case 12:cout << "31 Days month"; break;

	default:cout << "please enter a valid month or year";
		break;
	 
	}
	system("pause>0");
}