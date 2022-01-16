#include <stdio.h>

int main(void){
    int T, i=0, p, count=0;
    char s[500][51]={'\0'};

    scanf("%d", &T);
    getchar();

    

    while (i!=T){
        scanf("%s", s[i]);
        getchar();
        i++;
    }

    for (i=0;i<T;i++){

        for (p=0;p<51;p++){

            if (s[i][p]=='('){
                ++count;
            }

            else if(s[i][p]==')'){
                --count;
            }

            if (count<0){

                printf("NO\n");

                break;

            }

            if (p==50){

                if (count!=0){
                    printf("NO\n");
                }
                else {
                    printf("YES\n");
                }


            }

        }

        count=0;

    } 
    
    return 0;
}