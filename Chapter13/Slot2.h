//
// Created by macbook air on 2020-03-29.
//

#ifndef CHAPTER13_SLOT2_H
#define CHAPTER13_SLOT2_H

#include "Person.h"

typedef int Key;
typedef Person * Value;

typedef struct _slot{
    Key key;
    Value val;
}Slot;

#endif //CHAPTER13_SLOT2_H
