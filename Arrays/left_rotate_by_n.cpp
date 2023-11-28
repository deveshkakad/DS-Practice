#include<bits/stdc++.h>
using namespace std;

void LeftRotateByN(vector<int> &arr,int k)
{
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}
void print(vector<int> arr)
{
    int n=arr.size();

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    int k;
    cout<<"Enter k:";
    cin>>k;
    LeftRotateByN(arr,k);
    print(arr);
    return 0;
}