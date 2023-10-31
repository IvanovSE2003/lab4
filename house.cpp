#include "graphics.h"
#include "picture.hpp"
void house() 
{
   setfillstyle(SOLID_FILL, BROWN);
   bar(100, 350, 350, 500);
   
   setfillstyle(SOLID_FILL, RED);
   setcolor(BLACK);
   bar(265, 290, 295, 345);
   rectangle(265, 290, 295, 345);
   int p[6] = {80,350, 225, 300, 370, 350};
   fillpoly(3, p);
   
   setfillstyle(SOLID_FILL, WHITE);
   bar(130, 390, 180, 440);
   bar(270, 390, 320, 440);
   setcolor(BLACK);
   
   rectangle(130, 390, 180, 440);
   rectangle(130, 390, 155, 415);
   rectangle(155, 390, 180, 415);
   rectangle(155, 415, 180, 440);
   
   rectangle(270, 390, 320, 440);
   rectangle(270, 390, 295, 415);
   rectangle(295, 390, 320, 415);
   rectangle(295, 415, 320, 440);
   
   setfillstyle(SOLID_FILL, RED);
   bar(195, 390, 255, 500);
   
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(245, 450, 5, 5);
}