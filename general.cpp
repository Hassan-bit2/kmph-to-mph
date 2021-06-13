// Convert km/h to miles/h
#include <iostream>

using namespace std;

/*C(float a, float b)
{
	b = a/1.609344;
	cout << b << endl;
}*/
 
 int main()
 {
 	float a, b;
 	cout << "Enter speed in kilometers per hour" << endl;
 	cin >> a;
 	cout << "Speed in miles per hour is" << endl;
 	b = a/1.609344;
 	cout << b;
 }
