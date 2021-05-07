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

int main(){
    vector<string> words={"one", "two", "one", "three", "two"};
    map<char, vector<string>> c;
    for(const auto& word : words){
        c[word[0]].push_back(word);
    }

    PrintMapWithVector(c);
    cout<<c.size()<<endl;
    c.erase('o');
    PrintMapWithVector(c);
    cout<<c.size()<<endl;

    system("pause");
    return 0;
}