//
//  polygon.cpp
//  ECS 175 P2
//
//  Created by Nan Chen on 10/27/19.
//  Copyright © 2019 Nan Chen. All rights reserved.
//

#include "polygon.h"

#include <vector>

using namespace std;

Coordinate::Coordinate(float x1, float y1, float z1) {
    x = x1;
    y = y1;
    z = z1;
}

Edge::Edge(int from1, int to1) {
    from = from1;
    to = to1;
}

Polygon::Polygon(int numVerts, vector<Coordinate> verts, int numEds, vector<Edge> eds) {
    numVertices = numVerts;
    vertices = verts;
    numEdges = numEds;
    edges = eds;
}
