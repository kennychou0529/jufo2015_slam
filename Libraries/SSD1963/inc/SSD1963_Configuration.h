/*********************************************************************
 *
 *	Hardware specific definitions
 *
 *********************************************************************
 * FileName:        HardwareProfile_xxx.h
 * Dependencies:    None
 * Processor:       PIC24F, PIC24H, dsPIC, PIC32
 * Compiler:        Microchip C32 v1.00 or higher
 *	                 Microchip C30 v3.01 or higher
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright ?2002-2009 Microchip Technology Inc.  All rights 
 * reserved.
 *
 * Microchip licenses to you the right to use, modify, copy, and 
 * distribute: 
 * (i)  the Software when embedded on a Microchip microcontroller or 
 *      digital signal controller product (�Device? which is 
 *      integrated into Licensee�s product; or
 * (ii) ONLY the Software driver source files ENC28J60.c and 
 *      ENC28J60.h ported to a non-Microchip device used in 
 *      conjunction with a Microchip ethernet controller for the 
 *      sole purpose of interfacing with the ethernet controller. 
 *
 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS?WITHOUT 
 * WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
 * LIMITATION, ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL 
 * MICROCHIP BE LIABLE FOR ANY INCIDENTAL, SPECIAL, INDIRECT OR 
 * CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF 
 * PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY OR SERVICES, ANY CLAIMS 
 * BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE 
 * THEREOF), ANY CLAIMS FOR INDEMNITY OR CONTRIBUTION, OR OTHER 
 * SIMILAR COSTS, WHETHER ASSERTED ON THE BASIS OF CONTRACT, TORT 
 * (INCLUDING NEGLIGENCE), BREACH OF WARRANTY, OR OTHERWISE.
 *
 *
 * Author               Date		Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Howard Schlunder		10/03/06	Original, copied from Compiler.h
 * Jayanth Murthy       06/25/09    dsPIC & PIC24H support 
 * Pradeep Budagutta	15 Sep 2009 Added PIC24FJ256DA210 Development Board Support
 ********************************************************************/

/*
******************************************************************************
* Revision:
* This file modified for Solomon SSD1963 driver development
* Programmer: John Leung
* Company: TechToys Co.
* Web: www.TechToys.com.hk
* Date: 16th Jan 2010
* (1) Add 	support for the hardware platform PIC24/32 Eval Rev2C with
*			PIC32MX360F512L MCU onboard + SSD1963 Eval Rev2A.
*			TFT panels can be TY700TFT800480 (7" TFT), TY430TFT480272 (4.3" TFT),
*			LVC75Z779V1S (3.5" TFT) with #define in this file
******************************************************************************
*/

#ifndef __HARDWARE_PROFILE_H
    #define __HARDWARE_PROFILE_H


/*********************************************************************
* START OF GRAPHICS RELATED MACROS
********************************************************************/

#define USE_16BIT_PMP
#define COLOR_DEPTH 16

/*********************************************************************
* DISPLAY SETTINGS 
********************************************************************/

/*********************************************************************
* Overview: Image orientation (can be 0, 90, 180, 270 degrees).
*********************************************************************/
#define DISP_ORIENTATION    0
/*********************************************************************
* Overview: Horizontal and vertical display resolution
*                  (from the glass datasheet).
*********************************************************************/
#define DISP_HOR_RESOLUTION 480
#define DISP_VER_RESOLUTION 272
/*********************************************************************
* Overview: Horizontal synchronization timing in pixels
*                  (from the glass datasheet).
*********************************************************************/
#define DISP_HOR_PULSE_WIDTH		1
#define DISP_HOR_BACK_PORCH			43
#define DISP_HOR_FRONT_PORCH		8
/*********************************************************************
* Overview: Vertical synchronization timing in lines
*                  (from the glass datasheet).
*********************************************************************/
#define DISP_VER_PULSE_WIDTH		10
#define DISP_VER_BACK_PORCH			12
#define DISP_VER_FRONT_PORCH		4
/*********************************************************************
* Definition for Data Bus interface for SSD1963
* Hardware dependent!
*********************************************************************/
#define DB0TO7GPIO GPIOE //Connects DB0..7 to GPIOn0..7
#define DB0TO7RCC RCC_AHB1Periph_GPIOE
#define DB8TO15GPIO GPIOE //Connects DB8..15 to GPIOn8..15
#define DB8TO15RCC RCC_AHB1Periph_GPIOE
/*********************************************************************
* Definition for direction interface for SSD1963
* Hardware dependent!
*********************************************************************/
#define DIR_GPIO GPIOD
#define DIR_RCC RCC_AHB1Periph_GPIOD
#define LCD_RS 	GPIO_Pin_8
#define LCD_WR	GPIO_Pin_9
#define LCD_CS	GPIO_Pin_10
#define LCD_RST	GPIO_Pin_11
#define LCD_RD	GPIO_Pin_12
/* End of definition for DISPLAY_PANEL == TY700TFT800480 */


/*********************************************************************
* IOS FOR THE DISPLAY CONTROLLER
*********************************************************************/


#endif // __HARDWARE_PROFILE_H

