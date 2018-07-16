#include "solution.h"
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int dfs(int i , int j ,const vector<vector<int>>& field, vector<vector<bool>>& visit ){
    int height = static_cast<int>(field.size());
    int width = static_cast<int>(field[0].size());
    
    visit[i][j] = true;
    int ans = 1;
    if(  i+1 < height and j+1 < width and field[i+1][j+1] == 0 and !visit[i+1][j+1]){
        ans += dfs(i+1,j+1,field,visit);
    }
    if(  i+1 < height and field[i+1][j] == 0 and !visit[i+1][j]){
        ans += dfs(i+1,j,field,visit);
    }
    if(  i + 1 < height and j - 1 >= 0 and field[i+1][j-1] == 0 and !visit[i+1][j-1]){
        ans += dfs(i+1,j-1,field,visit);
    }
    if( j + 1 < width and field[i][j+1] == 0 and  !visit[i][j+1] ){
        ans += dfs(i,j+1,field,visit);
    }
    if( j -1 >= 0 and field[i][j-1] == 0  and  !visit[i][j-1] ){
        ans += dfs(i,j-1,field,visit);
    }
    if( i - 1 >= 0 and j + 1 < width and field[i-1][j+1] == 0 and  !visit[i-1][j+1]){
        ans += dfs(i-1,j+1,field,visit);
    }
    if( i - 1 >= 0  and field[i-1][j] == 0 and  !visit[i-1][j]){
        ans += dfs(i-1,j,field,visit);
    }
    if( i - 1 >= 0 and j - 1 >= 0 and field[i-1][j-1] == 0 and !visit[i-1][j-1]){
        ans += dfs(i-1,j-1,field,visit);
    }
    return ans;
}

void pondsizes(std::vector<std::vector<int>>& field, std::vector<int>& ponds){
    int height = static_cast<int>(field.size());
    int width = static_cast<int>(field[0].size());
    vector<vector<bool>> visit(height); /* 1 if visited 0 if not visited*/
    for(auto &i : visit){
        i.resize(width,false);
    }
    for(int i = 0 ; i < height ; i++){
        for(int j = 0 ; j < width ; j++){
            if(!visit[i][j]){
                if(field[i][j] == 0){
                    ponds.push_back(dfs(i,j,field,visit));
                }
                else{
                    visit[i][j] = true;
                }
            }
        }
    }
    for (auto i : ponds){
        cout << i << " ";
    }
    cout << endl;
}