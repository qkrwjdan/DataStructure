//
// Created by macbook air on 2020-03-09.
//

#ifndef CHAPTER3_POINT_H
#define CHAPTER3_POINT_H

typedef struct _point{
    int xpos;
    int ypos;
} Point;

void SetPointPos(Point * ppos, int xpos, int ypos);

void ShowPointPos(Point * ppos);

int PointComp(Point * pos1, Point * pos2);

#endif //CHAPTER3_POINT_H
