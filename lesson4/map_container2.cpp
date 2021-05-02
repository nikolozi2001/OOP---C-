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

void PrintMap(const map<string, int>& m){
    
    for (const auto& e : m)
    {
        cout<<e.first<<" --> "<<e.second<<endl;
    }
    
}

void PrintReversedMap(const map<int, string>& m){
    
    for (const auto& e : m)
    {
        cout<<e.first<<" --> "<<e.second<<endl;
    }
    
}

int main(){
    map<string, int> fam_people_bd{{"Charles Babbage",1791}, {"Ada Lavelace",1815}, {"Alan Turning",1912}, {"John Von Neuman",1903}};
    map<int, string> fam_people_bd_reversed;

    for(const auto& e : fam_people_bd){
        fam_people_bd_reversed[e.second]=e.first;
    }

    PrintReversedMap(fam_people_bd_reversed);

    return 0;
}