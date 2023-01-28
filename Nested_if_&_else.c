#include<stdio.h>  
#include<ctype.h>  
int main()         
{                  
    int units,totalamt,ext;
    char cat;
    units=totalamt=ext=0;
    printf("Enter the Catageory: ");
    scanf("%c",&cat);
    cat = tolower(cat);
  

    if(cat == 'd')
    {
    printf("Enter the Units u consumed: ");
    scanf("%d",&units);
    
         if(units<=100)
        {
            totalamt = 500;
        }
        else if(units<=200)
        {
            ext = units-100;
            totalamt = 500+(ext*3.50);
        }
        else if(units<=300)
        {
            ext = units-200;
            totalamt=500+350+(ext*6.0);
        }
        else if(units>300)
        {
            ext = units-300;
            totalamt=500+350+600+(ext*8.0);
        }
    }
    
     else
     
    if(cat == 'c')                  
    {
    printf("Enter the Units u consumed: ");
    scanf("%d",&units);  

        if (units<=100)    
        {
            totalamt = 750;
        }
        else
         
        if(units <=200)  
        {
            ext = units - 100;
            totalamt=750+(ext*5.50);
        }
        else 
        if(units<=300)
        {
            ext = units - 200;
            totalamt = 750+550+(ext*7.50);
        }
        else if(units>300)
        {
            ext = units - 300;
            totalamt = 750+550+750+(ext*9.50);
        }

    }
    

if(cat=='d')
    printf("Domestic Total amount %d",totalamt);
else if(cat=='c')
    printf("Commericial Total amount is %d",totalamt);
}

