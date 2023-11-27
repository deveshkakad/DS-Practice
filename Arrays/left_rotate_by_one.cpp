#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    int n=arr.size();

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void LeftRotateByOne(vector<int>& arr)
{
    int n=arr.size();
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
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

    LeftRotateByOne(arr);
    print(arr);
    return 0;
}