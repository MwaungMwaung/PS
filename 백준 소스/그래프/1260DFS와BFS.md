```cpp
#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;

int n, m;
bool graph[1001][1001];

bool visited1[1001];
bool visited2[1001];

void dfs(int start) {
    visited1[start]=true;
    printf("%d ", start);
    for(int dest=1;dest<=n;dest++) {
        if(graph[start][dest] && !visited1[dest]) {
            dfs(dest);
        }
    }
}

void bfs(int start) {
    queue<int> q;

    visited2[start]=true;
    q.push(start);
    while(!q.empty()) {
        start = q.front();
        q.pop();
        printf("%d ", start);

        for(int dest=1;dest<=n;dest++) {
            if(graph[start][dest] && !visited2[dest]) {
                visited2[dest]=true;
                q.push(dest);
            }
        }
    }
}

int main()
{
    int start;
    int a, b;
    scanf("%d%d%d", &n, &m, &start);
    for(int i=0;i<m;i++) {
        scanf("%d%d", &a, &b);
        graph[a][b]=true;
        graph[b][a]=true;
    }
    dfs(start);
    printf("\n");
    bfs(start);

    return 0;
}
```
