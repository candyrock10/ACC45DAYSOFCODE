#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;
        if ((a + b || b + c || c + a) <= d)
        {
            printf("yes");
        }
        else if ((a || b || c) <= e)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }

    return 0;
}