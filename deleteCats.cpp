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
#include "deleteCats.h"

#include <cassert>
#include <iostream>

using namespace std;

bool deleteCat(Cat* targetCat){
    assert(targetCat != nullptr);
    assert(validateDatabase());
    if(targetCat == catHeadPointer) {
        catHeadPointer = catHeadPointer->next;
        delete targetCat;
        numCats--;
        assert(validateDatabase());
        return true;
    }
    else {
        Cat* checkCat = catHeadPointer;
        while(checkCat != nullptr){
            if(checkCat->next == targetCat){
                checkCat->next = targetCat->next;
                delete targetCat;
                numCats--;
                assert(validateDatabase());
                return true;
            }
            checkCat = checkCat->next;
        }
        assert(validateDatabase());
        return true;
    }
}

bool deleteAllCats(){
    while(catHeadPointer != nullptr){
        deleteCat(catHeadPointer);
    }
    return true;
}

