#include <bits/stdc++.h>
using namespace std;

void fun()
{
  int n;
  cin >> n;
  int arr[n];
  arr[1] = 2;
  int k = n / 2;
  for (int i = 2; i <= k; i++)
  {
    arr[i] = (2 * arr[i - 1]) + 2;
  }

  if (n == 2)
  {
    cout << arr[1] << '\n';
  }
  else
  {
    cout << arr[n / 2] << '\n';
  }
}

int main()
{ 
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);   // Redirect stdin to input.txt
#endif  

  int t;
  cin >> t;
  while (t--)
  {
    fun();
  }
  return 0;
}