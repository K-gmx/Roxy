#include<bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};  //????
char g[100][100];
int n = 30, m = 60,ans;
void dfs(int x, int y){      //??????[x,y]
    if (g[x][y] == '0')   return ;
    g[x][y] = '0';         //?????1??0,??????
    ans++;//num++;           //??????????
    for (int i = 0; i < 4; i++ ) {           //????4???
        int nx = x + dx[i], ny = y + dy[i];   //???????
        if (nx<0 || ny<0 || nx>=n || ny>=m)   continue;    //??????????
        dfs(nx, ny);//g[x][y] = '1'; 
    }
    //g[x][y] = '1'; 
}
int main(){
    for (int i = 0; i < n; i++ )
        for (int j = 0; j < m; j++ )
            scanf("%c",&g[i][j]);
        //getchar();
    int num=0;
    for (int i = 0; i < n; i++ )
        for (int j = 0; j < m; j++ )
            if (g[i][j] == '1'){
                ans=0;
                dfs(i,j);
                num = max(num, ans);
            }
                
    cout << num;
    return 0;
}

