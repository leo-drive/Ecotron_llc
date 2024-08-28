/******************************************************************************
 * Copyright (C),
 * File name:         ASW_IO_Init.c
 *   <Author>         <Version>        <Date>
 *   HXL              0.2             2018-5-29
 * Description:
 * Develop pack:
 * Function List:
 ******************************************************************************/

/******************************************************************************
   Includes
 ******************************************************************************/
#include "Abstraction_HLSO.h"
#include "ASW_IO_Init.h"
#include <string.h>
#include "Ecotron.h"
#include "HLSO.h"
#include "TIM.h"
#include "Abstraction_OPWM.h"

/******************************************************************************
 *   Function:           F_EH2175_HLSO_init
 *   Description:
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
void F_EH2175_HLSO_init(void)
{
  HLSO_Config config;
  memset((void *)&config,0,sizeof(HLSO_Config));

#define OPWM_LSO21ConfType             config.Ch_LSO_P01
#define OPWM_LSO21ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel1
#define OPWM_LSO22ConfType             config.Ch_LSO_P02
#define OPWM_LSO22ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel2
#define OPWM_LSO23ConfType             config.Ch_LSO_P03
#define OPWM_LSO23ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel3
#define OPWM_LSO24ConfType             config.Ch_LSO_P04
#define OPWM_LSO24ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel4
#define OPWM_LSO25ConfType             config.Ch_LSO_P05
#define OPWM_LSO25ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel5
#define OPWM_LSO26ConfType             config.Ch_LSO_P06
#define OPWM_LSO26ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel6
#define OPWM_LSO27ConfType             config.Ch_LSO_P07
#define OPWM_LSO27ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel7
#define OPWM_LSO28ConfType             config.Ch_LSO_P08
#define OPWM_LSO28ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel8
#define OPWM_LSO29ConfType             config.Ch_LSO_P09
#define OPWM_LSO29ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel9
#define OPWM_LSO30ConfType             config.Ch_LSO_P10
#define OPWM_LSO30ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel10

  /***************************************************/
#define OPWM_HSO07ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel11
#define OPWM_HSO08ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel12
#define OPWM_HSO09ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel13
#define OPWM_HSO10ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel14
#define OPWM_HSO05ConfPWNEn            config.GtmAtomChanEn.PwmEn.Chan.channel15

  /*************************************************************************/
#define OPWM_L1ConfPWNEn               config.GtmAtomChanEn.PwmEn.Chan.channel11
#define OPWM_L2ConfPWNEn               config.GtmAtomChanEn.PwmEn.Chan.channel12
#define OPWM_H1ConfPWNEn               config.GtmAtomChanEn.PwmEn.Chan.channel13
#define OPWM_H2ConfPWNEn               config.GtmAtomChanEn.PwmEn.Chan.channel14

  /////////////////////////////////////////////////////////////////////////////
  config.Ch_LSO_01= HLSO_TYPE_IO;
  config.Ch_LSO_02= HLSO_TYPE_IO;
  config.Ch_LSO_03= HLSO_TYPE_IO;

  /////////////////////////////////////////////////////////////////////////////
  config.Ch_LSO_P01= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel1 = 0;
  config.Ch_LSO_P02= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel2 = 0;
  config.Ch_LSO_P03= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel3 = 0;
  config.Ch_LSO_P04= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel4 = 0;
  config.Ch_LSO_P05= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel5 = 0;
  config.Ch_LSO_P06= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel6 = 0;
  config.Ch_LSO_P07= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel7 = 0;
  config.Ch_LSO_P08= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel8 = 0;
  config.Ch_LSO_P09= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel9 = 0;
  config.Ch_LSO_P10= HLSO_TYPE_SPI;
  config.GtmAtomChanEn.PwmEn.Chan.channel10 = 0;
  config.GtmAtomChanEn.PwmEn.Chan.channel11 = 0;
  config.GtmAtomChanEn.PwmEn.Chan.channel12 = 0;
  config.GtmAtomChanEn.PwmEn.Chan.channel13 = 0;
  config.GtmAtomChanEn.PwmEn.Chan.channel14 = 0;

  /////////////////////////////////////////////////////////////////////////////
  F_Abstracton_HLSO_Init(&config);
  F_GtmTim_Init();
}

/******************************************************************************
 *   Function:
 *   Description:
 *   Input:
 *   Output:
 *   Return:
 *   Others:
 ******************************************************************************/
void F_ASW_IO_init(void)
{
  F_EH2175_HLSO_init();
}
