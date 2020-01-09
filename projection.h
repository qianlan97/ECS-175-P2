//
//  projection.h
//  ECS 175 P2
//
//  Created by Nan Chen on 10/27/19.
//  Copyright © 2019 Nan Chen. All rights reserved.
//

#ifndef PROJECTION_H
#define PROJECTION_H

#include <vector>
#include "polygon.h"

vector<Polygon> bound(vector<Polygon> polygons);
void project(vector<Polygon> polygons);

#endif
