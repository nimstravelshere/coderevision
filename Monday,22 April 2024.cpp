class solution{
    bool dfs(int source, int destination,vector<vector<int>&adj,vector<int> visited){
        visited[source]=1;
        if(source==destination){
            return true;
        }
        for(auto a:adj[source]){
            if(visited[a]==0){
                if(dfs(a,destination,adj,visited)){
                    return true;
                }
            }
        }
        return false;
    }
    bool valid path(int n,int source,int destination ,vector<vector<int> edges){
        if(source==destination){
            true;
        }
        vector<vector<int>> adj;
        for(int i=0;i<edges.size();i++){
            adj[edge[i][0]].push_back(edge[i][1]);
            adj[edge[i][1]].push_back(edge[i][0]);
        }
        vector<int> visited(n,0);
        bool check=dfs(source,destination,adj,visited);
        if(check==true)
        return true;

        return false;
    }


};