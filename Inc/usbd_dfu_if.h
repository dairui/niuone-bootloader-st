/**
  ******************************************************************************
  * @file           : usbd_dfu_if.h
  * @brief          : Header for usbd_dfu_if file.
  ******************************************************************************
  * COPYRIGHT(c) 2016 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  * 1. Redistributions of source code must retain the above copyright notice,
  * this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  * this list of conditions and the following disclaimer in the documentation
  * and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of its contributors
  * may be used to endorse or promote products derived from this software
  * without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_DFU_IF_H
#define __USBD_DFU_IF_H

#ifdef __cplusplus
 extern "C" {
#endif
/* Includes ------------------------------------------------------------------*/
#include "usbd_dfu.h"
/* USER CODE BEGIN INCLUDE */
/* USER CODE END INCLUDE */

/* Base address of the Flash sectors */
#define ADDR_FLASH_SECTOR_0     ((uint32_t)0x08000000) /* Base @ of Sector 0, 32 Kbytes */
#define ADDR_FLASH_SECTOR_1     ((uint32_t)0x08008000) /* Base @ of Sector 1, 32 Kbytes */
#define ADDR_FLASH_SECTOR_2     ((uint32_t)0x08010000) /* Base @ of Sector 2, 32 Kbytes */
#define ADDR_FLASH_SECTOR_3     ((uint32_t)0x08018000) /* Base @ of Sector 3, 32 Kbytes */
#define ADDR_FLASH_SECTOR_4     ((uint32_t)0x08020000) /* Base @ of Sector 4, 128 Kbytes */
#define ADDR_FLASH_SECTOR_5     ((uint32_t)0x08040000) /* Base @ of Sector 5, 256 Kbytes */
#define ADDR_FLASH_SECTOR_6     ((uint32_t)0x08080000) /* Base @ of Sector 6, 256 Kbytes */
#define ADDR_FLASH_SECTOR_7     ((uint32_t)0x080C0000) /* Base @ of Sector 7, 256 Kbytes */

/** @addtogroup STM32_USB_DEVICE_LIBRARY
  * @{
  */
  
/** @defgroup USBD_MEDIA
  * @brief header file for the usbd_dfu_if.c file
  * @{
  */ 

/** @defgroup USBD_MEDIA_Exported_Defines
  * @{
  */ 
/* USER CODE BEGIN EXPORTED_DEFINES */
/* USER CODE END EXPORTED_DEFINES */

/**
  * @}
  */ 

/** @defgroup USBD_MEDIA_Exported_Types
  * @{
  */  
/* USER CODE BEGIN EXPORTED_TYPES */
/* USER CODE END EXPORTED_TYPES */

/**
  * @}
  */ 

/** @defgroup USBD_MEDIA_Exported_Macros
  * @{
  */ 
/* USER CODE BEGIN EXPORTED_MACRO */
/* USER CODE END EXPORTED_MACRO */

/**
  * @}
  */ 

/** @defgroup USBD_MEDIA_Exported_Variables
  * @{
  */ 

  extern USBD_DFU_MediaTypeDef  USBD_DFU_fops_FS;

/* USER CODE BEGIN EXPORTED_VARIABLES */
/* USER CODE END EXPORTED_VARIABLES */

/**
  * @}
  */ 

/** @defgroup USBD_MEDIA_Exported_FunctionsPrototype
  * @{
  */ 

/* USER CODE BEGIN EXPORTED_FUNCTIONS */
/* USER CODE END EXPORTED_FUNCTIONS */
/**
  * @}
  */ 

/**
  * @}
  */ 

/**
* @}
*/ 
#ifdef __cplusplus
}
#endif

#endif /* __USBD_DFU_IF_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
