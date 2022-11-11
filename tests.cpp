#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "coord3d.cpp"
#include "funcs.h"

TEST_CASE("Length Test Cases") 
{
   Coord3D a = {10, 20, 30};
   Coord3D b = {0, 20, 30};
   Coord3D c = {0, 0, 0};
   Coord3D d = {-10, -20, -30};
   CHECK(length(&a) == length(&a));
   CHECK(length(&b) == length(&b));
   CHECK(length(&c) == 0.0);
   CHECK(length(&d) == length(&a));
}

TEST_CASE("Farther From Origin Test Cases") 
{
   Coord3D a = {10, 20, 30};
   Coord3D b = {0, 20, 30};
   Coord3D c = {0, 0, 0};
   Coord3D d = {-10, -20, -30};
   CHECK(fartherFromOrigin(&a, &b) == fartherFromOrigin(&a, &b));
   CHECK(fartherFromOrigin(&b, &c) == fartherFromOrigin(&b, &c));
   CHECK(fartherFromOrigin(&c, &d) == fartherFromOrigin(&c, &d));
   CHECK(fartherFromOrigin(&d, &a) == fartherFromOrigin(&d, &a));
}

TEST_CASE("Farther From Origin Test Cases") 
{
   Coord3D ap = {10, 20, 30};
   Coord3D bv = {1, 20, 30};
   Coord3D cp = {1, 0, 0};
   Coord3D dv = {-10, -20, -30};
   move(&ap, &bv, 2.0);
   CHECK(ap.x == 12);
   CHECK(ap.y == 60);
   CHECK(ap.z == 90);
   move(&cp, &dv, 3.0);
   CHECK(cp.x == -29);
   CHECK(cp.y == -60);
   CHECK(cp.z == -90);
}

TEST_CASE("Delete and Create Coord3D Test Cases") 
{
   Coord3D* a = createCoord3D(5, 3, 10);
   Coord3D* b = createCoord3D(1, 15, 2);
   Coord3D* c = createCoord3D(8, -2, 13);
   Coord3D* d = createCoord3D(-.2, 25, 8);
   CHECK(a->x == 5.0);
   CHECK(a->y == 3.0);
   CHECK(a->z == 10.0);
   CHECK(b->x == 1.0);
   CHECK(b->y == 15.0);
   CHECK(b->z == 2.0);
   CHECK(c->x == 8.0);
   CHECK(c->y == -2.0);
   CHECK(c->z == 13.0);
   CHECK(d->x == -.20);
   CHECK(d->y == 25.0);
   CHECK(d->z == 8.0);
   delete(a);
   delete(b);
   delete(c);
   delete(d);
}