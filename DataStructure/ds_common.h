/**
 * @file ds_common.h
 *
 * @brief This file contains macro definitions used in this project.
 *
 * $Id: ds_common.h 2012-02-01 17:21 $
 *
 * @author    Archie: http://lewtsi.github.com
 * @author    Email: archiex.archie@gmail.com
 *
 *
 * Copyright (c) 2012, I.M.G.
 */
 
#ifndef DS_MACRO_H
#define DS_MACRO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FLAG_TURE	1
#define FLAG_FALSE	0

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef enum{
	OPT_SUCCESS = 0,
	OPT_FAILURE = 0xFF,
	OPT_RESULT_A = 1,
	OPT_RESULT_B,
	OPT_RESULT_C,
	OPT_RESULT_D,
	OPT_RESULT_E,
	OPT_RESULT_F,
	OPT_RESULT_G
}opt_result_t;

#endif


