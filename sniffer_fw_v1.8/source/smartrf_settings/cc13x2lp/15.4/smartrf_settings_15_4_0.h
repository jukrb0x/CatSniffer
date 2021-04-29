#ifndef _SMARTRF_SETTINGS_15_4_0_H_
#define _SMARTRF_SETTINGS_15_4_0_H_

//*********************************************************************************
// Generated by SmartRF Studio version 2.13.0 (build #156- CZ settings for CC13x2R and CC26x2R)
// The applied template is compatible with CC13x2 SDK 2.40.xx.xx
// Device: CC1352R Rev. 2.1
//
//*********************************************************************************
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/rf_mailbox.h)
#include DeviceFamily_constructPath(driverlib/rf_common_cmd.h)
#include DeviceFamily_constructPath(driverlib/rf_ieee_cmd.h)
#include <ti/drivers/rf/RF.h>


// TI-RTOS RF Mode Object
extern RF_Mode Ieee154_0_mode;


// RF Core API commands
extern rfc_CMD_RADIO_SETUP_t Ieee154_0_cmdRadioSetup;
extern rfc_CMD_FS_t Ieee154_0_cmdFs;
extern rfc_CMD_IEEE_TX_t Ieee154_0_cmdIeeeTx;
extern rfc_CMD_IEEE_RX_t Ieee154_0_cmdIeeeRx;


// RF Core API Overrides
extern uint32_t Ieee154_0_pOverrides[];


#endif // _SMARTRF_SETTINGS_15_4_0_H_

