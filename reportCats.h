///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   10_April_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Cat.h"
#include "catDatabase.h"
#include "config.h"

extern const char* genderToString(enum gender catGender);

extern const char* breedToString(enum breed catBreed);

extern Cat* findCatByName(const char* name);

extern bool printAllCats();