#include <stdio.h>

int adj[1001][1001];
int visited[1001];
int visited_bfs[1001];
int queue[1001];
int front = 0, rear = 0;
int N, M, V;

void dfs(int start) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 1; i <= N; i++) {
        if (adj[start][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    int current;
    visited_bfs[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        current = queue[front++];
        printf("%d ", current);

        for (int i = 1; i <= N; i++) {
            if (adj[current][i] == 1 && visited_bfs[i] == 0) {
                visited_bfs[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main(void) {
    scanf("%d %d %d", &N, &M, &V);

    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        adj[a][b] = 1;
        adj[b][a] = 1;
    }

    dfs(V);
    printf("\n");
    bfs(V);

    return 0;
}
