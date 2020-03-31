//https://practice.geeksforgeeks.org/contest-problem/shortest-distance-to-every-character/1/
vector <int> shortestDistance(string S, char X) 
{
    vector < int > pre((int)S.size(),INT_MAX);
    int c=0,f=0;
    for(int i = 0 ; i < (int)S.size() ; i++) {
        if(S[i]==X) {
            c=0;
            f=1;
            pre[i]=0;
        }
        else {
            if(f==1) {
            c++;
            pre[i]=c;
            }
        }
        
    }
    c=f=0;
    for(int i = (int)S.size()-1 ; i>=0 ; i--) {
        if(S[i]==X) {
            c=0;
            f=1;
        }
        else {
            if(f==1){
                c++;
                pre[i]=min(c,pre[i]);
            }
        }
    }
    return pre;
}

/*

Given a string S of lowercase characters and a character X. 
Find the shortest distance from the character X to every other character in the given string S.


Input:
2
geeksforgeeks
e
helloworld
o

Output:
1 0 0 1 2 3 3 2 1 0 0 1 2
4 3 2 1 0 1 0 1 2 3


*/
