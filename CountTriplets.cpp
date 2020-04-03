int countTriplets(struct Node* head, int x) 
{ 
    int c=0,da;
    vector < int > v;
    unordered_map < int, int > twos;
    while(head!=NULL) {
        da = head->data;
        if(twos.count(x-da)) {
            c+=twos[x-da];
        }
        for(int i = 0 ; i < (int)v.size() ; i++) {
            twos[v[i]+da]++;
        }
        v.push_back(da);

        head=head->next;
    }
    return c;
} 
//https://practice.geeksforgeeks.org/contest-problem/count-triplets/1/
