#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int a[n], b[n],i,j=0,k=0, max=0,sum=0, lex=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            b[j]=n/i;
            k=b[j];
            sum=0;
            while(k!=0)
            {
                sum = sum + k%10;
                k = k/10;
            }
            a[j]=sum;
            j++;
        }
    }
    for(i=j-1; i>=0; i--)
    {
        if(max<a[i])
        {
            max = a[i];
            lex = b[i];
        }
    }
    cout<<lex<<endl;

    return 0;
}
