/*
 * Autor: Juan Manuel Murillo López A01712218 
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //Utilizamos una función recursiva de apoyo
        return recursiveMaxDepth(root, 0);
    }


    int recursiveMaxDepth(TreeNode* node, int count){
        //Si llegamos al final, regresamos la cuenta
        if(node == nullptr){
            return count;
        }

        //Calculamos la profundidad de las ramas izquierdas y derechas
        int lDep = recursiveMaxDepth(node->left, count + 1);
        int rDep = recursiveMaxDepth(node->right, count + 1);

        //Regresamos la mayor profundidad
        if(lDep > rDep){
            return lDep;
        }
        else{
            return rDep;
        }

    }
};
