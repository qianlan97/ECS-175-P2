//
//  filemanipulation.h
//  ECS 175 P2
//
//  Created by Nan Chen on 10/27/19.
//  Copyright © 2019 Nan Chen. All rights reserved.
//

#ifndef FILEMANIPULATION_H
#define FILEMANIPULATION_H

#include <vector>
#include "polygon.h"

using namespace std;

void readFile(char* fileName, vector<Polygon>& polygons);
void writeFile(char* fileName, vector<Polygon>& polygons);


#endif
