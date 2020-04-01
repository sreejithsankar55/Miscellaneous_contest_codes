int flipBit(int n) 
{
   vector < int > v;
   while(n!=0) {
       v.push_back(n%2);
       n/=2;
   }
   v.push_back(0);
   deque < int > dq;
   int maxi=0,c=0;
   for(int i = 0 ; i < v.size() ; i++) {
       dq.push_back(v[i]);
       if(v[i]==0)
            c++;
       if(c==2) {
         while(dq.front()!=0) {
             dq.pop_front();
         }
         dq.pop_front();
         c--;
       }
    maxi = max((int)dq.size(),maxi);
   }
   return maxi;
}
//https://practice.geeksforgeeks.org/contest-problem/mandatory-flip-bit/1/
//https://practice.geeksforgeeks.org/contest-problem/mandatory-flip-bit/1/
