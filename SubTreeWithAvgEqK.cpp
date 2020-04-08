pair < float, int > recurse(Node* root, bool &su, int k) {
  
    if(!root)
        return {0.0,0};
    if(root->left==NULL && root->right==NULL) {
        if((float)root->data == (float)k) {
            su = true;
        }
        return {(float)root->data,1};
    }
    pair < float, int > le = recurse(root->left,su,k);
    pair < float, int > ri = recurse(root->right,su,k);
    float count = (le.second+ri.second+1.0);
    float avg = (le.first+ri.first+root->data)/count;
    if(avg == (float)k) {
        su = true;
    }
    return {(le.first+ri.first+root->data),(int)count}; 
}
bool Kaverage_subTree(Node* n, int k)
{
    bool am = false;
    recurse(n,am,k);
    return am;
}
//https://practice.geeksforgeeks.org/contest-problem/find-sub-tree-with-average-value-of-nodes-equal-to-k/1/
//See editorial also
