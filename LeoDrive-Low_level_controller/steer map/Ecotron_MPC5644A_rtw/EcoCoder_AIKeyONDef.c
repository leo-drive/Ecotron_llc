#include "rtwtypes.h"
#include "Abstraction_ADC.h"

boolean_T F_Abstr_DI_GetKeyValue(real32_T facAd2Volt,real32_T uKeyOffThr,
  real32_T uKeyOnHyst)
{
  static boolean_T lastVal= 0;
  boolean_T outVal= 0;
  real32_T voltkey;
  voltkey= F_Abstr_ADC_GetValue(ABS_ADC_27)*facAd2Volt;
  if (voltkey>(uKeyOnHyst+uKeyOffThr)) {
    outVal= 1;
  } else if (voltkey<uKeyOffThr) {
    outVal= 0;
  } else {
    outVal= lastVal;
  }

  lastVal= outVal;
  return outVal;
}
