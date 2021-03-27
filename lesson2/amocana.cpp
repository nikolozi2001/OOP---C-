#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
// ამოცანა წერს ჩაწერილი 4 მნიშვნელობიდან უდიდესს.
int sheadare( int a, int b, int c, int d)
{
    vector<int> v = {a,b,c,d};
    sort(begin(v), end(v));
    return v[v.size()-1];   
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"max="<<sheadare(a,b,c,d)<<endl;
    system("pause");
    return 0;
}