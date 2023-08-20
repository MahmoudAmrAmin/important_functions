//#include<bits/stdc++.h>
/*
#include<iostream>
#include<list>
#include<forward_list>
#include<numeric>
#include<algorithm>
#include<utility>
#include<string>
#include<deque>
#include<queue>
#include<cmath>
#include<set>
#include<stack>
#define ll long long
#define Endl endl
#define fastread() ios::sync_with_stdio(NULL),cin.tie(nullptr),cout.tie(nullptr)
using namespace std;

int main() {
    fastread();
    forward_list<int>fl;
    fl.assign({1,2,3,4,5,6});
    list<int>l;




}
*/
#include <bits/stdc++.h>
#define ll long long
#define Endl endl
#define fastread() ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
bool sortbysec(  map<string,string>a,map<string ,string>b)
{
    auto it1=a.begin();
    auto it2=b.begin();
    if(it1->second==it2->second)
    {
        return it1->first>it2->first;
    }
    return (it1->second < it2->second);
}
int main() {
    fastread();
    int size,q;
    cin>>size>>q;
    vector<pair<int,int>>v(size);
    for (int i = 0; i <size ; ++i) {
        cin>>v[i].first>>v[i].second;
    }
    while(q--){
        string input;cin>>input;
        if(input=="find")
        {
            pair<int,int>p;
            int num1,num2;cin>> num1>> num2;
            p= make_pair(num1,num2);
            int l=0,r=size-1,mid=(l+r)/2,flag=0;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(v[mid]==p)
                {
                    flag=1;break;
                }
                if(v[mid]>p)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(flag==1)
            {
                cout<<"found"<<endl;
            }
            else
            {
                cout<<"not found"<<endl;
            }
        }
        else if(input =="lower")
        {
            pair<int,int>p;
            int num1,num2;cin>> num1>> num2;
            p= make_pair(num1,num2);
            int l=0,r=size-1,mid=(l+r)/2,flag=-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(v[mid]<p)
                {
                    l=mid+1;
                    flag=mid;
                }
                else
                {
                    r=mid-1;
                }
            }
            cout<<flag<<endl;
        }
        else
        {
            pair<int,int>p;
            int num1,num2;cin>> num1>> num2;
            p= make_pair(num1,num2);
            int l=0,r=size-1,mid=(l+r)/2,flag=-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(v[mid]>p)
                {
                    r=mid-1;
                    flag=mid;
                }
                else
                {
                    l=mid+1;
                }
            }
            cout<<flag<<endl;
        }
    }
}



















