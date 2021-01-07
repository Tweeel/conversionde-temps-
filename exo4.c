#include <stdio.h>
#include <stdlib.h>

void trens(int *t, int *s , int *m,int *h)
{
    *s=*t;
    *h=(*s)/3600;
    *m=(*s-(*h*3600))/60;
    *s=*s-((*h*3600)+(*m*60));
}

int main()
{
    int s, m, h,t;
    printf("entrer le nombre de seconde :");
    scanf("%d", &t);
    trens(&t,&s,&m,&h);
    printf("l'heure : %d:%d:%d",h,m,s);

    return 0;
}