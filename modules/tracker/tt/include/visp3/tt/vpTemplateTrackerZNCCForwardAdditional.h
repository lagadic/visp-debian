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
 * Template tracker.
 *
 * Authors:
 * Amaury Dame
 * Aurelien Yol
 * Fabien Spindler
 *
 *****************************************************************************/
/*!
 \file vpTemplateTrackerZNCCForwardAdditional.h
 \brief
*/

#ifndef vpTemplateTrackerZNCCForwardAdditional_hh
#define vpTemplateTrackerZNCCForwardAdditional_hh


#include <visp3/tt/vpTemplateTrackerZNCC.h>

/*!
  \class vpTemplateTrackerZNCCForwardAdditional
  \ingroup group_tt_tracker
  The algorithm implemented in this class is described in \cite Irani98a and \cite Marchand16a.

 */
class VISP_EXPORT vpTemplateTrackerZNCCForwardAdditional: public vpTemplateTrackerZNCC
{
  protected:
    void initHessienDesired(const vpImage<unsigned char> &I);
    void trackNoPyr(const vpImage<unsigned char> &I);

  public:
    vpTemplateTrackerZNCCForwardAdditional(vpTemplateTrackerWarp *warp);
};
#endif

