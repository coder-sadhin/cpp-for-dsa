#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    char x;
    cin>>x;
    switch(x)
    {
        case 'a':
            cout<<"Vowel\n";
            break;
        case 'e':
            cout<<"Vowel\n";
            break;
        case 'i':
            cout<<"Vowel\n";
            break;
        case 'o':
            cout<<"Vowel\n";
            break;
        case 'u':
            cout<<"Vowel\n";
            break;
        default:
            cout<< "Consonant";
    }
    return 0;
}