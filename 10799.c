#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[100001] = {0};
    char b;
    char bb;
    char buff[100001];
    int top = 0;
    int n = 0;


    scanf("%s",buff);
    for(int i = 0; i < strlen(buff); i++){
        b = buff[i];

        if(b == '('){
            a[top] = '(';
            top++;
            bb = '(';
        }
        if(b == ')'){
            if(bb == '('){
                top--;
                n += top;
                bb = ')';
            }
            else if(bb == ')'){
                top--;
                n++;
                bb = ')';
            }
        }

    }

    printf("%d", n);
    return 0;
}