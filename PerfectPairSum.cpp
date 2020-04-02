int sum(int n) {
    int r,su=0;
    while(n!=0) {
        r = n%10;
        n/=10;
        su+=r;
    }
    return su;
}
int PerfectMatch(vector<int> arr, int n) 
{
   map < int , vector < int > > ma;
   int maxi=-1;
   sort(arr.begin(),arr.end());
   for(int i = 0 ; i < n ; i++) {
       int su = sum(arr[i]);
       ma[su].push_back(arr[i]);
       if(ma[su].size()>=2) {
           int si = (int)ma[su].size();
           maxi = max(ma[su][si-1]+ma[su][si-2],maxi);
       }
   }
return maxi;
}
//https://practice.geeksforgeeks.org/contest-problem/perfect-pair-sum/1/
