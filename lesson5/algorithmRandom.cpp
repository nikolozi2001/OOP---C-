#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;
using namespace std::chrono;

void Print(const vector<int>& v){
    for (auto e : v){
        cout<<e<<endl;
    }
}

void SortVector(vector<int>& v){
    int temp;
    for(int i=0; i<v.size(); i++){
        for (int j=i; j<v.size(); j++){
            if(v[j]<v[i]){
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
}

int main(){
    vector<int> v;
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1,1000);
    for (int i=0; i<100000; i++){
        v.push_back(dist(mt));
    }
    auto start = steady_clock::now();
    SortVector(v);
    auto end = steady_clock::now();
    cout<<"Sorting took "<<duration_cast<milliseconds>(end-start).count()<<" ms"<<endl;

    start = steady_clock::now();
    sort(v.begin(), v.end());
    end = steady_clock::now();
    cout<<"Sorting from algorithm library took "<<duration_cast<milliseconds>(end-start).count()<<" ms"<<endl;

    return 0;
}