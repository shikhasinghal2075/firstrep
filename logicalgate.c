/*
#include <stdio.h>

int main()
{ int x,y;
   for (x=0;x<=1;x++)
{
   for(y=0;y<=1;y++)
      {
          printf("\nX=%d   Y=%d    X [AND] Y = %d",x,y,x||y);
       }

}

    return 0;
} */

/*
#include <stdio.h>

int main()
{ int x,y, temp;

   for (x=0;x<=1;x=x+1)
{
   for(y=0;y<=1;y=y+1)
      {   temp=x+y>0?1:0;
          printf("\nX=%d   Y=%d    X [OR] Y = %d",x,y,temp);
       }

}

    return 0;
}*/




















int main(){
    float a,b,c,d;

    printf("enter the a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    d = (b*b-4*a*c);
    switch(d>=0){
        case(1):
            printf("%f,",(-b+sqrt(d))/(2*a));
            printf("%f",(-b-sqrt(d))/(2*a));
            break;
        case(0):
            printf("no real roots");
            break;

    }

}
