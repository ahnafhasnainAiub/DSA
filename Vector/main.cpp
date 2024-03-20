#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    //Using Iterator
    cout<<"Using Iterator "<<endl;

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
       cout<<*it<<endl; //Because Iterator is a pointer
    }

    //Using Auto
     cout<<"Using Auto Keywords  "<<endl;


    for(auto element:v)
    {
        cout<<element<<endl;
    }
    v.pop_back();

    //In V2 vector there are 3 elements and both elements are 10
    vector<int> v2 (3,10);

    //Swapping Values between vectors
    swap(v,v2);

    for(auto element:v)
    {
        cout<<element<<endl;
    }
    for(auto element:v2)
    {
        cout<<element<<endl;
    }

    //Vector Element Sorting
    vector<int> v3{3,9,4,2,0,6,11};
    sort(v3.begin(), v3.end());

    for(auto a:v3)
    {
        cout<<a<<" ";
    }


    return 0;
}
