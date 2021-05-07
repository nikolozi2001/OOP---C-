#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <set>
 
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

void PrintMapWithVector (const map<char, vector<string>>& v){
        for (const auto& e : v){
            cout<<e.first<<endl;
            for(const auto& word : e.second){
                cout<<word<<" ";
            }
            cout<<endl<<"-----"<<endl;
        }
    }

void PrintSet(const set<string>& s){
    for (const auto& e : s){
        cout<<e<<endl;
    }
}

int main(){
    vector<string> words={"one", "two", "one", "three", "two"};
    set<string> sset(begin(words), end(words));
    PrintSet(sset);
    
    return 0;
}