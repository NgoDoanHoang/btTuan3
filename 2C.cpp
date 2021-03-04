#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    int z=0;

    for (int i=0; i< (a.size())/2; i++)
    {
        if ( a[i]!= a[a.size()-i-1] )
        {
            z=1;
            break;
        }
    }
    if ( z==1 )
    {
        cout <<"no";
    } else
    cout << "yes";
    return 0;
}
