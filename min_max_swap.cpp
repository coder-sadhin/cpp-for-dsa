#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    // int c= min(a,b);
    // int d=max(a,b);
    // cout<<c<<" "<<d<<endl;
    int mn=min({a,b,c,d});
    int mx=max({a,b,c,d});
    cout<<mn<< endl<<" "<<mx<<endl;
    return 0;
}