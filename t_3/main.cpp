#include <iostream>

using namespace std;
int main()
{
    long long int a,b,n,ans,tmp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Case #"<<i<<": ";
        ans=0;
        cin>>a>>b;
        if(a==0&&b==0)
        {
            cout<<"1\n";
            continue;
        }
        if(a==0||b==0)
        {
            cout<<"2\n";
            continue;
        }
        while(b)
        {
            ans+=a/b;
            tmp=b;
            b=a%b;
            a=tmp;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}