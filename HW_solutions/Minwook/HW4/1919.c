 #include <stdio.h>

int main(){
        int ox =0; 
        int alphabet[26]={0};
        int alphabet2[26]={0};
        char a[1001]={0},b[1001]={0};
        int r=0;
        scanf("%s",a);//입력받기//
        scanf("%s",b);
        // while(a[r] != 0&&b[r]!=0){//입력받은 갯수를 넣기//
        //     alphabet[a[r]-'a'] +=1;
        //     alphabet2[b[r]-'a'] +=1;
        //     r++;
        //     }
        for(int v=0;v<1001;v++){
            alphabet[a[v]-'a'] +=1;
            alphabet2[b[v]-'a'] +=1;
            if(a[v]==0&&b[v]==0)break;
        }

        for(int k=0;k<26;k++){//갯수 넣은걸 비교//
            if(alphabet2[k]<alphabet[k]){
                ox= ox+alphabet[k]-alphabet2[k];
   }
            else if(alphabet2[k]>alphabet[k]){
                ox=ox+alphabet2[k]-alphabet[k];
            }}
    printf("%d",ox);
    // printf("%s %s",a,b);
return 0;
}