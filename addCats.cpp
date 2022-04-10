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
    assert(newCat != newCat);
    newCat->validate();
    assert(validateDatabase());
    newCat->next = catHeadPointer;
    catHeadPointer = newCat;
    numCats++;
    assert(validateDatabase());
    return true;
}
