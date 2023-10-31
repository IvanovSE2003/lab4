#include "graphics.h"
#include "picture.hpp"
void fence 
{
   setfillstyle(SOLID_FILL, COLOR(154, 108, 71));
   bar(550, 500, 570, 400);
   setfillstyle(SOLID_FILL, GREEN);
   for(int i = 0; i < 3; i++)
   {
      int pf[6] = {480 ,400-(i*60), 560, 340-(i*60), 650, 400-(i*60)};
      fillpoly(3, pf);
   }
}