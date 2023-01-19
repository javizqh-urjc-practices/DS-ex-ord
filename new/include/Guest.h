/**
 * @file Guest.h
 * @author Javier Izquierdo (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief Header file of Guest.cpp
 * @version 1.0
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "User.h"

#ifndef GUEST_H
#define	GUEST_H

class Guest : public User{
  public:
    /**
    * @brief Creates a new Admin object
    * 
    * @param employeeNumber 
    * @param NIF 
    * @param name 
    */
    Guest(std::string number = "00000",std::string nif = "00000000",std::string name = "guest");
    ~Guest();
};

#endif