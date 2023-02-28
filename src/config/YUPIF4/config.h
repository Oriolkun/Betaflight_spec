/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

/*
   This file has been auto generated from unified-targets repo.

   The auto generation is transitional only, please remove this comment once the file is edited.
*/

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        YUPIF4
#define MANUFACTURER_ID   YUPF

#define USE_GYRO_FAST_KALMAN
#define USE_GYRO_SPI_MPU6500
#define USE_GYRO_SPI_ICM20689
#define USE_ACC_SPI_MPU6500
#define USE_ACC_SPI_ICM20689
#define USE_MAX7456
#define USE_SDCARD

#define BEEPER_PIN           PC9
#define MOTOR1_PIN           PA0
#define MOTOR2_PIN           PA1
#define MOTOR3_PIN           PA2
#define MOTOR4_PIN           PA3
#define MOTOR5_PIN           PB0
#define MOTOR6_PIN           PB7
#define RX_PPM_PIN           PC8
#define LED_STRIP_PIN        PB7
#define UART1_TX_PIN         PA9
#define UART3_TX_PIN         PB10
#define UART6_TX_PIN         PC6
#define UART11_TX_PIN        PB0
#define UART1_RX_PIN         PA10
#define UART3_RX_PIN         PB11
#define UART6_RX_PIN         PC7
#define UART11_RX_PIN        PB1
#define INVERTER1_PIN        PB12
#define INVERTER6_PIN        PB15
#define LED0_PIN             PB6
#define LED1_PIN             PB4
#define LED2_PIN             PB5
#define SPI1_SCK_PIN         PA5
#define SPI3_SCK_PIN         PC10
#define SPI1_MISO_PIN        PA6
#define SPI3_MISO_PIN        PC11
#define SPI1_MOSI_PIN        PA7
#define SPI3_MOSI_PIN        PC12
#define ESCSERIAL_PIN        PC8
#define CAMERA_CONTROL_PIN   PB7
#define ADC_VBAT_PIN         PC1
#define ADC_RSSI_PIN         PC0
#define ADC_CURR_PIN         PC2
#define SDCARD_CS_PIN        PA15
#define SDCARD_DETECT_PIN    PD2
#define MAX7456_SPI_CS_PIN   PA14
#define GYRO_1_EXTI_PIN      NONE
#define GYRO_1_CS_PIN        PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PC8 , 2,  0) \
    TIMER_PIN_MAP( 1, PA0 , 2,  0) \
    TIMER_PIN_MAP( 2, PA1 , 2,  0) \
    TIMER_PIN_MAP( 3, PA2 , 1,  0) \
    TIMER_PIN_MAP( 4, PA3 , 1,  1) \
    TIMER_PIN_MAP( 5, PB0 , 2,  0) \
    TIMER_PIN_MAP( 6, PB7 , 1,  0) \
    TIMER_PIN_MAP( 7, PB1 , 2,  0) \
    TIMER_PIN_MAP( 8, PC9 , 1,  0) \
    TIMER_PIN_MAP( 9, PB14, 3, -1) \



#define SPI3_TX_DMA_OPT     0
#define ADC1_DMA_OPT        1

//TODO #define BLACKBOX_DEVICE NONE
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
//TODO #define IBATA_SCALE 150
//TODO #define SDCARD_DETECT_INVERTED ON
#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE SPI3
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI1
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW90_DEG
#define GYRO_1_ALIGN_YAW 900
