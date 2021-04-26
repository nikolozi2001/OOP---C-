#include <iostream>

using namespace std;

int main()
{
	int a,b;
	char str[] = "Hello Programmers";
	
	cout << "Enter 2 numbers - ";
	cin >> a >> b;
	cout << str;
	cout << endl;
	
	cout << "Value of a is " << a << endl << "Value of b is " << b;
	
    while (a || b != 0)
    {
        cin >> a >> b;
    }
    

	return 0;
}
