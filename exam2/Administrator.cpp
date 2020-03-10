//
// Created by 98061 on 2020/3/10.
//

#include "Administrator.h"

Administrator::Administrator()
{
    head = NULL;
    tail = NULL;
}

void Administrator::addAthlete(Athlete *athlete) {
    Athnode *add = new Athnode;
    add->ath = athlete;
    add->next = NULL;
    if(head ==NULL)
    {
        head = add;
        tail = add;
    } else
    {
        tail->next = add;
        tail = add;

    }
}

int Administrator::findAthleteByNationality(const char *nationality, Athlete **resultList, int maxNum) const {
    int count = 0;
    for(Athnode* p=head;p!=NULL;p=p->next)
    {
        if(count>=maxNum)
            return count;
        if(strcmp(p->ath->getNationality(),nationality)==0)
        {

            resultList[count] = p->ath;
            count++;
        }
    }
    return count;
}

int Administrator::findAthleteByVisitedPlace(const char *place, Athlete **resultList, int maxNum) const {
    int count = 0;
    for(Athnode* p = head;p!=NULL;p=p->next)
    {
        if(count>=maxNum)
            return count;
        else
        {
            if(p->ath->checkVisitedPlace(place)==true)
            {
                resultList[count] = p->ath;
                count++;
            }
        }
    }
    return count;
}