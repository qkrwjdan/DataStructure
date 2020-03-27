//
// Created by macbook air on 2020-03-27.
//

#ifndef CHAPTER13_PERSON_H
#define CHAPTER13_PERSON_H

#define STR_LEN 50

typedef struct _person{
    int ssn;
    char name[STR_LEN];
    char addr[STR_LEN];
} Person;

int GetSSN(Person * p);
void ShowPerInfo(Person * p);
Person * MakePersonData(int ssn, char * name, char * addr);


#endif //CHAPTER13_PERSON_H
