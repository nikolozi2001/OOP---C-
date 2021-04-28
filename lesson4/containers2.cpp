#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

void PrintVector(const vector<bool>& s){
    int i = 0;
    for (const auto& e : s)
    {
        cout<<i<<" --> "<<e<<endl;
        ++i;
    }
    
}

void PrintVector_int(const vector<int>& s){
    int i = 0;
    for (const auto& e : s)
    {
        cout<<i<<" --> "<<e<<endl;
        ++i;
    }
    
}

int main(){
    vector <bool> is_holidays(31,false);
    vector <int> int_test(31,10000);
    PrintVector(is_holidays);
    cout<<"================"<<endl;
    is_holidays[2]=true;
    is_holidays[7]=true;
    PrintVector(is_holidays);
    cout<<"================"<<endl;
    // is_holidays.resize(30);
    // PrintVector(is_holidays);
    cout<<"================"<<endl;
    is_holidays.assign(30,false);
    is_holidays[8]=true;
    PrintVector(is_holidays);
    cout<<"================"<<endl;
    PrintVector_int(int_test);
    return 0;
}