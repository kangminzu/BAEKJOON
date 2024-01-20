#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int f[1001] = {0, 1, 2};

    scanf("%d", &n);

    for(int i = 3; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
        f[i] %= 10007;
    }

    printf("%d",f[n]);
    return 0;
}
