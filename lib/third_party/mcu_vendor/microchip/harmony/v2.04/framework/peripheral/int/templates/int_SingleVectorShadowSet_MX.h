/*******************************************************************************
  INT Peripheral Library Template Implementation

  File Name:
    int_SingleVectorShadowSet_MX.h

  Summary:
    INT PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : SingleVectorShadowSet
    and its Variant : MX
    For following APIs :
        PLIB_INT_ExistsSingleVectorShadowSet
        PLIB_INT_SingleVectorShadowSetDisable
        PLIB_INT_SingleVectorShadowSetEnable

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _INT_SINGLEVECTORSHADOWSET_MX_H
#define _INT_SINGLEVECTORSHADOWSET_MX_H

//******************************************************************************
/* Function :  INT_ExistsSingleVectorShadowSet_MX

  Summary:
    Implements MX variant of PLIB_INT_ExistsSingleVectorShadowSet

  Description:
    This template implements the MX variant of the PLIB_INT_ExistsSingleVectorShadowSet function.
*/
#define PLIB_INT_ExistsSingleVectorShadowSet PLIB_INT_ExistsSingleVectorShadowSet
PLIB_TEMPLATE bool INT_ExistsSingleVectorShadowSet_MX( INT_MODULE_ID index )
{
    return true;
}

//******************************************************************************
/* Function :  INT_SingleVectorShadowSetDisable_MX

  Summary:
    Implements MX variant of PLIB_INT_SingleVectorShadowSetDisable 

  Description:
    This template implements the MX variant of the PLIB_INT_SingleVectorShadowSetDisable function.
*/
PLIB_TEMPLATE void INT_SingleVectorShadowSetDisable_MX( INT_MODULE_ID index )
{
    INTCONCLR = _INTCON_SS0_MASK;
}

//******************************************************************************
/* Function :  INT_SingleVectorShadowSetEnable_MX

  Summary:
    Implements MX variant of PLIB_INT_SingleVectorShadowSetEnable 

  Description:
    This template implements the MX variant of the PLIB_INT_SingleVectorShadowSetEnable function.
*/
PLIB_TEMPLATE void INT_SingleVectorShadowSetEnable_MX( INT_MODULE_ID index )
{
    INTCONSET = _INTCON_SS0_MASK;
}

#endif /*_INT_SINGLEVECTORSHADOWSET_MX_H*/

/******************************************************************************
 End of File
*/

