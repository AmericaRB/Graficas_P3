#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main(){

  int gd = DETECT, gm;
  int opcion, ey,mx,my,a,b,c;
  double x, y;

  printf("Ingrese el numero correspondiente al tipo de función que quiere graficar:\n");
  printf("1.cos(x)\n");
  printf("2.sen(x)\n");
  printf("3.Función cuadrática\n");
  scanf("%d", &opcion);

switch ( opcion ) {
    case 1:
     initgraph(&gd, &gm, "c:\\turboc3\\bgi");

       my=getmaxy();
       mx=getmaxx();
       ey=my/2;

       line(0,ey,mx,ey);
       line(0,0,0,my);

       for(x = 0; x < mx; x+=1) {

         y = 100*cos(x*3.141/180);
         y = ey - y;

         putpixel(x, y, BLUE);
         delay(10);
                                 }

     getch();

     closegraph();
     return main();
    break;

    case 2:
     initgraph(&gd, &gm, "c:\\turboc3\\bgi");

       my=getmaxy();
       mx=getmaxx();
       ey=my/2;

       line(0,ey,mx,ey);
       line(0,0,0,my);

       for(x = 0; x < mx; x+=1) {

         y = 100*sin(x*3.141/180);
         y = ey - y;

         putpixel(x, y, RED);
         delay(10);
                                }

     getch();

     closegraph();
     return main();

    break;

    case 3:
     printf("Tomando en cuenta que la forma de una función cuadrática es ax²+bx + c\n");
     printf("\nIngrese el valor de a:\n");
      scanf("%d", &a);
     printf("\nIngrese el valor de b:\n");
      scanf("%d", &b);
     printf("\nIngrese el valor de c:\n");
      scanf("%d", &c);

     initgraph(&gd,&gm,"c:\\turboc3\\bgi");

       my=getmaxy();
       mx=getmaxx();
       ey=my/2;

       line(0,ey,mx,ey);
       line(0,0,0,my);

       for(x=0;x<=mx;x+=1){

         y=((a*(pow(x,2)))+(b*x)+c);
         y=ey-y;

         if (y <= (my-my) || y >= my){
          break;
                                     }

         putpixel(x, y, GREEN);
         delay(10);

                           }
      getch();

      closegraph();
     return main();

    break;

    default:
       printf("Lo siento, tu entrada no es valida.");
       delay(1000);
       return 0;
                   }
 return 0;
           }
