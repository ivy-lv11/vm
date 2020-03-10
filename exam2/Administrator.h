//
// Created by 98061 on 2020/3/10.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include "Athlete.h"
using namespace std;

#ifndef UNTITLED_ADMINISTRATOR_H
#define UNTITLED_ADMINISTRATOR_H


class Administrator {
private:
    struct Athnode
    {
        Athlete* ath;
        Athnode* next;
    } *head,*tail;
public:
    Administrator();
    void addAthlete(Athlete *athlete);
    int findAthleteByNationality(const char* nationality,Athlete** resultList,int maxNum) const;
    int findAthleteByVisitedPlace(const char* place,Athlete** resultList, int maxNum) const;
};




#endif //UNTITLED_ADMINISTRATOR_H
