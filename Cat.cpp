///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include <cstring>


void Cat::initializeDatabase() {
    memset( name, 0, MAX_CAT_NAME );
    isFixed = false;
    weight = 0;
    catGender = UNKNOWN_GENDER;
    catBreed = UNKNOWN_BREED;
    next = nullptr;
}

Cat::Cat() {
    initializeDatabase();
}
