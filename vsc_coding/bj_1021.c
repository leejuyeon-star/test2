#include <stdio.h>
static int lis[150];
static int direction=0;  // front이면 1, 아니면 0

int find_remove(int);  
int check(int, int, int);   
void turn(int, int, int, int);


int main(void){

    int N,M,m,i,a;
    int sum = 0;
    int user[50];

    scanf("%d %d", &N, &M);
    getchar();

    for (i=0;i<M;++i){          //원소 위치 입력받기
        scanf("%d", &user[i]);
    }

    for (i=0;i<N;++i){          //원래 list 1~N 저장하기
        lis[i+49]=i+1;
    }

    for (i=0;i<M;++i){
        m = find_remove(user[i]);
        printf("%d\n", m);
        a = check(m, i, N);
        printf("%d\n", a);
        sum += a;
        printf("%d\n",sum);
        turn(a, m, N, i);
    }

    printf("%d\n", sum);
    return 0;
}


int find_remove(int using){
    int m=0;

    while (using!=lis[m]){
        m++;
    }

    lis[m]=0;

    return m;
}  

int check(int m, int i, int N){
    int a=0,front, back;

    while(lis[a]==0){
        ++a;

        if (a==149)
            return 0;
    }

    front = m - a;

    if (front==-1){
        front=0;
    }

    back = N-i-front;

    if (front < back){
        direction = 1;
        return front;
    }
    else{
        direction = 0;
        return back;
    }

}


void turn(int a, int m, int N, int i){
    int first, last, b; 
    first = m-a;
    last = first + N -i;

    if (direction==1){
        for(b=0;b<a;b++){
            lis[last+1+b]=lis[first+b];
            lis[first+b]=0;
        }
    }
    else{
        for(b=0;b<a;b++){
            lis[first-1-b]=lis[last-b];
            lis[last-b]=0;
        }
    }

    return ;
}
