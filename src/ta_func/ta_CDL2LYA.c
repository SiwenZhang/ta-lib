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
/* Generated */ int Core::Cdl2lyaLookback( double        optInRatio )
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int cdl2lyaLookback( double        optInRatio )
/* Generated */ 
/* Generated */ #elif defined( _RUST )
/* Generated */ pub fn cdl2lya_lookback(
/* Generated */ optInRatio: f64) -> i32
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_CDL2LYA_Lookback( double        optInRatio )
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    if( optInRatio == TA_REAL_DEFAULT )
/* Generated */       optInRatio = 1.000000e+0;
/* Generated */    else if( (optInRatio < 0.000000e+0) || (optInRatio > 3.000000e+37) )
/* Generated */       return -1;
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

    UNUSED_VARIABLE(optInRatio);
    return 11;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Cdl2lya( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<double>^ inOpen,
/* Generated */                                             SubArray<double>^ inHigh,
/* Generated */                                             SubArray<double>^ inLow,
/* Generated */                                             SubArray<double>^ inClose,
/* Generated */                                             double        optInRatio,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl2lya( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<double>^ inOpen,
/* Generated */                                             cli::array<double>^ inHigh,
/* Generated */                                             cli::array<double>^ inLow,
/* Generated */                                             cli::array<double>^ inClose,
/* Generated */                                             double        optInRatio,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl2lya( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             double       inOpen[],
/* Generated */                             double       inHigh[],
/* Generated */                             double       inLow[],
/* Generated */                             double       inClose[],
/* Generated */                             double        optInRatio,
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ pub fn cdl2lya(startIdx: usize,
/* Generated */                    endIdx: usize,
/* Generated */                    optInRatio: f64,
/* Generated */                    outBegIdx: &mut usize,
/* Generated */                    outNBElement: &mut usize,
/* Generated */                    outInteger: &mut [i32]) -> RetCode
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_CDL2LYA( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                                  const double inOpen[],
/* Generated */                                                  const double inHigh[],
/* Generated */                                                  const double inLow[],
/* Generated */                                                  const double inClose[],
/* Generated */                                                  double        optInRatio,
/* Generated */                                                  int          *outBegIdx,
/* Generated */                                                  int          *outNBElement,
/* Generated */                                                  int           outInteger[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
    double BodyPeriodTotal1, BodyPeriodTotal2;
    int i, outIdx, BodyTrailingIdx1, BodyTrailingIdx2, lookbackTotal;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ #if defined( _RUST )
/* Generated */    if( endIdx < startIdx ) {
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */    }
/* Generated */ #else
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */ #endif
/* Generated */ #if defined( _RUST )
/* Generated */ #else
/* Generated */    #if !defined(_JAVA)
/* Generated */    if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif
/* Generated */    if( optInRatio == TA_REAL_DEFAULT )
/* Generated */       optInRatio = 1.000000e+0;
/* Generated */    else if( (optInRatio < 0.000000e+0) || (optInRatio > 3.000000e+37) )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outInteger )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif
/* Generated */ #endif
/* Generated */ #endif
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   lookbackTotal = LOOKBACK_CALL(CDL2LYA)(optInRatio);
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;
   if( startIdx > endIdx ) {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }

   BodyPeriodTotal1 = 0;
   BodyPeriodTotal2 = 0;
   BodyTrailingIdx1 = startIdx - 11;
   BodyTrailingIdx2 = startIdx - 10;

   i = BodyTrailingIdx1;
   while( i < startIdx - 1 ) {
        BodyPeriodTotal1 += TA_REALBODY(i);
        i++;
   }
   i = BodyTrailingIdx2;
   while( i < startIdx ) {
        BodyPeriodTotal2 += TA_REALBODY(i);
        i++;
   }
   i = startIdx;
   outIdx = 0;

   do {
        double avgBody1 = BodyPeriodTotal1 / 10.0;
        double avgBody2 = BodyPeriodTotal2 / 10.0;
        if( TA_CANDLECOLOR(i-1) == 1 &&
            TA_REALBODY(i-1) > avgBody1 * optInRatio &&
            TA_CANDLECOLOR(i) == 1 &&
            TA_REALBODY(i) > avgBody2 * optInRatio )
            outInteger[outIdx++] = 100;
        else
            outInteger[outIdx++] = 0;
        BodyPeriodTotal1 += TA_REALBODY(i-1) - TA_REALBODY(BodyTrailingIdx1);
        BodyPeriodTotal2 += TA_REALBODY(i) - TA_REALBODY(BodyTrailingIdx2);
        i++;
        BodyTrailingIdx1++;
        BodyTrailingIdx2++;
   } while( i <= endIdx );

   VALUE_HANDLE_DEREF(outNBElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
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
/* Generated */ enum class Core::RetCode Core::Cdl2lya( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             SubArray<float>^ inOpen,
/* Generated */                                             SubArray<float>^ inHigh,
/* Generated */                                             SubArray<float>^ inLow,
/* Generated */                                             SubArray<float>^ inClose,
/* Generated */                                             double        optInRatio,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             SubArray<int>^  outInteger )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Cdl2lya( int    startIdx,
/* Generated */                                             int    endIdx,
/* Generated */                                             cli::array<float>^ inOpen,
/* Generated */                                             cli::array<float>^ inHigh,
/* Generated */                                             cli::array<float>^ inLow,
/* Generated */                                             cli::array<float>^ inClose,
/* Generated */                                             double        optInRatio,
/* Generated */                                             [Out]int%    outBegIdx,
/* Generated */                                             [Out]int%    outNBElement,
/* Generated */                                             cli::array<int>^  outInteger )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode cdl2lya( int    startIdx,
/* Generated */                             int    endIdx,
/* Generated */                             float        inOpen[],
/* Generated */                             float        inHigh[],
/* Generated */                             float        inLow[],
/* Generated */                             float        inClose[],
/* Generated */                             double        optInRatio,
/* Generated */                             MInteger     outBegIdx,
/* Generated */                             MInteger     outNBElement,
/* Generated */                             int           outInteger[] )
/* Generated */ #elif defined( _RUST )
/* Generated */ pub fn cdl2lya_s(startIdx: usize,
/* Generated */                      endIdx: usize,
/* Generated */                      optInRatio: f64,
/* Generated */                      outBegIdx: &mut usize,
/* Generated */                      outNBElement: &mut usize,
/* Generated */                      outInteger: &mut [i32]) -> RetCode
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_CDL2LYA( int    startIdx,
/* Generated */                              int    endIdx,
/* Generated */                              const float  inOpen[],
/* Generated */                              const float  inHigh[],
/* Generated */                              const float  inLow[],
/* Generated */                              const float  inClose[],
/* Generated */                              double        optInRatio,
/* Generated */                              int          *outBegIdx,
/* Generated */                              int          *outNBElement,
/* Generated */                              int           outInteger[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */     double BodyPeriodTotal1, BodyPeriodTotal2;
/* Generated */     int i, outIdx, BodyTrailingIdx1, BodyTrailingIdx2, lookbackTotal;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */  #if defined( _RUST )
/* Generated */     if( endIdx < startIdx )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */  #else
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */  #endif
/* Generated */  #if defined( _RUST )
/* Generated */  #else
/* Generated */     #if !defined(_JAVA)
/* Generated */     if(!inOpen||!inHigh||!inLow||!inClose)
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif
/* Generated */     if( optInRatio == TA_REAL_DEFAULT )
/* Generated */        optInRatio = 1.000000e+0;
/* Generated */     else if( (optInRatio < 0.000000e+0) || (optInRatio > 3.000000e+37) )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outInteger )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif
/* Generated */  #endif
/* Generated */  #endif
/* Generated */    lookbackTotal = LOOKBACK_CALL(CDL2LYA)(optInRatio);
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx ) {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    BodyPeriodTotal1 = 0;
/* Generated */    BodyPeriodTotal2 = 0;
/* Generated */    BodyTrailingIdx1 = startIdx - 11;
/* Generated */    BodyTrailingIdx2 = startIdx - 10;
/* Generated */    i = BodyTrailingIdx1;
/* Generated */    while( i < startIdx - 1 ) {
/* Generated */         BodyPeriodTotal1 += TA_REALBODY(i);
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = BodyTrailingIdx2;
/* Generated */    while( i < startIdx ) {
/* Generated */         BodyPeriodTotal2 += TA_REALBODY(i);
/* Generated */         i++;
/* Generated */    }
/* Generated */    i = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    do {
/* Generated */         double avgBody1 = BodyPeriodTotal1 / 10.0;
/* Generated */         double avgBody2 = BodyPeriodTotal2 / 10.0;
/* Generated */         if( TA_CANDLECOLOR(i-1) == 1 &&
/* Generated */             TA_REALBODY(i-1) > avgBody1 * optInRatio &&
/* Generated */             TA_CANDLECOLOR(i) == 1 &&
/* Generated */             TA_REALBODY(i) > avgBody2 * optInRatio )
/* Generated */             outInteger[outIdx++] = 100;
/* Generated */         else
/* Generated */             outInteger[outIdx++] = 0;
/* Generated */         BodyPeriodTotal1 += TA_REALBODY(i-1) - TA_REALBODY(BodyTrailingIdx1);
/* Generated */         BodyPeriodTotal2 += TA_REALBODY(i) - TA_REALBODY(BodyTrailingIdx2);
/* Generated */         i++;
/* Generated */         BodyTrailingIdx1++;
/* Generated */         BodyTrailingIdx2++;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/