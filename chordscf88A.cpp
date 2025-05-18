#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
string allnotes[] = {"C", "C#", "D", "D#", "E", "F","F#", "G", "G#", "A", "B", "H"};
int index(string s)
{
    for (int i = 0; i < 12; i++)
    {
        if (allnotes[i] == s)
        {
            return i;
        }
      
    }
      return 0;
}

string check(int indxs1, int indxs2, int indxs3)
{
    int frsttone, secndtone;
    if (indxs2 < indxs1)
    {
        frsttone = indxs2 + 12 - indxs1;
    }
    else
    {
        frsttone = indxs2  - indxs1;
    }

    if (indxs3 < indxs2)
    {
        secndtone = indxs3 + 12 - indxs2;
    }
    else
    {
        secndtone = indxs3 - indxs2;
    }

    if (frsttone == 4 && secndtone == 3)
    {
        return "major";
    }
    else if (frsttone == 3 && secndtone == 4)
    {
        return "minor";
    }
    else
    {
        return "strange";
    }
}



int fun()
{
    string s1, s2, s3;
    int x;

    cin >> s1 >> s2 >> s3;

    int indxs1 = index(s1);
    int indxs2 = index(s2);
    int indxs3 = index(s3);

    string s[6];
    s[0] = check(indxs1, indxs2, indxs3);
    s[1] = check(indxs1, indxs3, indxs2);

    s[2] = check(indxs3, indxs1, indxs2);
    s[3] = check(indxs3, indxs2, indxs1);

    s[4] = check(indxs2, indxs1, indxs3);
    s[5] = check(indxs2, indxs3, indxs1);


    int i = 0;
    while (i < 6)
    {
        if (s[i] == "major" || s[i] == "minor")
        {
            cout << s[i] << '\n';
            return 0;
        }
        i++;
    }
    cout << "strange" << '\n';
    return 0;
}


int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        fun();
    }
    return 0;
}
