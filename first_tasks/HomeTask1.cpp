#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}

int main(){
    int a, b;
    cin>>a >> b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(a, b);
    cout<<endl<<"main function"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}