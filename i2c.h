#ifndef __I2C_H_
#define __I2C_H_

#define  uchar  unsigned char
#define  uint   unsigned int

#include <STC15.H>
#include <DELAY.H>

#define slaw1 0xA2   //PCF8563Ğ´ÃüÁî×Ö
#define slar1 0xA3   //PCF8563¶ÁÃüÁî×Ö
#define slaw2 0x78   //0.96´çOLEDĞ´ÃüÁî×Ö
#define slar2 0x79   //0.96´çOLED¶ÁÃüÁî×Ö
#define slaw3 0x88   //SHT30Ğ´ÃüÁî×Ö
#define slar3 0x89   //SHT30¶ÁÃüÁî×Ö

sbit SCL  =P1^4;    //I2CÊ±ÖÓÏß
sbit SDA  =P1^3;    //I2CÊı¾İÏß


extern void I2C_Start(void);
extern void I2C_Stop(void);
extern void S_ACK(void);
extern void S_NOACK(void);
extern void I2C_Check_ACK(void);
extern void I2C_WriteAbyte(uchar dat);
extern uchar I2C_ReadAbyte(void);
extern void WriteNbyte(uchar sla_w,uchar addr,uchar *p,uchar number);
extern void ReadNbyte(uchar sla_w,uchar addr,uchar sla_r,uchar *p,uchar number);

#endif