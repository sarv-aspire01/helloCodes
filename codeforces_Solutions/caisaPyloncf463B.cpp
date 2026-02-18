
#include <bits/stdc++.h>
using namespace std;

void fun()
{
    int n;
    cin >> n;
    int hights[n + 1];
    int cntdlr = 0;
    hights[0] = 0;
    for (int i = 1; i <= n; i++)
    {

        cin >> hights[i];
    }

    int energy = 0;
    int gain =0;
    for (int i = 0; i < n; i++)
    {
         gain = ((hights[i] - hights[i + 1]));
       
        if (gain >= 0)
        {
            energy += gain;
        }
        else
        {
            int req = abs(gain);
           
            if (req <= energy)
            {
                energy -= req;
            }
            else
            {
                cntdlr += (req - energy);

                energy = 0;
            }
        }
    }

    cout << cntdlr;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        fun();
    }
    return 0;
}
