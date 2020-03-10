//
// Created by 98061 on 2020/3/10.
//

#include "Athlete.h"
Athlete::Athlete(const char *name, const char *nationality) {
    head = NULL;
    this->name = string(name);
    this->nation = string(nationality);
}

Athlete::~Athlete() {
    for(Node* p = head;p!=NULL;)
    {
        Node* del = p;
        p = p->next;
        delete p;
    }
    head = NULL;
}

void Athlete::addVisitedPlace(const char *place) {
    Node* add = new Node;
    add->city = string(place);
    add->next = NULL;
    if(head==NULL)
    {
        head = add;
    } else
    {
        add->next = head;
        head=add;
    }
}

bool Athlete::checkVisitedPlace(const char *place) const {
    for(Node* p = head;p!=NULL;p=p->next)
    {
        if(p->city.compare(place)==0)
            return true;

    }
    return false;
}

const char* Athlete::getName() const {
    return name.c_str();
}

const char* Athlete::getNationality() const {
    return nation.c_str();
}