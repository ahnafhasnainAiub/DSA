#include <iostream>
#include <map>
//#include<bits/stdc++.h>
using namespace std;

   void printStl(map<int,string> &m)
   {
      for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

   }

int main()
{
    map<int, string> m;
    m[1]="Ahnaf";    //Time complexity O(log(n))
    m[4]="Nahiun";
    m.insert({3,"Hasnain"});
    m
    printStl(m);

   /* map<int, string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    */



    return 0;
}
