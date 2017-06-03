#include<stdio.h>
struct stu{
	char name[20];
	int result, banji, lunwen;
	char xuegan, xibu; 	              
};                                    
int main(){
	struct stu a[100];                
	int n, i, k, max, sum, total;     
	scanf("%d", &n);
	max=k=total=0;                 
	for(i=0;i<=(n-1);i++){
		sum=0;                       
		scanf("%s %d %d %c %c %d", &a[i].name,&a[i].result,&a[i].banji,&a[i].xuegan,&a[i].xibu,&a[i].lunwen);          
		if(a[i].result>80&&a[i].lunwen>=1) sum+=8000;
		if(a[i].result>85&&a[i].banji>80)  sum+=4000;
		if(a[i].result>90) sum+=2000;
		if(a[i].result>85&&a[i].xibu=='Y') sum+=1000;
		if(a[i].banji>80&&a[i].xuegan=='Y') sum+=850; 
		if(max<sum) max=sum, k=i;
		total+=sum;
	}
	if(n>1)printf("%s\n%d\n", a[k].name,max);
	printf("%d\n", total);
	return 0;
}
