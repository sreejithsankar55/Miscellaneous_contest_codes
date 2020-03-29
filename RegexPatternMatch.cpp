#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

int main() {
	
	ll n;
	cin>>n;
	string s,t;
	vector < string > v;
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>s;
		v.pb(s);
	}
	cin>>t;
	for(ll i = 0 ; i < n ; i++)
	{
		int f=0;
		deque < char > dq;
		for(ll j = 0 ; j < (ll)v[i].size() ; j++) {
			dq.push_back(v[i][j]);
		}
		int k=0;
		for(ll j = 0 ; j < (ll)v[i].size() ; j++) {
			if(t[k]==dq.front()) {
				dq.pop_front();
				k++;
				if(k==(ll)t.size())
					break;
			} 
			else {
				if(isupper(dq.front())){
					f=1;
					break;
				}
				else
					dq.pop_front();
			}
		}
		while(!dq.empty()){
			//cout<<dq.front();
			if(isupper(dq.front())) {
				f=1;
				break;
			}
			dq.pop_front();
		}
		if(f==1 || k!=(ll)t.size())
			cout<<"false";
		else
			cout<<"true";
		cout<<endl;
	}
	return 0;
}
//https://www.hackerrank.com/contests/launch-assessment-mock-2-batch-2/challenges/patterns-matching
/*
You are given a list of word and a pattern. For each word you have to answer "true" if pattern match occurs and "false" otherwise.

Pattern match occurs when pattern could be turned into word by adding zero or more lowercase letters in any positions.

print "false" otherwise

Input Format

n # number of words

word1

word2

word3

...

wordn # n words

pattern

Constraints

1 <= words.length <= 200

1 <= words[i].length <= 500

1 <= pattern.length <= 125

All words/patterns contain only lower/upper case alphabets

Output Format

for every word print true/false in newline

Sample Input 0

5
PotBriyani
PotBriyaniTasting
PokerBet
PlayBuffer
Pitbull
PB
Sample Output 0

true
false
true
true
false
Explanation 0

"PotBriyani" can be generated like this "P" + "ot" + "B" + "riyani".

"PokerBet" can be generated like this "P" + "oker" + "B" + "et".

"PlayBuffer" can be generated like this "P" + "lay" + "B" + "uffer".

Sample Input 1

5
PotBriyani
PotBriyaniTasting
PokerBet
PlayBuffer
PitBull
PoBr
Sample Output 1

true
false
false
false
false
Explanation 1

"PotBriyani" can be generated like this "Po" + "t" + "Br" + "iyani".









*/
