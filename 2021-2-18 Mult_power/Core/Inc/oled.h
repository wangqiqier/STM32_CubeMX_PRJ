//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2014-0101
//  ����޸�   : 
//  ��������   : OLED 4�ӿ���ʾ����(51ϵ��)
//              ˵��: 
//              ----------------------------------------------------------------
//              GND    ��Դ��
//              VCC  ��3.3v��Դ
//              SCL   ��PA5��SCL��
//              SDA   ��PA7��SDA��
//              RES  ��PB0
//              DC   ��PB1
//              CS   ��PA4               
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2014/3/16
//All rights reserved
//******************************************************************************/


#ifndef __OLED_H
#define __OLED_H			  	 
//#include "sys.h"
#include "stdlib.h"	    

//OLEDģʽ����
//0:4�ߴ���ģʽ

//#define OLED_MODE 1
		    						  
//-----------------OLED�˿ڶ���----------------  	ԭʼ
//              SCL   ��PA5��SCL��
//              SDA   ��PA7��SDA��
//              RES  ��PB0
//              DC   ��PB1
//              CS   ��PA4 
//                �޸ĺ�
//-----------------OLED�˿ڶ���----------------  					   
//#define OLED_CS_Clr()  GPIO_ResetBits(GPIOB,GPIO_Pin_5)//CS
//#define OLED_CS_Set()  GPIO_SetBits(GPIOB ,GPIO_Pin_5)

//#define OLED_RST_Clr() GPIO_ResetBits(GPIOB,GPIO_Pin_7)//RES
//#define OLED_RST_Set() GPIO_SetBits(GPIOB,GPIO_Pin_7)

//#define OLED_RS_Clr() GPIO_ResetBits(GPIOB,GPIO_Pin_6)//DC
//#define OLED_RS_Set() GPIO_SetBits(GPIOB,GPIO_Pin_6)

//#define OLED_SCLK_Clr() GPIO_ResetBits(GPIOB,GPIO_Pin_9)//SCL
//#define OLED_SCLK_Set() GPIO_SetBits(GPIOB,GPIO_Pin_9)

//#define OLED_SDIN_Clr() GPIO_ResetBits(GPIOB,GPIO_Pin_8)//SDA
//#define OLED_SDIN_Set() GPIO_SetBits(GPIOB,GPIO_Pin_8)

#define OLED_CS_Clr() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET) //CS
#define OLED_CS_Set() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET)

#define OLED_RST_Clr() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_RESET)//RES
#define OLED_RST_Set() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_7,GPIO_PIN_SET)

#define OLED_RS_Clr() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET)//DC
#define OLED_RS_Set() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET)

#define OLED_SCLK_Clr() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_RESET)//SCL
#define OLED_SCLK_Set() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_9,GPIO_PIN_SET)

#define OLED_SDIN_Clr() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_RESET)//SDA
#define OLED_SDIN_Set() HAL_GPIO_WritePin(GPIOB,GPIO_PIN_8,GPIO_PIN_SET)
 		     
#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����
//OLED�����ú���






#endif  
	 



