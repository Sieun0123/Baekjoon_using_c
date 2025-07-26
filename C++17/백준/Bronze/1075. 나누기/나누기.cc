#include <stdio.h>

int main()
{
    int N, F;
    scanf("%d", &N);
    scanf("%d", &F);
    
    int b = (N/100)*100;
    for (int i=0; i<100; i++){
        if ((b+i)%F == 0){
            printf("%02d", i);
            break;
        }
    }
    

    return 0;
}