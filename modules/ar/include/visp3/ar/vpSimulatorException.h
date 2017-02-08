/****************************************************************************
 *
 * This file is part of the ViSP software.
 * Copyright (C) 2005 - 2017 by Inria. All rights reserved.
 *
 * This software is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * ("GPL") version 2 as published by the Free Software Foundation.
 * See the file LICENSE.txt at the root directory of this source
 * distribution for additional information about the GNU GPL.
 *
 * For using ViSP with software that can not be combined with the GNU
 * GPL, please contact Inria about acquiring a ViSP Professional
 * Edition License.
 *
 * See http://visp.inria.fr for more information.
 *
 * This software was developed at:
 * Inria Rennes - Bretagne Atlantique
 * Campus Universitaire de Beaulieu
 * 35042 Rennes Cedex
 * France
 *
 * If you have questions regarding the use of this file, please contact
 * Inria at visp@inria.fr
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description:
 * Exceptions that can be emited by the simulator classes.
 *
 * Authors:
 * Eric Marchand
 *
 *****************************************************************************/


#ifndef __vpSimulatorException_H
#define __vpSimulatorException_H


/* ------------------------------------------------------------------------- */
/* --- INCLUDE ------------------------------------------------------------- */
/* ------------------------------------------------------------------------- */


/* \file vpSimulatorException.h
   \brief error that can be emited by the vpSimulator class and its derivates
 */
/* Classes standards. */

#include <visp3/core/vpException.h>

#include <iostream>                /* Classe std::ostream.    */
#include <string>                  /* Classe string.     */

/* ------------------------------------------------------------------------- */
/* --- CLASS --------------------------------------------------------------- */
/* ------------------------------------------------------------------------- */

/*!

  \class vpSimulatorException
  \brief Error that can be emited by the vpSimulator class and its derivates.
 */
class VISP_EXPORT vpSimulatorException : public vpException
{
  public:
    /*!
    \brief Lists the possible error than can be emmited while calling
    vpSimulator member
   */
    enum errorSimulatorCodeEnum
    {
      ioError,
      noFileNameError,
      notInitializedError,
      windowSizeNotInitializedError,
      badInitializationError
    } ;

  public:
    vpSimulatorException (const int id, const char* format, ...);
    vpSimulatorException (const int id, const std::string & msg);
    vpSimulatorException (const int id);
};

#endif
