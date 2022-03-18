#include<iostream>
using namespace std;
void lsearch(int *arr,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(arr+i) == key)
        {
            cout<<"Present "<<i<<endl;
            return;
        }
    }
    cout<<"Not Present "<<i-1<<endl;
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

        lsearch(arr,n,k);
    }
    return 0;
}