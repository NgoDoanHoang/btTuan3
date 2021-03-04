#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int x[a];
    for ( int i=0; i<a; i++ )
    {
        cin >> x[i];
    }

    int r=0;

    for(int i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if(x[i]==x[j])
			{
				r = 1;
				break;
			}
		}
	}
	if(r==1) cout << "yes";

    return 0;
}
