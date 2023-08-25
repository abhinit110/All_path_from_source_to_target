void dfs(vector<vector<int>>& graph,vector<int>&vis,int s,int des,vector<vector<int>>&ans,vector<int>&res)
    {
        if(vis[s]==0)
        {
        res.push_back(s);
        if(s==des)
        {
            ans.push_back(res);
            return;
        }
        vis[s]=1;
        
        for(auto it:graph[s])
        {
            if(vis[it]==0)
            {
                {
                    dfs(graph,vis,it,des,ans,res);
                    res.pop_back();
                    vis[it]=0;
                }
            }
        }
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>vis(graph.size(),0);
        int n=graph.size();
        vector<int>res;
        vector<vector<int>>ans;
        dfs(graph,vis,0,n-1,ans,res);
        //cout<<c<<endl;
        return ans;
    }
