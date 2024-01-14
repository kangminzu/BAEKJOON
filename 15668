#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool a(int x, int y){
    int a[10] = {0};
    while(x){
        a[x%10]++;
        x /= 10;
    }
    while(y){
        a[y%10]++;
        y /= 10;
    }
    for(int i = 0; i < 10; i++){
        if(a[i] > 1) return 0;
    }
    return 1;
}
int main()
{

    int N;
    int A, B;

    scanf("%d", &N);

    for(int i = 1; i <= 87654; i++){
        B = i;
        A = N - B;
        if(B == N) break;

        if(a(A,B)== 1){
            printf("%d + %d", A, B);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
