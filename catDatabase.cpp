///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
/*
#include "Cat.h"
#include "config.h"
#include "catDatabase.h"
#include "reportCats.h"

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

using namespace std;

Cat* catHeadPointer = nullptr;

int numCats = 0;

extern bool validateDatabase() {
    int validCats = 0;
    for(Cat* checkCat = catHeadPointer; checkCat != nullptr; checkCat = checkCat->next){
        if(!checkCat->validate()){
            return false;
        }
        Cat* catDetected = findCatByName(checkCat->getName());
        if(catDetected != checkCat) {
            cout << PROGRAM_NAME ": Warning: Two cats have the name << checkCat->etName() " << endl;
        }
        validCats++;
    }
    if(validCats != numCats) {
        cout << PROGRAM_NAME << ": Error: number of cats " << numCats << " does not equal the amount of valid cats " << validCats << endl;
        return 1;
    }
    return true;
}
 */