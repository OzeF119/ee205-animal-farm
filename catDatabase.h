///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>
#define MAX_CATS 1024
#define MAX_CAT_NAME 50

#include "Cat.h"
#include "reportCats.h"
#include "config.h"

extern Cat* catHeadPointer;
extern int numCats;

extern bool validateDatabase();



