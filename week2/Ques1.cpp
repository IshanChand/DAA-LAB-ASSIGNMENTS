#include<iostream>
using namespace std;
int frequency(int arr[],int key,int l)
{
    int c=0;
    for (int i=0;i<l;i++)
    {
        if(arr[i]==key)
            c++;
    }
    return c;

}
int bsearch(int arr[],int n,int key)
{
    int l=0,r=n-1,c=0;
    while(l<=r)
    {
        c++;
        int m = l + (r-l)/2;

        if(arr[m] == key)
        {
            return 1 ;
        }

        if(arr[m] < key)
            l = m+1;
        else
            r = m-1;
    }
   return 0;
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
        int f=bsearch(arr,n,k);
        if(f==1)
        {
            int c=frequency(arr,k,n);
            cout<<k<<"-"<<c;
        }
        else
        {
            cout<<"NOT PRESENT";
        }

    }
    return 0;
}
