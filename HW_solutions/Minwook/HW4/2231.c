#include <stdio.h>
int ms(int a){
    int q=a,w=0;
    while(q){
        w +=q%10;
        q /=10;
    }

    return w+a;
}

int main(){
    int k,x,o;
    scanf("%d",&k);//타겟넘버//
    for(o=0; o<k;o++)
    {
        if(ms(o)==k)break;
    }
    if (o==k) o=0;
    printf("%d",o);
    return 0;
}