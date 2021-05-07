#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Max(const int& a, int& b){
    if(a>b){
        cout<<"Max is a "<<a<<endl;
    }else{
        cout<<"Max is b "<<b<<endl;
    }
}

void Min(const int& a, int& b){
    if(a<b){
        cout<<"Min is a "<<a<<endl;
    }else{
        cout<<"Min is b "<<b<<endl;
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout<<"max is "<<max(a,b)<<endl;
    cout<<"min is "<<min(a,b)<<endl;
    cout<<"another way"<<endl;
    Max(a,b);
    Min(a,b);
    //nonNumber
    cout<<max("abc", "bca")<<endl;
    cout<<max(true,false);

    return 0;
}