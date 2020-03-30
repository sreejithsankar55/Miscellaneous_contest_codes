// ranges[i].first is the start of ith range
// ranges[i].second is the end of ith range

int max_non_overlapping( vector< pair<int,int> >& ranges )
{
    sort(ranges.begin(),ranges.end());
    int maxi = 1;
    int val = ranges[(int)ranges.size()-1].first;
    for(int i = (int)ranges.size()-2 ; i>=0 ; i--) {
        if(val>=ranges[i].second){
            val = ranges[i].first;
            maxi++;
        }
    }
    return maxi;
}
//https://practice.geeksforgeeks.org/contest-problem/maximum-selections/1/
/*You are given n ranges of numbers. Your task is to select the maximum number of ranges such that no 2 of them overlap. Print the maximum number of selections possible.

Note : The ending of a range being the same as start of another isn't considered as an overlap.

Input:
First line of input consists on number of test cases t. Then t test cases follow. In each test case, first line holds the value n. Second line of test case hold the 2*n pairs, i.e. start and end of the n ranges.

Output:
Output will be an integer representing the maximum number of selections possible.

Your task:
Your task is to complete the function max_non_overlapping() and return the value to be printed. Input will be taken by driver code and passed to the function.

Constraints:
T = 100
1 <= N <= 1000
0 <= range start/end <= 1000

Example:
Input:
2
4
1 5 2 3 1 8 3 5
5
7 9 2 8 1 3 10 11 10 16
Output:
2
3
Explanation:
Testcase 1:
We can pick the ranges (2,3) and (3,5) without any overlap
Testcase 2:
We can pick the ranges (1,3), (7,9) and (10,11) without any overlap8
*/
