#include <stdio.h>
#include <string.h>

int main(void){
    int N, check=0, i, a, sum=0;
    int count[90];

    scanf("%d", &N);

    char chi[N][90];

    for (i=0;i<N;i++){
        getchar();
        scanf("%s", chi[i]);
        count[i] = strlen(chi[i]);
    }

    


    for (a=0;a<N;a++){
        
        check=0;
        sum=0;

        for (i=0;i<count[a];i++){

                if(chi[a][i]=='O'){

                    check++;

                    sum+=check;

                }
                else{

                    check=0;

                }

        }

        printf("%d\n", sum);
    
    }

}