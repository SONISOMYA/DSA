/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parentMap;

    void markParents(TreeNode* root, TreeNode* parent) {
        if (!root) return;
        parentMap[root] = parent;
        markParents(root->left, root);
        markParents(root->right, root);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        markParents(root, nullptr);  

        unordered_set<TreeNode*> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited.insert(target);

        int currDist = 0;

        while (!q.empty()) {
            int size = q.size();
            if (currDist == k) break;
            currDist++;
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                
                for (TreeNode* neighbor : {node->left, node->right, parentMap[node]}) {
                    if (neighbor && !visited.count(neighbor)) {
                        q.push(neighbor);
                        visited.insert(neighbor);
                    }
                }
            }
        }

        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front()->val);
            q.pop();
        }
        return result;
    }
};