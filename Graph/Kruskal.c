//
// Created by q_wr2 on 2026/8/19.
//

//最小生成树-克鲁斯卡尔(Kruskal)

#include <stdio.h>
#include <stdlib.h>

typedef char VertexType;
typedef int EdgeType;

#define MAXSIZE 100
#define MAXEDGE 200
#define MAX 0x7fffffff

typedef struct {
    VertexType vertex[MAXSIZE];
    EdgeType arc[MAXSIZE][MAXSIZE];
    int vertex_num;
    int edge_num;
}Mat_Graph;

typedef struct {
    int begin;
    int end;
    int weight;
}Edge;

void create_graph(Mat_Graph* G) {
    G->vertex_num = 9;
    G->edge_num = 15;

    G->vertex[0] = 'A';
    G->vertex[1] = 'B';
    G->vertex[2] = 'C';
    G->vertex[3] = 'D';
    G->vertex[4] = 'E';
    G->vertex[5] = 'F';
    G->vertex[6] = 'G';
    G->vertex[7] = 'H';
    G->vertex[8] = 'I';

    for (int i=0; i<G->vertex_num;i++) {
        for (int j=0;j<G->vertex_num;j++) {
            if (i==j) {
                G->arc[i][j] = 0;
            }
            else {
                G->arc[i][j] = MAXSIZE;
            }
        }
    }

    //A-B A-F
    G->arc[0][1] = 10;
    G->arc[0][5] = 11;

    //B-C B-G B-I
    G->arc[1][2] = 18;
    G->arc[1][6] = 16;
    G->arc[1][8] = 12;

    //C-D C-I
    G->arc[2][3] = 22;
    G->arc[2][8] = 8;

    //D-E D-G D-H D-I
    G->arc[3][4] = 20;
    G->arc[3][6] = 24;
    G->arc[3][7] = 16;
    G->arc[3][8] = 21;

    //E-F E-H
    G->arc[4][5] = 26;
    G->arc[4][7] = 7;

    //F-G
    G->arc[5][6] = 17;

    //G-H
    G->arc[6][7] = 19;

    for (int i=0; i<G->vertex_num;i++) {
        for (int j=0;j<G->vertex_num;j++) {
            G->arc[j][i] = G->arc[i][j];
        }
    }
}

void Kruskal(Mat_Graph G) {
    Edge edges[MAXEDGE];
    int k = 0;
    for (int i=0;i<G.vertex_num;i++) {
        for (int j=i+1;j<G.vertex_num;j++) {
            if (G.arc[i][j] < G.arc[i][j]) {
                edges[k].begin = i;
                edges[k].end = j;
                edges[k].weight = G.arc[i][j];
                k++;
            }
        }
    }
    sortEdges(edges,G.edge_num);

    int parent[MAXSIZE];
}
void sortEdge
int main(int argc, char const *argv[]) {
    Mat_Graph G;
    create_graph(&G);
    //调用克鲁斯卡尔算法
    Kruskal(G);
    return 0;
}