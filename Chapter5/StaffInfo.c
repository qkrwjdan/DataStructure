//
// Created by macbook air on 2020-03-14.
//

#include <stdio.h>
#include "StaffInfo.h"

void ShowEmployeeInfo(Staff * staff){
    printf("name : %s\n",staff->name);
    printf("num : %d\n",staff->employeeNum);
}