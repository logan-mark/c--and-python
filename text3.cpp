class Solu{
    public:
    vector<vector<int>> leve(Noder*root){
        queue<Node*>que;
        if(root!=NULL) que.push(root);
        vector<vector<int>> result;
        whlie(!que.empty()){
            int size=que.size();
            vector<int>vec;
            for(int i=0;i<siez;i++){
                Node*node=que.front();
                que.pop();
                vec.push_back(node->val);
                for(int i=0;i<node->children.size();i++){
                    if(node->children[i])que.push(node->children[i]);
                }
            }
            result.pushu_back(vec);

        }
        return result;
    }
}