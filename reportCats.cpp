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

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <cassert>


const char* breedToString(enum breed catBreed){
    switch(catBreed){
        case MAINE_COON : return "Maine Coon";
        case MANX : return "Manx";
        case SHORTHAIR : return "Shorthair";
        case PERSIAN : return "Persian";
        case SPHYNX : return "Sphynx";
        case UNKNOWN_BREED : return "Unknown Breed";
        default: return "Null";
    }
}


const char* genderToString(enum gender catGender){
    switch(catGender){
        case MALE : return "Male";
        case FEMALE : return "Female";
        case UNKNOWN_GENDER : return "Unknown Gender";
        default: return "Null";
    }
}

Cat* findCatByName(const char* name){
    for(Cat* checkCat = catHeadPointer; checkCat != nullptr; checkCat = checkCat->next) {
        if(strcmp(name,checkCat->getName())==0){
            return checkCat;
        }
    }
    return nullptr;
}

bool printAllCats(){
    int numCats = 0;
    assert(validateDatabase());
    for(Cat* checkCat = catHeadPointer; checkCat != nullptr; checkCat = checkCat->next){
        checkCat->print();
        numCats++;
    }
    assert(validateDatabase());
    return true;
}

