//
// Created by q_wr2 on 2026/8/17.
//

#include <stdio.h>

//Vertex 顶点
//Edge   边

typedef char VertexType;
typedef int EdgeType;

#define MAXSIZE 100

typedef struct {
    //一个用来保存顶点的一维数组
    VertexType vertex[MAXSIZE];
    //一个用来保存边的二维数组
    EdgeType arc[MAXSIZE][MAXSIZE];
    //顶点的数量
    int vertex_num;
    //边的数量
    int edge_num;
}Mat_Graph;

int visited[MAXSIZE];

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

    for (int i = 0; i < G->vertex_num; i++) {
        for (int j = 0; j < G->vertex_num; j++) {
            G->arc[i][j] = 0;
        }
    }

    //A-B A-F
    G->arc[0][1] = 1;
    G->arc[0][5] = 1;

    //B-C B-G B-I
    G->arc[1][2] = 1;
    G->arc[1][6] = 1;
    G->arc[1][8] = 1;

    //C-D C-I
    G->arc[2][3] = 1;
    G->arc[2][8] = 1;

    //D-E D-G D-H D-I
    G->arc[3][4] = 1;
    G->arc[3][6] = 1;
    G->arc[3][7] = 1;
    G->arc[3][8] = 1;

    //E-F E-H
    G->arc[4][5] = 1;
    G->arc[4][7] = 1;

    //F-G
    G->arc[5][6] = 1;

    //G-H
    G->arc[6][7] = 1;

    for (int i = 0;i<G->vertex_num;i++) {
        for (int j = 0;j<G->vertex_num;j++) {
            G->arc[j][i] = G->arc[i][j];
        }
    }
}













int main(int argc, char const *argv[]) {
    //申明结构体变量
    Mat_Graph G;

    create_graph(&G);

    for
}




















