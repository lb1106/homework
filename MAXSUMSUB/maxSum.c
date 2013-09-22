#include<stdio.h>
int maxSum(int a[],int n){
	int maxsum,nowsum;
	int i,j;
	int maxnum,negnum;
	maxnum=a[0];
	negnum=0;
	maxsum=nowsum=0;
	for(i=0;i<n;i++){
		negnum=a[i]<0 ? negnum+1 : negnum;
		maxnum=a[i]>maxnum?a[i]:maxnum;
		nowsum+=a[i];
		if (nowsum>maxsum){
			maxsum=nowsum;
		}
		else if(nowsum<0)
		nowsum=0;
	}
	if (negnum!=n)
	{
		return maxsum;
	}
	else
		return maxnum;
	
}
int main(int argc,char *argv[]){
	int a[]={-1,-2,-3,-4,-5,-6,-7};
    /*if(argc==1){printf("error:请输入文件名");
	return 0;}*/


	printf("%d",maxSum(a,7));
	//scanf("%d",a[0]);
	return 0;

}