/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v15.0
processor: MCXA156
package_id: MCXA156VLL
mcu_data: ksdk2_0
processor_version: 0.15.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33_core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '63', peripheral: GPIO3, signal: 'GPIO, 12', pin_signal: P3_12/LPUART2_RTS_B/LPUART3_TXD/CT1_MAT2/PWM0_X0/FLEXIO0_D20/PWM1_A2, direction: OUTPUT, slew_rate: fast,
    open_drain: disable, drive_strength: low, pull_select: down, pull_enable: disable, input_buffer: enable, invert_input: normal}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* GPIO3: Peripheral clock is enabled */
    CLOCK_EnableClock(kCLOCK_GateGPIO3);
    /* PORT3: Peripheral clock is enabled */
    CLOCK_EnableClock(kCLOCK_GatePORT3);
    /* GPIO3 peripheral is released from reset */
    RESET_ReleasePeripheralReset(kGPIO3_RST_SHIFT_RSTn);
    /* PORT3 peripheral is released from reset */
    RESET_ReleasePeripheralReset(kPORT3_RST_SHIFT_RSTn);

    gpio_pin_config_t gpio3_pin63_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PIO3_12 (pin 63)  */
    GPIO_PinInit(GPIO3, 12U, &gpio3_pin63_config);

    const port_pin_config_t port3_12_pin63_config = {/* Internal pull-up/down resistor is disabled */
                                                     kPORT_PullDisable,
                                                     /* Low internal pull resistor value is selected. */
                                                     kPORT_LowPullResistor,
                                                     /* Fast slew rate is configured */
                                                     kPORT_FastSlewRate,
                                                     /* Passive input filter is disabled */
                                                     kPORT_PassiveFilterDisable,
                                                     /* Open drain output is disabled */
                                                     kPORT_OpenDrainDisable,
                                                     /* Low drive strength is configured */
                                                     kPORT_LowDriveStrength,
                                                     /* Normal drive strength is configured */
                                                     kPORT_NormalDriveStrength,
                                                     /* Pin is configured as P3_12 */
                                                     kPORT_MuxAlt0,
                                                     /* Digital input enabled */
                                                     kPORT_InputBufferEnable,
                                                     /* Digital input is not inverted */
                                                     kPORT_InputNormal,
                                                     /* Pin Control Register fields [15:0] are not locked */
                                                     kPORT_UnlockRegister};
    /* PORT3_12 (pin 63) is configured as P3_12 */
    PORT_SetPinConfig(PORT3, 12U, &port3_12_pin63_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
