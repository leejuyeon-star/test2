#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void check(int [], int);
void sort(int [], int);

int main (void){
    int i=0;
    int lis[100000];


    lis[i]=getch()-48;
    while (lis[i] != -35){
        i++;
        lis[i]=getch()-48;
    }

    lis[i]=0;
    //여기까지 받기
    
    check(lis, i);
    sort(lis, i);

    return 0;
    
}

void check(int lis[], int i){
    int a,sum=0, ch=0;
    for (a=0;a<i;a++){
        sum += lis[a];
        if (lis[a]==0){
            ch=1;
        }
    }

    if ((sum % 3 != 0)||(ch!=1)){
        printf("-1");
        exit(0);
    }
    return;
}

void sort(int lis[], int i){
    int a=0,b=0,p,site;
    int result[100000];
    for (a=0;a<i;a++){
        p=lis[0];
        site=0;
        for(b=0;b<(i-1);b++){
            
            if (lis[b+1]== -1){
                continue;
            }
            
            if (p <= lis[b+1]){
                p=lis[b+1];
                site=b+1;
            }
        }
        printf("%d",p);
        lis[site] = -1;
    }

    return;
}