#include <bits/stdc++.h>      
#include <iomanip>                         
using namespace std;
void fun()
{                                                
    int nstdnt, msbjct;
    cin >> nstdnt >> msbjct;  
                                
    char mrks[nstdnt][msbjct];
                                                                                                    
    int ans = 0;                                       
    for (int i = 0; i < nstdnt; i++)    
    {                                   
        for (int j = 0; j < msbjct; j++)               
        {                                  
            cin >> mrks[i][j];          
        }                                
    }                                         
                                                                                  
    for (int i = 0; i < nstdnt; ++i)       
    {                                       
        bool wasbest = false;               
        for (int j = 0; j < msbjct; ++j)          
        {                                   
            bool isbest = true;                  
            for (int k = 0; k < nstdnt; ++k)    
            {                                   
                if (mrks[k][j] > mrks[i][j])   
                    isbest = false;         
            }                               
            if (isbest)                            
            {                                
                wasbest = true;              
            }                                  
        }                                       
        if (wasbest)                          
        {                                    
            ans++;                           
        }                                    
    }                                         
    cout<<ans<<'\n';                          
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