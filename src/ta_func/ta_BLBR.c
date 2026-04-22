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

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  BUD      Bud Davis
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  010625 BUD  Creation
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */ #elif defined( _RUST )
/* Generated */    #include "ta_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
/* Generated */    impl Core {
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::BlbrLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int blbrLookback( void )
/* Generated */ 
/* Generated */ #elif defined( _RUST )
/* Generated */ pub fn blbr_lookback() -> i32
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_BLBR_Lookback( void )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   int highLookback;
   int lowLookback;

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* No optional parameters to validate */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* Lookback is the maximum of the two EMA lookbacks. */
   highLookback = 24 - 1 + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_EMA,Ema);
   lowLookback  = 23 - 1 + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_EMA,Ema);
   return (highLookback > lowLookback) ? highLookback : lowLookback;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_BLBR - Bull Bear Bands (24 EMA of High, 23 EMA of Low)
 * 
 * Input  = High, Low
 * Output = double, double
 * 
 * Computes a 24-period EMA of high prices (upper line) and a
 * 23-period EMA of low prices (lower line).
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Blbr( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<double>^ inHigh,
/* Generated */                                             SubArray<double>^ inLow,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<double>^  outRealUpperEMA,
/* Generated */                                             SubArray<double>^  outRealLowerEMA )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Blbr( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<double>^ inHigh,
/* Generated */                                             cli::array<double>^ inLow,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<double>^  outRealUpperEMA,
/* Generated */                                             cli::array<double>^  outRealLowerEMA )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode blbr( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             double       inHigh[],
/* Generated */                             double       inLow[],
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             double        outRealUpperEMA[],
/* Generated */                             double        outRealLowerEMA[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ pub fn blbr(startIdx: usize,
/* Generated */                    endIdx: usize,
/* Generated */                    outBegIdx: &mut usize,
/* Generated */                    outNBElement: &mut usize,
/* Generated */                    outRealUpperEMA: &mut [f64],
/* Generated */                    outRealLowerEMA: &mut [f64]) -> RetCode
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_BLBR( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                                  const double inHigh[],
/* Generated */                                                  const double inLow[],
/* Generated */                                                  int          *outBegIdx,
/* Generated */                                                  int          *outNBElement,
/* Generated */                                                  double        outRealUpperEMA[],
/* Generated */                                                  double        outRealLowerEMA[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
   TA_RetCode retCode;
   int lookbackTotal;
   int highBegIdx, highNBElement;
   int lowBegIdx, lowNBElement;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */ #if defined( _RUST )
/* Generated */    if( endIdx < startIdx ) {
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */    }
/* Generated */ #else
/* Generated */    if( startIdx < 0 ) {
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    }
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx)) {
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */    }
/* Generated */ #endif
/* Generated */ 
/* Generated */ #if defined( _RUST )
/* Generated */ 
/* Generated */ #else
/* Generated */    #if !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outRealUpperEMA )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    if( !outRealLowerEMA )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Identify the minimum number of price bars needed
	* to calculate at least one output for both EMAs.
	*/
   lookbackTotal = LOOKBACK_CALL(BLBR)();

   /* Move up the start index if there is not enough initial data. */
   if( startIdx < lookbackTotal )
	  startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
	  VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
	  VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
	  return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   /* Compute the 24-period EMA of the high prices into outRealUpperEMA. */
   retCode = FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inHigh,
									 24, PER_TO_K( 24 ),
									 &highBegIdx, &highNBElement,
									 outRealUpperEMA );

   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
   {
	  VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
	  VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
	  return retCode;
   }

   /* Compute the 23-period EMA of the low prices into outRealLowerEMA. */
   retCode = FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inLow,
									 23, PER_TO_K( 23 ),
									 &lowBegIdx, &lowNBElement,
									 outRealLowerEMA );

   if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
   {
	  VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
	  VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
	  return retCode;
   }

   /* Both EMAs produce the same number of output values starting
	* at the same index because we adjusted startIdx to the combined
	* lookback before invoking either EMA.
	*/
   (void)highBegIdx;
   (void)lowBegIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
   VALUE_HANDLE_DEREF(outNBElement) = highNBElement < lowNBElement ? highNBElement : lowNBElement;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Blbr( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<float>^ inHigh,
/* Generated */                                             SubArray<float>^ inLow,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<double>^  outRealUpperEMA,
/* Generated */                                             SubArray<double>^  outRealLowerEMA )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Blbr( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<float>^ inHigh,
/* Generated */                                             cli::array<float>^ inLow,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<double>^  outRealUpperEMA,
/* Generated */                                             cli::array<double>^  outRealLowerEMA )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode blbr( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             float        inHigh[],
/* Generated */                             float        inLow[],
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             double        outRealUpperEMA[],
/* Generated */                             double        outRealLowerEMA[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ pub fn blbr_s(startIdx: usize,
/* Generated */                      endIdx: usize,
/* Generated */                      outBegIdx: &mut usize,
/* Generated */                      outNBElement: &mut usize,
/* Generated */                      outRealUpperEMA: &mut [f64],
/* Generated */                      outRealLowerEMA: &mut [f64]) -> RetCode
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_BLBR( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                              const float  inHigh[],
/* Generated */                              const float  inLow[],
/* Generated */                              int          *outBegIdx,
/* Generated */                              int          *outNBElement,
/* Generated */                              double        outRealUpperEMA[],
/* Generated */                              double        outRealLowerEMA[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    TA_RetCode retCode;
/* Generated */    int lookbackTotal;
/* Generated */    int highBegIdx, highNBElement;
/* Generated */    int lowBegIdx, lowNBElement;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */  #if defined( _RUST )
/* Generated */     if( endIdx < startIdx ) {
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     }
/* Generated */  #else
/* Generated */     if( startIdx < 0 ) {
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     }
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx)) {
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     }
/* Generated */  #endif
/* Generated */  #if defined( _RUST )
/* Generated */  #else
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outRealUpperEMA )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     if( !outRealLowerEMA )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif
/* Generated */  #endif
/* Generated */  #endif
/* Generated */    lookbackTotal = LOOKBACK_CALL(BLBR)();
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inHigh,
/* Generated */                                      24, PER_TO_K( 24 ),
/* Generated */                                      &highBegIdx, &highNBElement,
/* Generated */                                      outRealUpperEMA );
/* Generated */    if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inLow,
/* Generated */                                      23, PER_TO_K( 23 ),
/* Generated */                                      &lowBegIdx, &lowNBElement,
/* Generated */                                      outRealLowerEMA );
/* Generated */    if( retCode != ENUM_VALUE(RetCode,TA_SUCCESS,Success) )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = highNBElement < lowNBElement ? highNBElement : lowNBElement;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ 
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
