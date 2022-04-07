#include<iostream>
using namespace std;
void sequenceFind(int arr[],int k,int len)
{
    int f=0;
    for(int i=len;i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            for(int k=j-1;k>0;k--)
            {
                if(arr[i]==(arr[j]+arr[k]))
                    {
                        cout<<i<<","<<j<<","<<k;
                        f++;
            }
        }
    }
}
if(f==0)
    cout<<"NO SEQUNECE";
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];

        cin>>k;
        sequenceFind(arr,k,n);
    }
    return 0;
}
