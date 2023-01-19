/**
 * @file GuestCameraException.h
 * @author Javier Izquierdo Hernandez (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief 
 * @version 0.1
 * @date 2022-12-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef GUESTCAMERAEXCEPTION_H 
#define	GUESTCAMERAEXCEPTION_H

#include <stdexcept> // contains runtime_error

class GuestCameraException : public std::runtime_error {
  public:
    GuestCameraException(): std::runtime_error ("Not enough priviledges") {}
};

#endif