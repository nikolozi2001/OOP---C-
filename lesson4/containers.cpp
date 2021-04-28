#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

void PrintVector(const vector<int>& s){
    for (const auto& e : s)
    {
        cout<<e<<endl;
    }
    
}

int main(){
    vector<int> days_in_month={31,28,31,30,31};
    PrintVector(days_in_month);
    days_in_month[1]=29;
    PrintVector(days_in_month);
}