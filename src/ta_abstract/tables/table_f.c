/* TA-LIB Copyright (c) 1999-2025, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*********************************************************************
 * This file contains only TA functions starting with the letter 'F' *
 *********************************************************************/
#include <stddef.h>
#include "ta_abstract.h"
#include "ta_def_ui.h"

/* Follow the 3 steps defined below for adding a new TA Function to this
 * file.
 */

/****************************************************************************
 * Step 1 - Define here the interface to your TA functions with
 *          the macro DEF_FUNCTION.
 *
 ****************************************************************************/

/* Floor BEGIN */
DEF_MATH_UNARY_OPERATOR( FLOOR, "Vector Floor", "Floor" )
/* Floor END */

/* FLYA BEGIN */
/* Body ratio is used for long body comparison (how many times longer than average of 10 previous candles) */
const TA_RealRange TA_DEF_BodyRatioPositive =
{
   0.00,  /* min */
   TA_REAL_MAX,  /* max */
   2,    /* precision */
   0.5,  /* suggested start */
   2.0,  /* suggested end */
   0.1   /* suggested increment */
};

const TA_OptInputParameterInfo TA_DEF_UI_BodyRatio =
{
   TA_OptInput_RealRange, /* type */
   "optInBodyRatio",      /* paramName */
   0,                     /* flags */

   "Body Ratio",          /* displayName */
   (const void *)&TA_DEF_BodyRatioPositive, /* dataSet */
   1.0, /* defaultValue */
   "Body ratio multiplier for average body comparison", /* hint */

   NULL /* CamelCase name */
};

/* Volume ratio is used for high volume comparison (how many times more than average of 20 previous candles) */
const TA_RealRange TA_DEF_VolumeRatioPositive =
{
   0.00,  /* min */
   TA_REAL_MAX,  /* max */
   2,    /* precision */
   0.5,  /* suggested start */
   3.0,  /* suggested end */
   0.1   /* suggested increment */
};

const TA_OptInputParameterInfo TA_DEF_UI_VolumeRatio =
{
   TA_OptInput_RealRange, /* type */
   "optInVolumeRatio",    /* paramName */
   0,                     /* flags */

   "Volume Ratio",        /* displayName */
   (const void *)&TA_DEF_VolumeRatioPositive, /* dataSet */
   1.0, /* defaultValue */
   "Volume ratio multiplier for average volume comparison", /* hint */

   NULL /* CamelCase name */
};

static const TA_InputParameterInfo    *TA_FLYA_Inputs[]    =
{
  &TA_DEF_UI_Input_Price_OHLCV,
  NULL
};

static const TA_OutputParameterInfo   *TA_FLYA_Outputs[]   =
{
  &TA_DEF_UI_Output_Integer,
  NULL
};

static const TA_OptInputParameterInfo *TA_FLYA_OptInputs[] =
{ &TA_DEF_UI_BodyRatio,
  &TA_DEF_UI_VolumeRatio,
  NULL
};

DEF_FUNCTION( FLYA,                             /* name */
              TA_GroupId_PatternRecognition,    /* groupId */
              "Full Yang (Long White Candle with High Volume)", /* hint */
              "Flya",                           /* CamelCase name */
              0                                 /* flags */
             );
/* FLYA END */

/* FLYI BEGIN */
static const TA_InputParameterInfo    *TA_FLYI_Inputs[]    =
{
  &TA_DEF_UI_Input_Price_OHLCV,
  NULL
};

static const TA_OutputParameterInfo   *TA_FLYI_Outputs[]   =
{
  &TA_DEF_UI_Output_Integer,
  NULL
};

static const TA_OptInputParameterInfo *TA_FLYI_OptInputs[] =
{ &TA_DEF_UI_BodyRatio,
  &TA_DEF_UI_VolumeRatio,
  NULL
};

DEF_FUNCTION( FLYI,                             /* name */
              TA_GroupId_PatternRecognition,    /* groupId */
              "Full Yin (Long Black Candle with High Volume)", /* hint */
              "Flyi",                           /* CamelCase name */
              0                                 /* flags */
             );
/* FLYI END */


/****************************************************************************
 * Step 2 - Add your TA function to the table.
 *          Keep in alphabetical order. Must be NULL terminated.
 ****************************************************************************/
const TA_FuncDef *TA_DEF_TableF[] =
{
   ADD_TO_TABLE(FLYA),
   ADD_TO_TABLE(FLYI),
   ADD_TO_TABLE(FLOOR),
   NULL
};


/* Do not modify the following line. */
const unsigned int TA_DEF_TableFSize =
              ((sizeof(TA_DEF_TableF)/sizeof(TA_FuncDef *))-1);


/****************************************************************************
 * Step 3 - Make sure "gen_code" is executed for generating all other
 *          source files derived from this one.
 *          You can then re-compile the library as usual and you are done!
 ****************************************************************************/
