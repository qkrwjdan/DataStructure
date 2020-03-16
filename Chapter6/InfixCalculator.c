//
// Created by macbook air on 2020-03-16.
//

#include "InfixToPostfix.h"
#include "PostCalculator.h"
#include <string.h>
#include <stdlib.h>

int EvalInfixExp(char exp[]){
    int len = strlen(exp);
    int ret;
    char * expcpy = (char*)malloc(sizeof(len+1));

    strcpy(expcpy,exp);
    ConvToRPNExp(expcpy);
    ret = EvalRPNExp(expcpy);

    return ret;
}