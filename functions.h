//
// Created by mahmod on 11/27/2023.
//

#ifndef CLION2_FUNCTIONS_H
#define CLION2_FUNCTIONS_H
#include<bits/stdc++.h>
using namespace  std;
#define ll long long
#define  Endl endl;
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
    for (int i = 1; i <v.size() ; ++i) {
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
int * c;
void merge (int * beginA , int *beginB, int*  endB)
{
    int sizA = beginB - beginA ;
    int sizB = endB - beginB  ;
    int indexA , indexB , indexC ;
    while(indexA < sizA && indexB< sizB) {
        if (beginA[indexA] < beginB[indexB]) { c[indexC++] = beginA[indexA++]; }
        else { c[indexC++] = beginB[indexB++]; }
    }
    while(indexA  < sizA){c[indexC++] = beginA[indexA++];}
    while(indexB < sizB ){c[indexC++] = beginB[indexB++];}
    copy(c , c+indexC , beginA);
}
void mergesort(int * p1 , int  * p2 )
{
    int size = p2 - p1;
    if(size == 1 ){return;}
    mergesort(p1 , p1 + size / 2);
    mergesort(p1 + size/2 , p2);
    merge(p1 , p1+size/2 ,p2);
}
bool IsPal(string x)
{
    string temp = x;
    reverse(x.begin(), x.end());
    if(x== temp){return true ; }
    else {return false ;}
}
unsigned  ll segma(unsigned  ll num )
{

    unsigned  ll res = ( num * ( num + 1 ) ) / 2;
    return res;
}
char get(int i) {
    return 'a' + i - 1;
}
void solution() {
    string s;
    int k ,size;
    cin >> size >> k >> s;
    for (int i = 0; i <= s.length() - k; i++) {
        cout<<s[i]<<Endl;
    }
}
long long sumOfSubsets(const std::vector<int>& arr) {
    long long totalSum = 0;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        totalSum += arr[i] * (1LL << (n - 1)); // Multiply the element by 2^(n-1)
    }

    return totalSum;
}
vector<int > sumfSubsets(const std::vector<int>& arr,vector<int>&count) {
    vector<int > subsetSums;
    int n = arr.size();

    for (int i = 0; i < (1 << n); ++i) {
        int  subsetSum = 0;int coun = 0;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subsetSum += arr[j];
                coun++;
            }
        }
        subsetSums.push_back(subsetSum);
        count.push_back(coun);
    }

    return subsetSums;
}


#endif //CLION2_FUNCTIONS_H
