#include <bits/stdc++.h>
using namespace std;

bool isArraySorted(vector<int>arr,int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i] <arr[i-1])
        {
            return false;
        }
    }
    return true;
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

    cout<<"Array is sorted:"<<isArraySorted(arr,n)<<endl;
    return 0;
}