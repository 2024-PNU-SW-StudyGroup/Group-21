#include <stdio.h>

int main() {
	int totalprice,num;
	scanf("%d",&totalprice);
	scanf("%d",&num);

	for(int i=0;i<num;i++){
		int price,num1;
		scanf("%d %d",&price,&num1);
		totalprice -= price*num1;
	}
	if (totalprice) printf("No");
	else printf("Yes");


}
