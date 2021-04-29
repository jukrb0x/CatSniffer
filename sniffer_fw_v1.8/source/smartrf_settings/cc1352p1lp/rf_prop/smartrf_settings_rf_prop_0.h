#ifndef _SMARTRF_SETTINGS_RF_PROP_0_H_
#define _SMARTRF_SETTINGS_RF_PROP_0_H_

//*********************************************************************************
// Generated by SmartRF Studio version 2.13.0 (build #156- CZ settings for CC13x2R and CC26x2R)
// The applied template is compatible with CC13x2 SDK 2.40.xx.xx
// Device: CC1352P Rev. 2.1
//
//*********************************************************************************
#include <ti/devices/DeviceFamily.h>
#include DeviceFamily_constructPath(driverlib/rf_mailbox.h)
#include DeviceFamily_constructPath(driverlib/rf_common_cmd.h)
#include DeviceFamily_constructPath(driverlib/rf_prop_cmd.h)
#include <ti/drivers/rf/RF.h>


// TI-RTOS RF Mode Object
extern RF_Mode RFProp0_mode;


// RF Core API commands
extern rfc_CMD_PROP_RADIO_DIV_SETUP_PA_t RFProp0_cmdPropRadioDivSetup;
extern rfc_CMD_FS_t RFProp0_cmdFs;
extern rfc_CMD_PROP_TX_t RFProp0_cmdPropTx;
extern rfc_CMD_PROP_RX_t RFProp0_cmdPropRx;


// RF Core API Overrides
extern uint32_t RFProp0_pOverrides[];


#endif // _SMARTRF_SETTINGS_RF_PROP_0_H_

