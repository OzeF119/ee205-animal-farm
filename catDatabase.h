///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   10_April_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include <stdbool.h>


#include "Cat.h"
#include "reportCats.h"
#include "config.h"

extern Cat* catHeadPointer;
extern int numCats;

extern bool validateDatabase();



