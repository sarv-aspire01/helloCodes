//---------------------------------------------------------------
/* concepts
unordered set, hash map, find , vector, string
 */
#include <bits/stdc++.h>
using namespace std;

void fun()
{ int n;
cin>>n;

string str;
cin>>str;
int count=0;

unordered_set<char> list;

for(char c:str){

if(list.find(c)!=list.end()){
    list.insert(c);
    count+=1;
}else{
    list.insert(c);
    count+=2;

}
}

cout<<count<<'\n';


}

int main()
{ int t;
cin>>t;
while(t--){
    fun();

}

    return 0;
}
