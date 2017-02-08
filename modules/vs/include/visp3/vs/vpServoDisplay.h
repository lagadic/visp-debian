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
 * Interface with the image for feature display.
 *
 * Authors:
 * Eric Marchand
 *
 *****************************************************************************/

#ifndef vpServoDisplay_H
#define vpServoDisplay_H

/*!
  \file vpServoDisplay.h
  \brief interface with the image for feature display
*/

// Servo
#include <visp3/vs/vpServo.h>

// Meter/pixel conversion
#include <visp3/core/vpCameraParameters.h>

//Color / image / display
#include <visp3/core/vpColor.h>
#include <visp3/core/vpImage.h>
#include <visp3/core/vpRGBa.h>
/*!
  \class vpServoDisplay
  \ingroup group_task
  \brief Interface with the image for feature display.
*/
class VISP_EXPORT vpServoDisplay
{
public:
  static void display(const vpServo &s,
                      const vpCameraParameters &cam,
                      const vpImage<unsigned char> &I,
                      vpColor currentColor = vpColor::green,
                      vpColor desiredColor = vpColor::red,
                      unsigned int thickness=1) ;
  static void display(const vpServo &s,
                      const vpCameraParameters &cam,
                      const vpImage<vpRGBa> &I,
                      vpColor currentColor = vpColor::green,
                      vpColor desiredColor = vpColor::red,
                      unsigned int thickness=1) ;
} ;

#endif

