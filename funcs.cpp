#include <iostream>
#include "coord3d.h"
#include "funcs.h"

// Functions
Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
   double l1 = length(p1);
   double l2 = length(p2);
   double fin;
   if(l1 > l2) 
   {
      return p1;
   }
   else 
   {
      return p2;
   }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) 
{
   ppos->x = ppos->x + ((pvel->x)*dt);
   ppos->y = ppos->y + ((pvel->y)*dt);
   ppos->z = ppos->z + ((pvel->z)*dt);
}

Coord3D* createCoord3D(double x, double y, double z) 
{
   Coord3D *a = new Coord3D;
   a->x = x;
   a->y = y;
   a->z = z;
   return a;
}

void deleteCoord3D(Coord3D *p) 
{
   delete p;
}