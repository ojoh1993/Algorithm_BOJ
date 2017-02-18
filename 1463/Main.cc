#include <cstdlib>
#include <cstdio>

int dparray_for_problem[1000000];
int just_iterate(int);
int main(){

    int a;

    scanf("%d",&a);
    dparray_for_problem[1]=1;

    printf("%d",just_iterate(a)-1);

    return 0;

}
int just_iterate(int a){
    int r=1;
    for (int i=2;i<=a;i++){
        r=10000;
        if(i%2==0 && r>dparray_for_problem[i/2])
            r=dparray_for_problem[i/2]+1;
        if(i%3==0 && r>dparray_for_problem[i/3])
            r=dparray_for_problem[i/3]+1;
        if(r>dparray_for_problem[i-1])
            r=dparray_for_problem[i-1]+1;

        dparray_for_problem[i]=r;

    }
    return r;
}
