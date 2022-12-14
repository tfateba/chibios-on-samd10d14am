/*
    ChibiOS - Copyright (C) 2006..2022 Theodore Ateba

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    GPIOv1/samd10_gpio.h
 * @brief   SAMD10 GPIO units common header.
 * @note    This file requires definitions from the ATMEL SAMD10 header file.
 *
 * @addtogroup SAMD10_GPIOv1
 * @{
 */

#ifndef SAMD10_GPIO_H
#define SAMD10_GPIO_H

#include <stdint.h>
#include "samd10d14am.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

#define samd10_gpio_t PORT_TypeDef

/**
 * @name    GPIO ports definitions
 * @{
 */
#define GPIOA                           ((samd10_gpio_t *)PORT_BASE)
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#endif /* SAMD10_GPIO_H */

/** @} */
