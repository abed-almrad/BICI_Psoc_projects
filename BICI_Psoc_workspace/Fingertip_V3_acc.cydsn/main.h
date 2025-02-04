/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "project.h"
#include <stdbool.h>


#define TAXEL_COUNT         (67)
#define ACC_DATA_SIZE       (3)
#define READY_READ          (0xFFFE)
#define WAITING_FOR_MASTER  (0)
#define SLAVE_STATE_BYTE    (0)
#define WRITE_BUFFER_SIZE   (1)
//Accelerometer parameters
#define ACC_ADDRESS         (0x53) 
//Accelerometer registers
#define POWER_ALT         (0x2D) 
// Accelerometer readings
uint16 X_out, Y_out, Z_out;

/* The I2C Slave read and write buffers */
uint16 i2cReadBuffer [TAXEL_COUNT+ACC_DATA_SIZE+1];
uint8 i2cWriteBuffer[WRITE_BUFFER_SIZE];


#define TRANSFER_CMPLT      (0x00u)
#define TRANSFER_ERROR      (0xFFu)

uint32 initAccel();
uint32 readAccel();


/* [] END OF FILE */
