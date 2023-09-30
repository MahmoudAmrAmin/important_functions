#include <bits/stdc++.h>
#define ll long long
#define mahmoud_eldoksh ios_base::sync_with_stdio(0), cout.tie(0),cin.tie(0);
#define Endl endl
#define fastread() ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
bool sortbysec(  const pair<int,int> & a,const pair<int ,int > & b)
{

    if(a.first-a.second== b.first-b.second)
    {
        return a.first<b.first;
    }
    return (a.first-a.second < b.first-b.second);
}
ll   SumDigit(ll   num)
{
    ll sum =0;
    while(num )
    {
        ll rem = num %10;
        sum += rem;
        num /=10;
    }
    return sum ;
}
bool check(vector<int>v)
{
    for (int i = 1; i <v.size()-1 ; ++i) {
        if(v[i]<v[i-1]){return false;}
    }
    return true;
}
bool check(vector<int>v[1000],int size)
{
    reverse(v->begin(),v->end());
    for (int i = 2; i < size ; ++i) {
        if(v[i].size()==0||v[i-1].size()==0){continue;}
        if(v[i].size()>=3&&v[i-1].size()<=3){return false;}
    }
    return true;
}
bool knowDigit(int n,int i)
{
    return (1&(n>>i));
}
int  setDigit(int n ,int i )
{
    n= n|(1 << i);
    return n ;
}
int  resetDigit(int n ,int i)
{
    n =n & (~ (1<<i));
    return n;
}
int  fileb (int n ,int i)
{
    n ^=(1<<i);
    return n;
}

ll fib( ll x)
{
    if (x == 1|| x== 2){return 1;}
    return fib(x-1) + fib(x-2);
}
ll exp( ll c ,ll b )
{
    int ans;
    if(b == 0 ){return ans;}
    ans *=c;
    exp(c,b -1 );
}
ll power(ll a ,ll b )
{
    if(b== 0){return 1;}
    return a * power(a , b-1);
}
ll fpower(ll a ,ll b)
{
    if(b==0){return 1;}
    ll ans = a * (a, b / 2);
    return (b&1)?a * ans * ans : ans*ans;
}
ll GCD(ll a , ll b )
{
    if(b  == 0 ){return a;}
    return GCD(b ,a % b);
}
ll LCM(ll a , ll b)
{
    return a * (b / GCD(a,b));
}
int main() {
    fastread();
    mahmoud_eldoksh

}