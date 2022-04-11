#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int comparisons=0;
    int shift=0;
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            shift++;
            j = j - 1;
        }
        arr[j + 1] = key;
        shift++;
    }
        for (i = 1; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"comparisons="<<comparisons<<endl;
    cout<<"shift="<<shift<<endl;
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
        insertionSort(arr,n);
    return 0;
    }
}

