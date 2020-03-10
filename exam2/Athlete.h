//
// Created by 98061 on 2020/3/10.
//
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
#ifndef UNTITLED_ATHLETE_H
#define UNTITLED_ATHLETE_H


class Athlete {
private:
    string name;
    string nation;
    struct Node{
        string city;
        Node* next;
    } *head;
public:
    Athlete(const char* name,const char* nationality);
    ~Athlete();
    void addVisitedPlace(const char* place ) ;
    bool checkVisitedPlace(const char* place) const;
    const char* getName() const;
    const char* getNationality() const;
};


#endif //UNTITLED_ATHLETE_H
