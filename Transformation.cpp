/*
You are given 2 integers X and Y and you need to transform the integer X to integer Y using only valid moves.

A valid move can be of the following types -

Reversing the current integer. If current integer has trailing zeroes then on rever-sing the integer leading zeroes gets eliminated.

Divide the current integer by 10.(Floor Division).
You have to print the minimum number of moves that need to be performed to transform integer X to integer Y using only valid moves and if it is not possible to transform integer X to integer Y then print “-1”.

Input Format

A single line that contains 2 integers representing the values of X and Y respectively..

Constraints

0 ≤ X, Y ≤ 10^9

Output Format

A single line that represents the answer.

Sample Input 0

100 1
Sample Output 0

1
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
ll reverse(ll n)
{
    ll rev=0;
    while(n!=0)
    {
        rev = (rev*10)+(n%10);
        n/=10;
    }
    return rev;
}
int main()
{
    ll x,y;
    set < ll >s;
    cin>>x>>y;
    queue < pair <ll, ll > > q;
    ll c;
    q.push({x,0});
    while(!q.empty()){
        x=q.front().ff;
        c=q.front().ss;
        q.pop();
        if(!s.count(x)) {
        q.push({reverse(x),c+1});
        q.push({x/10,c+1});
        if(x==y)
            return cout<<c,0;
        }
        s.insert(x);
    }
    cout<<"-1";
    return 0;
}

