class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    count++;
                    grid[i][j]='0';
                    vector<pair<int,int>> v;
                    v.push_back({i,j});
                    for(int k=0;k<v.size();k++){
                        int x=v[k].first;
                        int y=v[k].second;
                        if(x>0 && grid[x-1][y]=='1'){
                            grid[x-1][y]='0';
                            v.push_back({x-1,y});
                        }
                        if(x+1<m && grid[x+1][y]=='1'){
                            grid[x+1][y]='0';
                            v.push_back({x+1,y});
                        }
                        if(y>0 && grid[x][y-1]=='1'){
                            grid[x][y-1]='0';
                            v.push_back({x,y-1});
                        }
                        if(y+1<n && grid[x][y+1]=='1'){
                            grid[x][y+1]='0';
                            v.push_back({x,y+1});
                        }
                    }
                }
            }
        }
        return count;
    }
};
