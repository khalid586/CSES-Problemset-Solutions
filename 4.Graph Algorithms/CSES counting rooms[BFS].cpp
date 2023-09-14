#include <bits/stdc++.h>
using namespace std;

//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b) for(int i = a; i < b ; i++)

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

string graph[1007]; int n,m;

bool valid(int x, int y )
{
    return  ((x < 0 or x >= n or y < 0 or y >= m )? 0:1);
}

void bfs(int a,int b)
{
    queue<pair<int,int>> q;
    q.push({a,b});
    
    while(!q.empty()){
        int x = q.front().first , y = q.front().second;
        q.pop();

        rep(i,0,4){ 
            int X = x+dx[i], Y = y+dy[i];
            if(valid(X,Y)) {
                if(graph[X][Y] == '.'){ 
                    q.push({X,Y}); 
                    graph[X][Y] = '#'; 
                }      
            }
        }
    }

    
}

void solve()
{
    int cnt=0;
    cin >> n >> m;

    rep(i,0,n) cin >> graph[i];

    rep(i,0,n){
            rep(j,0,m) 
                if(graph[i][j]=='.') {
                    ++cnt; bfs(i,j);
                }
    }    
    
    cout << cnt << '\n';
}

int main()
{
     solve();
     return 0;
}