#include<bits/stdc++.h>
using namespace std;
/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

void print(vector<int> arr)
{
    int n=arr.size();

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int BruteSolution(vector<int>& arr,int n)
{   
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    int j=0;
    for(auto ele:s)
    {
        arr[j++]=ele;
    }
    return j;
}

int OptimalSolution(vector<int>& arr,int n)
{
    int ans=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[ans]=arr[i];
            ans++;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    cout << "Enter the " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        int ip;
        cin >> ip;

        arr.push_back(ip);
    }
    int ans;
   // ans=BruteSolution(arr,n);
    ans=OptimalSolution(arr,n);
    cout<<"Uique Elemets:"<<ans<<endl;
    print(arr);
    return 0;
}