#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
 
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
    vector<string> words={"one", "two", "one"};
    map<string, int> counters={{"one",2}, {"two",1}};
    for (const string& word : words){
        if (counters.count(word)==0){
            counters[word]=1;
        }else{
            ++counters[word];
        }
    }
    system("pause");
    return 0;
}