#include<iostream>
using namespace std;
void bsearch(int arr[],int n,int key)
{
    int l=0,r=n-1,c=0;
    while(l<=r)
    {
        c++;
        int m = l + (r-l)/2;

        if(arr[m] == key)
        {
            cout<<"Present "<<c<<endl;
            return;
        }

        if(arr[m] < key)
            l = m+1;
        else
            r = m-1;
    }
    cout<<"Not Present "<<c<<endl;
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
        bsearch(arr,n,k);
    }
    return 0;
}
