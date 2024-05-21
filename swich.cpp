#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    int x;
    cin>>x;
    switch(x)
    {
        case 1:
            cout<<"one\n";
            break;
        case 2:
            cout<<"Two\n";
            break;
        case 3:
            cout<<"Three\n";
            break;
        case 4:
            cout<<"Four\n";
            break;
        case 5:
            cout<<"Five\n";
            break;
        default:
            cout<< "Kichu mile nai";
    }
    return 0;
}