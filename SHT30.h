#ifndef __SHT30_H__
#define __SHT30_H__

#include <DELAY.H>
#include <I2C.H>


#define  uchar  unsigned char
#define  uint   unsigned int

extern uchar read_sht_data[7];

//struct data_process
//{
extern	uint SHT30_temperature;
extern	uint SHT30_humidity;
//};

extern void sht30_init(void);
extern void read_sht30(uchar *p,uchar number);
extern void sht30_data_process(void);
extern int  crc8_compute(uchar *check_data, uchar num_of_data);
extern int  sht30_crc8_check(uchar *p,uchar num_of_data,uchar CrcData);
extern void sht30_display(void);

#endif