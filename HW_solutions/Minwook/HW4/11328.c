#include <stdio.h>


int main(){
    // int alphabet[26]={0};
    // int alphabet2[26]={0};
    // char a[1001]={0},b[1001]={0};
    int rep,r=0;
    scanf("%d",&rep);
    for(int rep1 = 0;rep1<rep;rep1++){
        r=0;
        int ox =0; 
        int alphabet[26]={0};
        int alphabet2[26]={0};
        char a[1001]={0},b[1001]={0};

        scanf("%s %s",a,b);//입력받기//

        while(a[r] != 0){//입력받은 갯수를 넣기//
            alphabet[a[r]-'a'] +=1;
            alphabet2[b[r]-'a'] +=1;
            r++;
            }

        for(int k=0;k<26;k++){//갯수 넣은걸 비교//
            if(alphabet2[k]!=alphabet[k]){
                ox=1;
                }
            }

        if (ox==0){printf("Possible\n");}
        else {printf("Impossible\n");}
    }
    return 0;
}