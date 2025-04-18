#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode*left;
	TreeNode*right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution{
	public:
	vector<double> average(TreeNode* root){
		queue<TreeNode*> que;
		if(root!=NULL) que.push(root);
		vector<double> result;
		while(!que.empty()){
			int size=que.size();
			double sum=0;
			for(int i=0;i<size;i++){
				TreeNode*node=que.front();
				que.pop();
				sum+=node->val;
				if(node->left) que.push(node->left);
				if(node->right) que.push(node->right);
			}
			result.push_back(sum/size);
		}
		return result;
	}
	
};
TreeNode* buildTree(){
		TreeNode* root=new TreeNode(3);
		TreeNode*node9=new TreeNode(9);
		TreeNode* node20=new TreeNode(20);TreeNode* node15=new TreeNode(15);TreeNode* node7=new TreeNode(7
		);
		root->left=node9;
		root->right=node20;
		node20->left=node15;
		node20->right=node7;
		return root;

	}
int main()
{
Solution solution;
TreeNode* root=buildTree();
vector<double> average=solution.average(root);
for(double avg:average){
	cout<<avg<<" ";
}
	cout<<endl;
}