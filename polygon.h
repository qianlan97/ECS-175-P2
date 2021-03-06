//
//  polygon.h
//  ECS 175 P2
//
//  Created by Nan Chen on 10/27/19.
//  Copyright © 2019 Nan Chen. All rights reserved.
//

#ifndef POLYGON_H
#define  POLYGON_H

#include <vector>

using namespace std;

class Coordinate {
public:

    float x;
    float y;
    float z;

    Coordinate(float x1, float y1, float z1);

};

class Edge {
public:

    int from;
    int to;

    Edge(int from1, int to1);

};

class Polygon {
public:

    int numVertices;
    vector<Coordinate> vertices;
    int numEdges;
    vector<Edge> edges;

    Polygon(int numVerts, vector<Coordinate> verts, int numEds, vector<Edge> eds);

};

#endif
