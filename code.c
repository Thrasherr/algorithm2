# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

void main()
{    
	int **a = NULL;
	int *b = NULL;
    int i,j;  
    int AH, BH, L;  
	
	printf("请输入B的行数\n");
	scanf("%d", &BH);
    printf("请输入A行数\n");  
    scanf("%d",&AH);  
    printf("请输入列数\n");  
    scanf("%d",&L);
	
	b = (int *)malloc(sizeof(int) * BH);
    a = (int**)malloc(sizeof(int*) * AH);

	if(NULL == a)
	{
		exit(1);
	}
	if(NULL == b)
	{
		exit(1);
	}
	//赋值
	for (i=0; i<BH; i++)
	{
		printf("请输入第%d行1列的数值\n");
		scanf("%d", &b[i]);
	}
    for(i=0;i<AH;i++)
	{
		a[i]=(int*)malloc(sizeof(int) * L);
		if(NULL == a[i])
		{
			exit(1);
		}
	}
    for(i=0;i<AH;i++) 
	{
		for(j=0;j<L;j++) 
		{
			printf("请输入%d行%d列的数\n", i, j);
			scanf("%d", &a[i][j]);
		}
	}


	//释放
	for(i=0;i<AH;i++)
	{
		free(a[i]);
	}
	free(a); 
	free(b);
}