#include <stdio.h>

using namespace std;

int a[100001]={0};

int f(int y){
    if(y == a[y]) return y;
    else{
        a[y] = f(a[y]);
        return a[y];
    }
}

void u(int x, int y){
    int p, q;
    p = f(x);
    q = f(y);
    a[p] = q;
}

int main()
{
    int G, P;
    int g[100001]={0};
    int s = 0;

    scanf("%d", &G);
    scanf("%d", &P);

    for(int i = 0; i <= G; i++){
        a[i] = i;
    }

    for(int i = 0; i < P; i++){
        scanf("%d", &g[i]);
        if(f(g[i]) < 1){
            break;
        }
        u(f(g[i]), f(g[i])-1);
        s++;
    }

    printf("%d", s);


    return 0;
}
