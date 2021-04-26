#include <iostream>
#include <string>

using namespace std;


int sum(int a, int b){
	return (a + b);
}

int sub(int c, int a){
    return (c - a);
}

int main(){
    int a, b, c, s;

	cout << "Enter 2 numbers - ";
	cin >> a >> b;
	
	c = sum(a,b);
	cout<<"sum is "<<c<<endl;

    s = sub(c,a);
    cout<<"sub is "<<s<<endl;
    

}