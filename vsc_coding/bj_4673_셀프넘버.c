#include <stdio.h>

int main (void)
{
    int list[10001]={0};
    int sum, one,two,three,four,N;
    int i;

    for (i=1;i<10002;i++)
    {
      four=i/1000;
      N=i-four*1000;
      three=N/100;
      N=N-three*100;
      two=N/10;
      one=N%10;
      sum=i+four+three+two+one;

      if (sum>10000){
        continue;
      }   

      list[sum]=1;
      

    }

    
    for (i=1;i<10001;i++)
    {
        if(list[i]!=1){
           printf("%d\n",i);
        }
    }
    
}