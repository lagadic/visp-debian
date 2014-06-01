#############################################################################
#
# $Id: FindSOWIN.cmake 4574 2014-01-09 08:48:51Z fspindle $
#
# This file is part of the ViSP software.
# Copyright (C) 2005 - 2014 by INRIA. All rights reserved.
# 
# This software is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# ("GPL") version 2 as published by the Free Software Foundation.
# See the file LICENSE.txt at the root directory of this source
# distribution for additional information about the GNU GPL.
#
# For using ViSP with software that can not be combined with the GNU
# GPL, please contact INRIA about acquiring a ViSP Professional 
# Edition License.
#
# See http://www.irisa.fr/lagadic/visp/visp.html for more information.
# 
# This software was developed at:
# INRIA Rennes - Bretagne Atlantique
# Campus Universitaire de Beaulieu
# 35042 Rennes Cedex
# France
# http://www.irisa.fr/lagadic
#
# If you have questions regarding the use of this file, please contact
# INRIA at visp@inria.fr
# 
# This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
# WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
#
# Description:
# Try to find SoQt library.
# Once run this will define: 
#
# SOWIN_FOUND
# SOWIN_INCLUDE_DIRS
# SOWIN_LIBRARIES
# SOWIN_LIBRARY_RELEASE
# SOWIN_LIBRARY_DEBUG
#
# Authors:
# Fabien Spindler
# Anthony Saunier
#
#############################################################################

set(SOWIN_FOUND FALSE)

if(WIN32)
  FIND_LIBRARY(SOWIN_LIBRARY_RELEASE
    NAMES sowin1 #only shared libraries under windows
    PATHS
    "$ENV{COINDIR}/lib"
    "$ENV{COIN_DIR}/lib"
    "$ENV{SOWIN_DIR}/lib"
    )
  FIND_LIBRARY(SOWIN_LIBRARY_DEBUG
    NAMES sowin1d #only shared libraries under windows
    PATHS
    "$ENV{COINDIR}/lib"
    "$ENV{COIN_DIR}/lib"
    "$ENV{SOWIN_DIR}/lib"
    )  

  FIND_PATH(SOWIN_INCLUDE_DIR Inventor/Win/SoWin.h
    "$ENV{COINDIR}/include"
    "$ENV{COIN_DIR}/include"
    "$ENV{SOWIN_DIR}/include"
    )
 
  ## --------------------------------
  set(SOWIN_LIBRARIES "")

  if(SOWIN_LIBRARY_DEBUG)
    list(APPEND SOWIN_LIBRARIES debug ${SOWIN_LIBRARY_DEBUG})
  endif()
  if(SOWIN_LIBRARY_RELEASE)
    list(APPEND SOWIN_LIBRARIES optimized ${SOWIN_LIBRARY_RELEASE})
  endif()
  IF(SOWIN_LIBRARIES AND SOWIN_INCLUDE_DIR)
    set(SOWIN_INCLUDE_DIRS ${SOWIN_INCLUDE_DIR})
    set(SOWIN_FOUND TRUE)
  else()
    set(SOWIN_FOUND FALSE)
  endif()

endif(WIN32)

MARK_AS_ADVANCED(
  SOWIN_LIBRARY_DEBUG
  SOWIN_LIBRARY_RELEASE
  SOWIN_INCLUDE_DIR
)
