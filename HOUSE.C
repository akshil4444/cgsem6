#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   //int xmax, ymax;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(getmaxcolor());
   //xmax = getmaxx();
   //ymax = getmaxy();

   /* draw a diagonal line */
   line(100, 50, 100,100);
   delay(500);
   line(200,50,200,100);
   delay(500);
   line(100,50,200,50);
   delay(500);
   line(100,100,200,100);
   delay(500);
   line(100,50,150,30);
   delay(500);
   line(150,30,200,50);
   delay(500);
   line(200,50,300,50);
   delay(500);
   line(150,30,250,30);
   delay(500);
   line(250,30,300,50);
   delay(500);
   line(300,50,300,100);
   delay(500);
   line(200,100,300,100);
   delay(500);
   line(150,70,150,80);
   delay(500);
   line(190,70,190,80);
   delay(500);
   line(150,70,190,70);
   delay(500);
   line(150,80,190,80);
   delay(500);
   line(250,80,260,100);
   delay(500);
   line(250,70,250,100);
   printf("ting tong");


   /* clean up */
   getch();
   closegraph();
   return 0;
}