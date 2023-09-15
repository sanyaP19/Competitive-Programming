#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        map <int,vector<int>> mp;
        int height(Node* root){
            if(root==NULL){
                return 0;
            }
            int LH=height(root->left);
            int RH=height(root->right);
            int H= 1+max(LH,RH);
            mp[H].push_back(root->val);
            return H;
        }
        vector<vector<int>> findleaves(Node* root){
            vector<vector<int>> ans;
            height(root);
            map<int,vector<int>>:: iterator itr;
            for(itr=mp.begin();itr!=mp.end();itr++){
                ans.push_back(mp.second);
            }
            return ans;

        }

};
