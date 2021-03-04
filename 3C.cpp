#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int n;
    int re=0;
    int z=a;

    while ( a>0 )
    {
        n=a%10;
        a=a/10;
        re=( re*10 ) + n;
    }
    if ( z==re )
    {
        cout << "yes";
    } else cout <<" no ";
    return 0;
}
