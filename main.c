#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=50&&x<100)
    {
        printf("%d",x/10+1);
    }
    return 0;
}








/*#include <stdio.h>
int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
    if(x>0)
    {
        if(y>0)
            printf("I");
        else if(y<0)
            printf("IV");
        else
            printf("X-oska");
    }
    else if(x<0)
    {
        if(y>0)
            printf("II");
        else if(y<0)
            printf("III");
        else
            printf("X-oska");
    }
    else
    {
        if(y==0.0f)
            printf("KP");
        else
            printf("Y-oska");
    }
    if(x > 0 && y>0)
        printf("I");
    if(x<0 && y>0)
        printf("II");
    if(x<0 && y<0)
        printf("III");
    if(x>30 && y<0)
        printf("IV");
    if(x==0.0f)
        printf("Y-oska");
    if(y==0.0f)
        printf("X-oska");
    if(x=0.0f && y=0.0f)
        printf("Kordinaten pocetok");
    return 0;
}*/






/*#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    if((!(n%4)&&(n%100))||!(n%400))
        printf("pretstapna\n");
    else
        printf("ne e prestapna\n");
    return 0;
}*/







/*#indlude <stdio.h>
int main()
{
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    int znakA,znakB,znakC;
    znakA=!((a<='z'&&a>='a')||!(a<='Z'&&a>='A'))||!((a<='9'&&a>='0'));
    znakB=!((b<='z'&&b>='a')||!(b<='Z'&&b>='A'))||!((b<='9'&&b>='0'));
    znakC=!((c<='z'&&c>='a')||!(c<='Z'&&c>='A'))||!((c<='9'&&c>='0'));
    printf("%d %d %d\n",znakA,znakB,znakC);
    int bukvaA,bukvaB,bukvaC;
    bukvaA=((a<='z'&&a>='a')||(a<='Z'&&a>='A'));
    bukvaB=((b<='z'&&b>='a')||(b<='Z'&&b>='A'));
    return 0;
}*/
