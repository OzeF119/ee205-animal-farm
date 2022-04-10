///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
/*
#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char* collarToString(enum Color collar){
    switch(collar){
        case BLACK : return "Black";
        case WHITE : return "White";
        case RED   : return "Red";
        case BLUE  : return "Blue";
        case GREEN : return "Green";
        case PINK  : return "Pink";
        case UNKNOWN_COLOR : return "Unknown Color";
        default: return "Null";
    }
}
const char* breedToString(enum breed theBreed){
    switch(theBreed){
        case MAINE_COON : return "Maine Coon";
        case MANX : return "Manx";
        case SHORTHAIR : return "Shorthair";
        case PERSIAN : return "Persian";
        case SPHYNX : return "Sphynx";
        case UNKNOWN_BREED : return "Unknown Breed";
        default: return "Null";
    }
}


const char* genderToString(enum gender theGender){
    switch(theGender){
        case MALE : return "Male";
        case FEMALE : return "Female";
        case UNKNOWN_GENDER : return "Unknown Gender";
        default: return "Null";
    }
}

const char* isFixedToString(bool isFixed){
    if(isFixed == 1){
        return "true";
    }
    else
        return "false";
}


int printCat(int catIndex){
    if(catIndex < 0 || catIndex > MAX_CATS) {
        printf("animalFarm1: Bad cat [%d]\n", catIndex);
        return 1;
    }
    printf("cat index = [%u] name=[%s] gender=[%s] breed=[%s] isFixed=[%s] weight=[%f] collarColor1=[%s] collarColor2=[%s] license=[%lld]\n", catIndex, cat[catIndex].name, genderToString(cat[catIndex].catGender), breedToString(cat[catIndex].catBreed), isFixedToString(cat[catIndex].isFixed), cat[catIndex].weight, collarToString(cat[catIndex].collarColor1), collarToString(cat[catIndex].collarColor2), cat[catIndex].license);
    return 0;
}

int printAllCats(){
    for(int i = 0; i < numCats; i++){
        printCat(i);
    }
    return 1;
}

int findCat(const char scoutName[]) {
    for(int i = 0; i <= numCats; i++){
        if(strcmp(scoutName, cat[i].name) == 0){
            return i;
        }
    }
    printf("There is no cat with the name %s\n", scoutName);
    return -1;
}
*/

