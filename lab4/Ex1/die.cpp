//
// Created by bened on 30/10/2017.
//

#include <cstdlib>
#include <iostream>
#include "die.h"
//Benedict MCGOVERN 15340696

int die::roll(int numSides) {
    int roll1;
    roll1 = rand()%numSides+1;
    std:: cout << "This came out: " <<roll1<<"\n";
    return roll1;
}

int die::getNumsides() {
    int sides;
    std::cout<<"Enter amount of sides greater then 3: " << "\n";
    std::cin>>sides;
    if(sides <4) {
        std::cout << "Sides were less then 3 therefore sides set to default(6)" << "\n";
        return 6;
    }
    else
        return sides;
}

int die::getValue() {
    int numsides = getNumsides(), rollsAmount, value =0;
    std::cout<<"Enter amount of rolls: " << "\n";
    std::cin>>rollsAmount;
    while(rollsAmount !=0){
        value+=roll(numsides);
        rollsAmount--;
    }
    return value;
}