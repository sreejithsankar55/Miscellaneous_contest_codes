int findCousinSum(Node* root, int key) 
{ 
    if (root == NULL) 
        return -1; 
    queue < Node* > q;
    q.push(root);
    Node* temp;
    int si,sum;
    bool found = false;
    while(!q.empty()) {
        si = q.size();
        sum = -1;
        while(si--) {
        
           /*if (found == true) Uncomment and remove the special case to handle -1 in sum 
                return currSum; 
           */ 
            temp = q.front();
            q.pop();
            if((temp->left and temp->left->data==key) || (temp->right and temp->right->data==key)) {
                found = true;
            }
            else {
                if(temp->left) {
                    q.push(temp->left);  
                    sum+=(temp->left->data);
                }
                if(temp->right) {
                    q.push(temp->right);
                    sum+=(temp->right->data);
                }
            }
        }
        if(found) {
            if(sum!=-1)
                sum++;
            return sum;
        }
    }
    return -1;
} 
//https://practice.geeksforgeeks.org/contest-problem/cousins-in-tree/1/
