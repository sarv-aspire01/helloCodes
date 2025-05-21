#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;

    int ttlfaces = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            ttlfaces += 4;
        }
        else if (s == "Cube")
        {
            ttlfaces += 6;
        }
        else if (s == "Octahedron")
        {
            ttlfaces += 8;
        }
        else if (s == "Dodecahedron")
        {
            ttlfaces += 12;
        }
        else if (s == "Icosahedron")
        {
            ttlfaces += 20;
        }
    }

    cout << ttlfaces << '\n';
}