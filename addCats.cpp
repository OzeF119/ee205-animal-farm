///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <cassert>
#include <iostream>
#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "Cat.h"

using namespace std;

bool addCat(Cat* newCat) {
    newCat->validate();
    return false;
}

/*
int isValid(const char checkName[],Weight checkWeight){
    if(numCats >= MAX_CATS) {
        fprintf( stderr, "%s: [%d] is greater than [%d].\n", PROGRAM_NAME, numCats, MAX_CATS );
        return 1;
    }
    if(strlen(checkName) == 0) {
        fprintf( stderr, "%s: Must enter a non-empty name\n", PROGRAM_NAME);
        return 1;
    }
    if(strlen(checkName) > MAX_CAT_NAME) {
        fprintf( stderr, "%s: [%s] is greater than [%d].\n", PROGRAM_NAME, checkName, MAX_CAT_NAME );
        return 1;
    }
    if(checkWeight <= 0){
        fprintf( stderr, "%s: [%f] is less than or equal to 0.\n", PROGRAM_NAME, checkWeight);
        return 1;
    }
    for(int i=0; i<numCats; i++){
        if(strcmp(checkName, cat[i].name) == 0){
            fprintf( stderr, "%s: [%s] is not a unique name.\n", PROGRAM_NAME, checkName);
            return 1;
        }
    }
    return 0;
}
int addCats(const char addName[],enum gender addGender,enum breed addBreed,bool addIsFixed,Weight addWeight, enum Color addcollarColor1, enum Color addcollarColor2, unsigned long long addlicense) {
    if(isValid(addName, addWeight) != 0) {
        return 1;
    }

    strcpy(cat[numCats].name, addName);
    cat[numCats].isFixed = addIsFixed;
    cat[numCats].weight = addWeight;
    cat[numCats].catBreed = addBreed;
    cat[numCats].catGender = addGender;
    cat[numCats].collarColor1 = addcollarColor1;
    cat[numCats].collarColor2 = addcollarColor2;
    cat[numCats].license = addlicense;
    numCats++;
    return numCats;
}
*/
