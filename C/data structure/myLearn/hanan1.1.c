#include<STDIO.H>
void main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int n,value;
	int temp,hash;
	printf("\Enter the value of n(table size):");
	scanf("%d",&n);
	do
	{
		printf("\nEnter the hash value");
		scanf("%d",&value);
		hash=value%n;
		if(a[hash]==0)
		{
			a[hash]=value;
			printf("\na[%d]the value %d is stored",hash,value);
		}
		else
		{
			for(hash++;hash<n;hash++)
			{
				if(a[hash]==0)
				{
					printf("space is allocated give other value");
					a[hash]=value;
					printf("\na[%d]the value %d is stored",hash,value);
					goto menu;
				}
			}
			hash=0;
			for(hash;hash<n;hash++)
			{
				if(a[hash]==0)
				{
					printf("space is alocated give other value");
					a[hash]=value;
					printf("\n a[%d]the value %d is stored",hash,value);
					goto menu;
				}
			}
			printf("ERROR");
			printf("\nEnter'0'and press'Enter key'twice to exit");
		}
		menu:
		printf("\n Do u want enter more");
		scanf("%d",&temp);
	}
	while(temp==1);
	getch();
}
