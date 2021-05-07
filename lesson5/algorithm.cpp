#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

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
    vector<int> v = {90,0,-10,2,3,1,-100,-87,87};
    Print(v);
    cout<<endl<<"-----"<<endl;
    SortVector(v);
    Print(v);

    return 0;
}