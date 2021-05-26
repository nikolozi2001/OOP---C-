#include <iostream>
#include <string>
#include <vector>
using namespace std;

int x;
int Array[x+1];
int n, first, last;

void Input(){
cin>>n>>first>>last;
   for(int i=1; i<=n; i++) 
            cin>>Array[i];
}

int Calc_Distance(){
   int answer = 0;
      for(int i=first; i<=last; i++){
          answer += Array[i];
             }
          return answer;
}

int main(){
      Input();
    cout<<Calc_Distance()

return 0;
}