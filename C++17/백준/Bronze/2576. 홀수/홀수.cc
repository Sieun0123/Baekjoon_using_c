#include <stdio.h>

int main()
{
    int n,sum=0,min=101;
    for (int i=1; i<=7; i++){
        scanf("%d", &n);
        if (n%2==1){
            sum+=n;
            if (n<min){
                min=n;
            }
        }
    }
    if (sum == 0){
        printf("-1");
    }
    else {
        printf("%d\n", sum);
        printf("%d\n", min);
    }

    return 0;
}
