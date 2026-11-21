#include <stdio.h>

#define MAX 20

int graph[MAX][MAX], transpose[MAX][MAX];
int visited[MAX];
int n;

void DFS(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for (int i = 0; i < n; i++) {
        if (transpose[v][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

void fillOrder(int v, int stack[], int *top) {
    visited[v] = 1;
    for (int i = 0; i < n; i++) {
        if (graph[v][i] == 1 && !visited[i]) {
            fillOrder(i, stack, top);
        }
    }
    stack[++(*top)] = v;
}

void findTranspose() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[i][j] = graph[j][i];
        }
    }
}

int main() {
    int stack[MAX], top = -1;

    printf("Enter number of vertices: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX) {
        return 1;
    }

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            fillOrder(i, stack, &top);
        }
    }

    findTranspose();

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("\nStrongly connected components:\n");
    while (top >= 0) {
        int v = stack[top--];
        if (!visited[v]) {
            DFS(v);
            printf("\n");
        }
    }

    return 0;
}