#include <iostream>

using namespace std;

int sum(int a, int b){
	return (a + b);
}

int main()
{
	int a, b, c;

	cout << "Enter 2 numbers - ";
	cin >> a >> b;
	
	c = sum(a,b);
	cout<<"sum is "<<c<<endl;


	while (a && b != 0)
	{
		cout << "Enter 2 numbers - ";
		cin >> a >> b;
	
	}

	return 0;
}
