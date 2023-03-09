#include <stdio.h>
#include <stdlib.h>
#define MAX 50           

typedef struct _edge {         
    int u, v, w;
} Edge;

typedef struct _edge_list {       
    Edge data[MAX];
    int n;
} EdgeList;

void readData(char *filename, int G[max][max],int *pn){
    FILE *file = fopen(filename, "r");
    int i,j;
    if(file != NULL){
        fscanf(file, "%d",pn);
        for(i=0;i < *pn ;i++){
            for(j=i+1;j<*pn;j++){
                fscanf(file, "%d",&G[i][j]);
            }
        }
        fclose(file);
    }
}

void printSpaningTree(edgelist st){
    int i, cost = 0;
    for(i=0;i<st.n;i++){
        printf("\n%d - %d : %d",st.data[i].u,st.data[i].v,st.data[i].w);
        cost = cost + st.data[i].w;
    }
    printf("\nSpanning tree cost: %d",cost);
}

void bubblesort(edgelist *e){
    int i,j;
    edge temp;
    for(i=1;i<e->n;i++){
        for(j=e->n;j>=i;j--){
            if(e->data[j].w < e->data[j-1].w){
                temp = e->data[j];
                e->data[j] = e->data[j-1];
                e->data[j-1] = temp;
            }
        }
    }
}
int findCluster(int cluster[], int v) {
    return cluster[v];
}
void applyUnion(int cluster[], int n, int c1, int c2) {
    int i;
    for (i = 0; i < n; i++)
        if (cluster[i] == c2 )
            cluster[i] = c1 ;
}

void kruskal(int G[max][max],int n,edgelist *st){
    int cluster[max],i,j,c1,c2;
    edgelist e;
    e.n = 0;
    for(i=0;i<n,i++){
        for(j = i+1;j<n;j++){
            if(G[i][j] != 0){
                e.data[e.n].u = i;
                e.data[e.n].v = j;
                e.data[e.n].w = ;
                e.n = ;
            }
        }
    }
    bubblesort(e);
    for(i=0;i<n;i++){
        cluster[i] = i;
    }
    st->n = 0;
    for ( i = 0; i < e.n; i++){
        c1 = findCluster(cluster, e.data[i].u);
        c1 = findCluster(cluster, e.data[i].v);
    }
    if (c1 != c2)
    {
        st->data[st->n] = e.data[i];
        st->n ++;
        applyUnion(cluster,n,c1,c2);
    }   
}

int main(void) {
    EdgeList st;
    int G[MAX][MAX], n;

    readData("data.txt", G , n);

    kruskal( G , n , st );
    printSpaningTree(st);

    return 0;
}
