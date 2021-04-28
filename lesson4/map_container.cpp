#include <iostream>
#include <string>
#include <vector>
#include <map>
 
using namespace std;

void PrintVector(const vector<bool>& s){
    int i = 0;
    for (const auto& e : s)
    {
        cout<<i<<" --> "<<e<<endl;
        ++i;
    }
    
}


int main(){
    
    return 0;
}