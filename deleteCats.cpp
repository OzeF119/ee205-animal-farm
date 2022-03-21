///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file deleteCats.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include "config.h"
#include "catDatabase.h"
#include "addCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void deleteAllCats() {
    printf("All cats deleted\n");
    for(int i = 0; i<= MAX_CATS; i++){
        strcpy(cat[i].name, "-");
        cat[i].isFixed = false;
        cat[i].weight = 0;
        cat[i].catGender = UNKNOWN_GENDER;
        cat[i].catBreed = UNKNOWN_BREED;
        cat[i].collarColor1 = UNKNOWN_COLOR;
        cat[i].collarColor2 = UNKNOWN_COLOR;
        cat[i].license = 0;
    }
}

void deleteCat( int index ) {
    for(int i = 0; i<= MAX_CATS; i++) {
        if(i == index) {
            for(int j = i; j <= (numCats - 1); j++){
                strcpy(cat[j].name, cat[j+1].name);
                cat[j].isFixed = cat[j+1].isFixed;
                cat[j].weight = cat[j+1].weight;
                cat[j].catGender = cat[j+1].catGender;
                cat[j].catBreed = cat[j+1].catBreed;
                cat[j].collarColor1 = cat[j+1].collarColor1;
                cat[j].collarColor2 = cat[j+1].collarColor2;
                cat[j].license = cat[j+1].license;
            }
        }
    }
}

