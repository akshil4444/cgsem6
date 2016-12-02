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
  // xmax = getmaxx();
  // ymax = getmaxy();

   /* draw a diagonal line */
   line(30, 30, 15, 60);
   delay(500);
   line(30, 30, 45, 60);
   delay(500);
   line(60, 30, 60, 60);
   delay(500);
   line(60, 45, 75, 30);
   delay(500);
   line(60, 45, 75, 60);
   delay(500);
   line(90, 30, 105, 30);
   delay(500);
   line(90, 30, 90, 45);
   delay(500);
   line(90, 45, 105, 45);
   delay(500);
   line(105, 45, 105, 60);
   delay(500);
   line(105, 60,90,60);
   delay(500);
   line(120, 30, 120, 60);
   delay(500);
   line(120, 45, 135, 45);
   delay(500);
   line(135, 30, 135, 60);
   delay(500);
   line(150, 30, 165, 30);
   delay(500);
   line(160, 30, 160, 60);
   delay(500);
   line(150, 60, 165, 60);
   delay(500);
   line(180, 30, 180, 60);
   delay(500);
   line(180, 60, 195, 60);
   //delay(500);
  // line(120, 45, 35, 45);
  printf("AKSHIL");

   /* clean up */
   getch();
   closegraph();
   return 0;
}