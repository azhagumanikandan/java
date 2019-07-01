#include <stdio.h>

int main(void) {
	int n,i,r,s=0,c,d;
	scanf("%d %d",&c,&d);
	for(i=c+1;i<d;i++){
	n=i;
	s=0;
	while(n>0){
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(i==s)
	printf("%d ",i);
  }
	return 0;
}

