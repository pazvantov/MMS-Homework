#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char input[30];
    char operation;
    char forConvert[20];
    double op1,op2,result;
    int i,length;
    
    while(scanf("%[^\n]",input) != EOF)
    {
        if(input[0] == 0)
            break;
        length = strlen(input);

        for(i=0;i<length;i++)
        {
            if((input[i]>='0' && input[i]<='9') || input[i] == '.')
                forConvert[i] = input[i];
            else break;
        }

        op1 = strtod(forConvert,NULL);
        i++;
        operation = input[i];

        for(i++;i<length-1;i++)
        {
            forConvert[i] = input[i];
        }

        op2 = strtod(forConvert,NULL);
        printf("op1=%lf, operation = %c ,  op2=%lf\n",op1,operation,op2);

        if(op1 == 0 && op2 == 0)
        {
            fprintf(stderr,"---Invalid input!\n");
            return 1;
        }

        if(!((operation == '+') || (operation == '-')
        || (operation == '*') || (operation == '/')))
        {
            fprintf(stderr,"Invalid input!\n");
            return 1;
        }

        if(operation == '+')
            result = op1 + op2;
        else if(operation == '-')
            result = op1 - op2;
        else if(operation == '*')
            result = op1 * op2;
        else if(operation == '/')
            result = op1 / op2;
        
        printf("%0.2lf\n",result);
    }
    
    

    return 0;
}