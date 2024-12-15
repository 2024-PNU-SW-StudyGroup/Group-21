#include <stdio.h>

int main(){

	int d1,d2,d3;
	int ans; //주사위수
	int type;//같은 것들의 갯수
	scanf("%d %d %d",&d1,&d2,&d3);
	if (d1==d2 && d2 == d3){
		ans=d1;
		type=1;
	}
	else if (d1!=d2 && d2!=d3 && d3 != d1){
		type=3;
	}
	else if (d1==d2||d2==d3){
		type = 2;
		ans = d2;
	}
	else if(d3==d1){
		type =2;
		ans = d3;
	}


	if (type == 1){
		printf("%d",10000+1000*ans);	
	}
	else if (type == 2){
	printf("%d",1000+ans*100);
	}
	else if (type == 3){
		int max = d1;
        if (d2 > max) max = d2;
        if (d3 > max) max = d3;
		printf("%d",100*max);}
	

	return 0;
}