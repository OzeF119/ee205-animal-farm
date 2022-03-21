///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "updateCats.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int updateCatName(int index, const char newName[]) {
    for(int i = 0; i < numCats; i++){
        if(strcmp(newName, cat[i].name) == 0){
            fprintf( stderr, "%s: Cat name [%s] is already in the database.\n", PROGRAM_NAME, newName );
            return 1;
        }
        if(strlen(newName) == 0) {
            return 1;
        }
    }
    strcpy(cat[index].name, newName);
    return 0;
}

void fixCat(int index){
    cat[index].isFixed = true;
}

int updateCatWeight(int index, float newWeight){
    if(newWeight <= 0) {
        fprintf( stderr, "%s: Cat weight [%f] must be greater than or equal to zero.\n", PROGRAM_NAME, newWeight ) ;
        return 1;
    }
    cat[index].weight = newWeight;
    return 0;
}


void updateCatCollar1(int index, enum Color newCollarColor1) {
    cat[index].collarColor1 = newCollarColor1;
}

void updateCatCollar2(int index, enum Color newCollarColor2) {
    cat[index].collarColor2 = newCollarColor2;
}

void updateLicense(int index, unsigned long long newLicense) {
    cat[index].license = newLicense;
}



