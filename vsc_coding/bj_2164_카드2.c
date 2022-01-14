#include <stdio.h>

int main (void){
    int N, i, count=0, set=0;
    scanf("%d", &N);

    if (N==1){
        printf("1");
        return 0;
    }

    int list[N+1];

    for(i=1; i<=N; i++){
        list[i]=i;
    }


    while (count!=1){
        set=0;
        count=0;
        for (i=1;i<=N;i++){
            if (list[i] != -1){
                set++;
                count++;
                if (set % 2 != 0){
                     list[i] = -1;
                     count--;
                }
            }
        }
    }

    i=1;
    while(list[i] == -1){
        i++;
    }

    printf("%d",list[i]);
    
    return 0;
}