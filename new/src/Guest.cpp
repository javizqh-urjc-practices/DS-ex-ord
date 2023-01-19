/**
 * @file Guest.cpp
 * @author Javier Izquierdo (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief 
 * @version 1.0
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Guest.h"

Guest::Guest(std::string employeeNumber, std::string NIF, std::string name): User(employeeNumber, NIF, name){
  this->adminPermission = false;
  this->isGuest = true;
}

Guest::~Guest(){}