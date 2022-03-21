///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern const char* isFixedToString(bool isFixed);

extern const char* genderToString(enum gender theGender);

extern const char* breedToString(enum breed theBreed);

extern const char* collarToString(enum Color collar);

extern int printCat(int catIndex);

extern int printAllCats();

extern int findCat(const char scoutName[]);

