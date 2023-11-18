#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>,int);
int BetterApproachLargest(vector<int>,int );
int main()
{
    vector<int>arr;
    int n;
    cin>>n;

    cout<<"Enter the "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        int ip;
        cin>>ip;

        arr.push_back(ip);
    }

    //cout<<"Second Largest Element in the array is:"<<secondLargest(arr,n)<<endl;
    cout<<"Second Largest Element in the array is:"<<BetterApproachLargest(arr,n)<<endl;
    return 0;
}

int BetterApproachLargest(vector<int> arr,int n)
{
    int firstLargest=INT_MIN;
    int secondLargest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        firstLargest =max(firstLargest,arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>secondLargest && arr[i]!=firstLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;

}
int secondLargest(vector<int> arr,int n)
{
    int firstLargest=arr[0];

    int secondLargest=INT_MIN;

    for(int i=1;i<n;i++)
    {
        if(arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if(arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}