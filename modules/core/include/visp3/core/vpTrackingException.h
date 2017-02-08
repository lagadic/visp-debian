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
 * Exceptions that can be emited by the vpTracking class and its derivates.
 *
 * Authors:
 * Eric Marchand
 *
 *****************************************************************************/


#ifndef __vpTrackingException_H
#define __vpTrackingException_H


/* ------------------------------------------------------------------------- */
/* --- INCLUDE ------------------------------------------------------------- */
/* ------------------------------------------------------------------------- */


/* \file vpTrackingException.h
   \brief error that can be emited by the vpTracker class and its derivates
 */
/* Classes standards. */

#include <visp3/core/vpException.h>
#include <iostream>                /* Classe std::ostream.    */
#include <string>                  /* Classe string.     */
/* ------------------------------------------------------------------------- */
/* --- CLASS --------------------------------------------------------------- */
/* ------------------------------------------------------------------------- */

/*!
  \class vpTrackingException
  \ingroup group_core_debug
  \brief Error that can be emited by the vpTracker class and its derivates.
 */
class VISP_EXPORT vpTrackingException : public vpException
{
  public:
    /*!
    \brief Lists the possible error than can be emmited while calling
    vpTracking member
   */
    enum errorTrackingCodeEnum
    {
      featureLostError,

      // Moving edges
      notEnoughPointError,
      initializationError,
      fatalError
    } ;

  public:
    vpTrackingException (const int id,  const char* format, ...)
    {
      this->code = id;
      va_list args;
      va_start(args, format);
      setMessage(format, args);
      va_end (args);
    }
    vpTrackingException (const int id, const std::string & msg)
      : vpException(id, msg){ ; }
    vpTrackingException (const int id)
      : vpException(id){ ; }

};

#endif
