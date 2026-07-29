//---------------------------------

#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    int sum =0;
    bool flag =true;
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
            sum+=arr[i];
        
    }
    int k = sum/n;

    for(int x =0;x<n;x++){
        if (arr[x]<k){
            flag = false;
            break;
        }else{
            arr[x+1]+=arr[x]-k;
            arr[x]=k;

        }

    }

 


    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
