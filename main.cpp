/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Pointers, main.cpp, Lab 9.

This programs contains multiple programs 
that uses the idea of pointer to manipulate data.
*/

#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D pointA = {10, 20, 30};
  Coord3D pointB = {10, 20, 30};
  Coord3D pointB2 = {-20, 21, -22}; 
  Coord3D vel = {1, -5, 0.2};
  Coord3D pos = {0, 0, 100.0};
  // Output
  // A
  std::cout << length(&pointA) << "\n\n";
  // B
  std::cout << fartherFromOrigin(&pointB, &pointB2) << "\n\n";
  // C
  move(&pos, &vel, 2.0);
  std::cout << pos.x << " " << pos.y << " " << pos.z << "\n\n";
  // E
  Coord3D *npos = createCoord3D(10, 20, 30);
  Coord3D *nvel = createCoord3D(5.5, -1.4, 7.77);
  move(npos, nvel, 10.0);
  std::cout << npos->x << " " << npos->y << " " << npos->z << "\n";
  deleteCoord3D(npos);
  deleteCoord3D(nvel);
  return 0;
}
