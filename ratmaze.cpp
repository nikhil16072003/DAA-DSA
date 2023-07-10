//C++ Program for Rat In A Maze Problem
#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,int n,int m,vector<vector<int>> &maze,vector<vector<int>> visited){
        if((x>=0 && x<n) && (y>=0 && y<m) && visited[x][y] == 0 && maze[x][y] == 1){
            return true;
        }
        else{
            return false;
        }
}
    
void solve(vector<vector<int>> &maze, int n,int m,int x,int y,string path, vector<string>& ans, 
           vector<vector<int>> visited){
        if(x==n-1 && y==m-1){
           ans.push_back(path);
           return;
        }
        visited[x][y]=1;
        int newx=x+1;
        int newy=y;
        if(isSafe(newx,newy,n,m,maze,visited)){
            path.push_back('D');
            solve(maze,n,m,newx,newy,path,ans,visited);
            path.pop_back();
        }
        newx=x-1;
        newy=y;
        if(isSafe(newx,newy,n,m,maze,visited)){
            path.push_back('U');
            solve(maze,n,m,newx,newy,path,ans,visited);
            path.pop_back();
        }
        newx=x;
        newy=y-1;
        if(isSafe(newx,newy,n,m,maze,visited)){
            path.push_back('L');
            solve(maze,n,m,newx,newy,path,ans,visited);
            path.pop_back();
        }
        newx=x;
        newy=y+1;
        if(isSafe(newx,newy,n,m,maze,visited)){
            path.push_back('R');
            solve(maze,n,m,newx,newy,path,ans,visited);
            path.pop_back();
        }
        visited[x][y] = 0;
}

vector<string> possiblePaths(vector<vector<int>> &maze) {
        int n = maze.size();
        int m = maze[0].size();
        vector<string> ans;  
        if(maze[0][0] == 0 || maze[n-1][m-1]==0){
            return ans;
        }
        int x =0;
        int y =0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        string path = "";
        solve(maze,n,m,x,y,path,ans,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }
int main() {
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> paths = possiblePaths(maze);
    for(int i=0;i<paths.size();i++){
        cout<<paths[i]<<" ";
    }
    
    return 0;
}
