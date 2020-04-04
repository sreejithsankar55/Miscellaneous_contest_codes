#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
string maxi(string fir, string sec) {
    for(ll i=0 ; i < (ll)min(fir.size(),sec.size()) ; i++) {
        if(fir[i] > sec[i])
            return fir;
        else if(fir[i] < sec[i])
            return sec;
    }
    return fir;
}
int main()
{
    ll t=1;
    //cin>>t;
    while(t--) {
    string s,ss;
    cin>>s;
    ll n;
    cin>>n;
    s = '&'+s;
    ll si = (ll)s.size();
    vector < vector < string > > dp(n+1,vector < string > (si,"0"));
    for(ll i = 1 ; i <= n ; i++) {
        for(ll j = i ; j < si ; j++) {
            if(i==1) {
                ss = s[j];
                dp[i][j]=maxi(ss,dp[i][j-1]);
            }
            else
            {
                dp[i][j] = maxi(dp[i-1][j-1]+s[j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n][si-1]<<endl;
    }
    return 0;
}
/*Alice is given two integers N and K. Now Alice wants to select exactly K digits from N and wants to maximize the number that can be formed by selected digits with the condition that order of digits in the number formed must be same as N. ie. if a digit X comes before a digit Y in N then in the integer formed from selected digits X must come before Y.

Note : N and answer may contains leading zeroes.

Input Format

First line contains two space integers representing the value of N and K respectively.

Constraints

0 ≤ N ≤ 10^100 1 ≤ K ≤ length(N)

Output Format

A single line representing the K digits which are selected.

Sample Input 0

001 2
Sample Output 0

01
Sample Input 1

71829873395 3
Sample Output 1

995
*/
