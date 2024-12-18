/**
 * @file main.h
 * @author Javier Izquierdo (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief Header file of main.cpp
 * @version 1.0
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Interface.h"
#include "GlobalConfig.h"
#include "NotFoundArgument.h"

#ifndef MAIN_H
#define	MAIN_H

int main(int argc,char* argv[],char *envp[]);

inline bool checkArgumentIndex(int indexToCheck, int argSize){return ! (indexToCheck >= argSize);};

#endif