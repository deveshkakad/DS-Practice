#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int MaxElement(vector<int> ,int );
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


    cout<<MaxElement(arr,n)<<endl;
    return 0;
}

int MaxElement(vector<int> arr,int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    cout<<"Max Element is:";
    return maxi;
}