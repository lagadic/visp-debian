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
 * Le module "vwstack.h" contient les macros, les types et
 * les specifications des procedures de gestion de la pile
 * des points de vue (VieW STACK).
 *
 * Authors:
 * Jean-Luc CORRE
 *
 *****************************************************************************/

#ifndef vpVwstack_H
#define vpVwstack_H

#include <visp3/core/vpConfig.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include "vpView.h"

void		fprintf_vwstack (FILE *fp, char *argv);
View_parameters	*get_vwstack (void);
void		load_vwstack (View_parameters *vp);
void		pop_vwstack (void);
void		push_vwstack (void);
void		swap_vwstack (void);
void		add_vwstack (const char* path, ...);

#endif
#endif
