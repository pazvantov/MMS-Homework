#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char forbinary[33];
    int n;
    int choice;
    printf("From->\n1.Hex\n2.Dec\n3.Oct\n4.Binary\nChoose:");
    scanf("%d",&choice);
    if(choice == 1)
        scanf("%x",&n);
    else if(choice == 2)
        scanf("%d",&n);
    else if(choice == 3)
        scanf("%o",&n);
    else if(choice == 4)
    {
        printf("The first bit should be for 1 for negative number 0 else\n");
        int count = 0;
        int length;
        n=0;
        scanf("%s",forbinary);
        length = strlen(forbinary);
        printf("Lenght = %d\n",length);
        for(int i=length-1;i>0;i--)
        {
            if(forbinary[i] == '1')
            {
                n+=pow(2,count);
            }
                
            count++;
            printf("n=%d\n",n);
        }
        if(forbinary[0] == '1')
            n *= -1;
        strcpy(forbinary,"");
    }
    else
    {
        fprintf(stderr,"Invalid choice!!\n");
        return 1;
    }

    printf("To->\n1.Hex\n2.Dec\n3.Oct\n4.Binary\nChoose:");
    scanf("%d",&choice);
    if(choice == 1)
        printf("%x\n",n);
    else if(choice == 2)
        printf("%d\n",n);
    else if(choice == 3)
        printf("%o\n",n);
    else if(choice == 4)
    {
    	int i = 32;
    	int check = 0;
    	if(n<0)
        {
            forbinary[0] = '1';
            n *= -1;
        }
    	else forbinary[0] = '0';
    	while(n != 0)
    	{
    		forbinary[i] = '0'+n%2;
    		n /= 2;
    		i--;
    	}
    	printf("First bit is a sign bit\n");
    	printf("%c",forbinary[0]);
        for(;i<33;i++)
        {
            printf("%c",forbinary[i]);
        }
        printf("\n");
    	/*for(int j=1;j<32;j++)
    	{
    		if(forbinary[i] == '1')
    			check = 1;

            if(check)
    		    printf("%c",forbinary[i]);
    	}*/
    	
    }
    else
    {
        fprintf(stderr,"Invalid choice!!\n");
        return 1;
    }
    return 0;

}
