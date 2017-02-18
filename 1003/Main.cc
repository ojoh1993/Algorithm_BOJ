#include <stdio.h>
#define NULL -1
int a[41][2];
int c(int b,int s){
    if(b<0) return 0;
    if(s==0){
        if(a[b][0]==NULL) a[b][0]=c(b-1,0)+c(b-2,0);
        return a[b][0];
    }else{
        if(a[b][1]==NULL) a[b][1]=c(b-1,1)+c(b-2,1);
        return a[b][1];
    }
}
int main()
{
   int T,N;
   scanf("%d",&T);
    for (int i=0;i<82;i++){
        a[i/2][i%2]=NULL;
    }
    a[0][0]=1;
    a[0][1]=0;
    a[1][0]=0;
    a[1][1]=1;
    for (int i=0;i<T;i++){
        scanf("%d",&N);
    printf("%d %d\n",c(N,0),c(N,1));
    }
}



