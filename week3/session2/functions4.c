//this program has three functions for the purpose of temp conversion
//the main function will provide a menu using SWITCH

#include<stdio.h>

float celciustofahrenheit(float c)
{
    float f = (c*1.8) + 32;
    return f;
}

float fahrenheittocelsius(float f)
{
    float c = (f-32)/1.8;
    return c;
}

float fahrenheittonewton(float f)
{
    float n = (f-32)/5.45454545;
    return n;
}

int main()
{
    int option,x=0; float c,f,n;

    while(1)
    {
    printf("enter option: \n1.celsius to fahrenheit \n2.fahrenheit to celsius \n3.fahrenheit to newton \n4.exit \n\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
    printf("enter temp in celsius: \n");
    scanf("%f",&c);
    f = celciustofahrenheit(c);
    printf("%.2f°C converts to %.2f°F\n",c,f);
    return 0;
    break;
    
    case 2:
    printf("enter temp in fahrenheit: \n");
    scanf("%f",&f);
    c = fahrenheittocelsius(f);
    printf("%.2f°F converts to %.2f°C\n",f,c);
    return 0;
    break;

    case 3:
    printf("enter temp in fahrenheit: \n");
    scanf("%f",&f);
    n = fahrenheittonewton(f);
    printf("%.2f°F converts to %.2f°N\n",f,n);
    return 0;
    break;

    case 4:
    return 0;
    break;
    
    default: printf("enter valid option!\n\n");
    break;
    }
    }

    return 0;
}
