#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    //Creation
    map<string,int> m;

    //Insertion
    //1 type
    pair<string, int> p = make_pair("Ahnaf", 1);

    //2
    pair<string,int> q("Hasnain", 5); //Not working
    m.insert(q);

    //3
    m["Nahiun"] = 2;
    m["Aiub"] = 3;

    //Searching
    cout<<m["Nahiun"] <<endl;
    cout<< m.at("Hasnain")<<endl;

    //cout<< m.at("Unknown")<<endl; out of range
    cout<<m["Unknown Key"]<<endl; //
    cout<< m.at("Unknown Key")<<endl;

    //size
    cout<<m.size()<<endl;

    //To Check Present
    cout<<m.count("Hasnain")<<endl; //If present then return 1
    cout<<m.count("Love")<<endl; //If absent then return 0

    //Erase
    m.erase("Nahiun");
    cout<< m.size()<<endl;

    //Iterator 1
   /* for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    */

    //Iterator 2
    map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout<<it->first <<" "<<it->second <<endl;
        it++;
    }

    return 0;
}
