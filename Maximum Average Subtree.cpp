/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
      public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
pair<int,int> findmax(TreeNode<int> *root, double &ans){
    if(!root) {
      return {0,0};
    }
    auto left=findmax(root->left,ans);
    auto right=findmax(root->right,ans);
    int sum=left.first+right.first+root->data;
    int nodes=left.second+right.second+1;
    ans=max(ans,(double)sum/nodes);
    return {sum,nodes};
}
double maxSubtreeAverage(TreeNode<int> *root) {
    double ans=-1e9;
    findmax(root,ans);
    return ans;
}
