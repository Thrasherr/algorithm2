# include <stdio.h>
# include <malloc.h>
# include <stdlib.h>

void main()
{    
	int **a = NULL;
	int *b = NULL;
    int i,j;  
    int AH, BH, L;  
	
	printf("������B������\n");
	scanf("%d", &BH);
    printf("������A����\n");  
    scanf("%d",&AH);  
    printf("����������\n");  
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
	//��ֵ
	for (i=0; i<BH; i++)
	{
		printf("�������%d��1�е���ֵ\n");
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
			printf("������%d��%d�е���\n", i, j);
			scanf("%d", &a[i][j]);
		}
	}


	//�ͷ�
	for(i=0;i<AH;i++)
	{
		free(a[i]);
	}
	free(a); 
	free(b);
}