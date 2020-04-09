#define N 11
#define FALSE 0
#define TRUE 1

typedef  int adjmat [N][N];

int path (adjmat x, int u, int v){

    int i;

    if(u >= N || v >= N)
        return FALSE;
    if(v==u)
        return TRUE;

    for ( i = 0; i < N; i++) {
        if (x[i][v] == 1) {
            if (i==u)
                return TRUE;
            return path (x, u, i);

        }

    }
    return FALSE;



}




