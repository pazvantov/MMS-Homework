#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char possibleSymbols[37]="0123456789abcdefghijklmnopqrstuvwxyz";
    char num[10];
    int length,counter = 0;
    int DecNum = 0;
    char result[10];
    int InsertedNumSys,ToConvertSys;
    printf("Insert number:");
    scanf("%s",num);
    length = strlen(num);
    
    printf("From base:");
    scanf("%d",&InsertedNumSys);
    if(InsertedNumSys < 2 || InsertedNumSys > 36)
    {
        printf("Invalid input base!\n");
        return 1;
    }
    for(int i=0;i<length;i++)
    {
        if(!((num[i]>='0' && num[i]<='9')||(num[i]>='a' && num[i]<='z')))
        {
            printf("Invalid number!\n");
            return 1;
        }  
    }
    printf("To base:");
    scanf("%d",&ToConvertSys);
    if(ToConvertSys < 2 || ToConvertSys > 36)
    {
        printf("Invalid output base!\n");
        return 1;
    }
    for(int i=length - 1;i>=0;i--)
    {
        if(num[i]>='0' && num[i]<='9')
            DecNum +=((num[i] - '0') * pow(InsertedNumSys,counter));
        else
            DecNum +=((num[i] - 'a' + 10) * pow(InsertedNumSys,counter));
        printf("DecNum = %d --- counter = %d\n",DecNum,counter);
        counter++;
    }
    printf("Result = %d\n",DecNum);

    //To do 
    //da opravq problema s po malka broina sistema
    //da izpolzva znaci ot po golqma
    //
    //Prevrushtane ot Decimal v izbranata broina sistema
}