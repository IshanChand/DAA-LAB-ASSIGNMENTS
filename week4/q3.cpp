#include<iostream>
using namespace std;
void findarr(int arr[],int n,int k)
{
    int small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
            k--;
        if(k==0)
        {
            cout<<arr[i];
            break;
    }
}}
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
        findarr(arr,n,k);
        }
    return 0;
    }



