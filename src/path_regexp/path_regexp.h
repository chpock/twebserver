/**
 * Copyright Jerily LTD. All Rights Reserved.
 * SPDX-FileCopyrightText: 2023 Neofytos Dimitriou (neo@jerily.cy)
 * SPDX-License-Identifier: MIT.
 */

#ifndef TWEBSERVER_PATH_REGEXP_H
#define TWEBSERVER_PATH_REGEXP_H

#include <tcl.h>
#include "../common.h"

int tws_PathToRegExp(Tcl_Interp *interp, const char *path, int path_len, int flags, Tcl_Obj **keysPtr, Tcl_RegExp *regexp);

#endif //TWEBSERVER_PATH_REGEXP_H
