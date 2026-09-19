class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        vector<pair<int,int>> dirs={{1,0},{-1,0},{0,-1},{0,1}};
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        int og=image[sr][sc];
        image[sr][sc]=color;
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            for(auto [dx,dy]:dirs){
                int i=x+dx;
                int j=y+dy;
                if(i>=0&&i<m&&j>=0&&j<n&&!vis[i][j]&&image[i][j]==og){
                    vis[i][j]=1;
                    image[i][j]=color;
                    q.push({i,j});
                }
            }
        }
        return image;
    }
};