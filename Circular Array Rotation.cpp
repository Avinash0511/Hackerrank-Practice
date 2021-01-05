#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,q;
    cin>>n>>k>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(k%n == 0)
    {
        while (q--)
        {
            int temp;
            cin>>temp;
            cout<<arr[temp]<<endl;
        }
        return 0;
    }
    int temp,index=0;
    temp = k%n;
    int temparr[temp];
    for(int i=n-temp;i<n;i++)
    {
        temparr[index] = arr[i];
        index++;
    }
    for(int i=0;i<n-temp;i++)
    {
        temparr[index] = arr[i];
        index++;
    }
    while(q--)
    {
        int t;
        cin>>t;
        cout<<temparr[t]<<endl;
    }
    return 0;
}
