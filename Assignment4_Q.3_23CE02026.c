#include <stdio.h>

int main(){
    int a;
    float b;
    printf("Enter the credit score:");
    scanf("%d",&a);
    printf("Enter the current balance:");
    scanf("%f",&b);
    switch (a<=600)
    {
    case 1:
         printf("Interest rate percentage :15 \n Calculated interest :%f ",(b*15)/100);
         
    }
    switch (a>=600 && a<=750)
    {
    case 1:
         printf("Interest rate percentage :12 \n Calculated interest :%f ",(b*12)/100);
         
    }
    switch (a>750)
    {
    case 1:
         printf("Interest rate percentage :10 \n Calculated interest :%f ",(b*10)/100);
         
    }
    
}
    