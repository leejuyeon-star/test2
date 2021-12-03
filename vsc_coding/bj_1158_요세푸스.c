#include <stdio.h>

int main(void){
    int N,K,i,check=0, count=0, list[5000];

    scanf("%d %d", &N, &K);

    for (i=0;i<N;i++){
        list[i]=(i+1);
    }
    for (i=0;i<N;i++){

        while (check < (K-1)){

            if ((count == (5001)) || (list[count] == 0)){
                count = 0;
                continue;
            }

            if (list[count] == -1){
                count += 1;
                continue;
            }

            count += 1;

            check += 1;

        }

        while ((count == 5001) || (list[count] == 0) || (list[count] == -1)){
            if ((count == 5001) || (list[count] == 0 )){
                count = 0;
            }

            if (list[count] == -1){
                count += 1;
            }

        }
        if (i==0){
            printf("<");
        }

        printf("%d", list[count]);

        if (i!=(N-1)){
            printf(", ");
        }

        if (i==(N-1)){
            printf(">");
        }

        list[count] = -1;

        check = 0;
    }
    
return 0;

}