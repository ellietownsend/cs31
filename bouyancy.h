//
//  bouyancy.hpp
//  bookCH2
//
//  Created by Ellie Townsend on 2/4/25.
//

#ifndef bouyancy_h
#define bouyancy_h
/* Buoyancy is the ability of an object to float. Archimedes’ Principle states that the buoyant force is equal to the weight of the fluid that is displaced by the submerged object. The buoyant force can be computed by
          Fb = V * g
    where Fb is the buoyant force, V is the volume of the submerged object, and g is the specific weight of the fluid. If Fb is greater than or equal to the weight of the object, then it will float, otherwise it will sink.
    Write a program that inputs the weight (in pounds) and radius (in feet) of a sphere and outputs whether the sphere will sink or float in water. Use g = 62.4 lb/ft3 as the specific weight of water. The volume of a sphere is computed by (4/3)pr3.*/

void sinkOrFloat();

#include <stdio.h>

#endif /* bouyancy_hpp */
