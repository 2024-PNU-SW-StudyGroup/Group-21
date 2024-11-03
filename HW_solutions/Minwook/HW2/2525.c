#include <stdio.h>

int main() {
    int time, minute,final,add;
    scanf("%d %d",&time,&minute);
    scanf("%d",&final);
    add = final +minute;
    int k,k1,k2;
    k = add/60;
    k1 = add%60;
    k2 = time + k;
    

    
    if (k2>=24){
        printf("%d %d",k2-24,k1);
        return 0;
    }



    if (add <60){
        printf("%d %d", time,add);
    }

    else {
        printf("%d %d", time+k,k1);

    }

    return 0;
}