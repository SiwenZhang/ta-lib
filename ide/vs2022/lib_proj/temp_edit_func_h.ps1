$file = "C:\Users\buuud\src\ta-lib\include\ta_func.h"
$content = Get-Content -Raw $file
$old = "TA_LIB_API int TA_VWAP_Lookback( void );`r`n`r`n`r`n/*`r`n * TA_VAR - Variance"
$new = "TA_LIB_API int TA_VWAP_Lookback( void );`r`n`r`n`r`n/*`r`n * TA_VWAPFUTU - Volume Weighted Average Price (Futu)`r`n * `r`n * Input  = High, Low, Close, Volume, double`r`n * Output = double`r`n * `r`n */`r`nTA_LIB_API TA_RetCode TA_VWAPFUTU( int    startIdx,`r`n                                    int    endIdx,`r`n                                               const double inHigh[],`r`n                                               const double inLow[],`r`n                                               const double inClose[],`r`n                                               const double inVolume[],`r`n                                               const double inReal[],`r`n                                               int          *outBegIdx,`r`n                                               int          *outNBElement,`r`n                                               double        outReal[] );`r`n`r`nTA_LIB_API TA_RetCode TA_S_VWAPFUTU( int    startIdx,`r`n                                      int    endIdx,`r`n                                                 const float  inHigh[],`r`n                                                 const float  inLow[],`r`n                                                 const float  inClose[],`r`n                                                 const float  inVolume[],`r`n                                                 const float  inReal[],`r`n                                                 int          *outBegIdx,`r`n                                                 int          *outNBElement,`r`n                                                 double        outReal[] );`r`n`r`nTA_LIB_API int TA_VWAPFUTU_Lookback( void );`r`n`r`n`r`n/*`r`n * TA_VAR - Variance"
if($content.Contains($old)){
    $content = $content.Replace($old, $new)
    [System.IO.File]::WriteAllText($file, $content)
    Write-Host "SUCCESS"
} else {
    Write-Host "PATTERN NOT FOUND"
}
