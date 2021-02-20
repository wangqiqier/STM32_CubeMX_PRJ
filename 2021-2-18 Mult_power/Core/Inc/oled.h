//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//中景园电子
//店铺地址：http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : HuangKai
//  生成日期   : 2014-0101
//  最近修改   : 
//  功能描述   : OLED 4接口演示例程(51系列)
//              说明: 
//              ----------------------------------------------------------------
//              GND    电源地
//              VCC  接3.3v电源
//              SCL   接PA5（SCL）
//              SDA   接PA7（SDA）
//              RES  接PB0
//              DC   接PB1
//              CS   接PA4               
//              ----------------------------------------------------------------
// 修改历史   :
// 日    期   : 
// 作    者   : HuangKai
// 修改内容   : 创建文件
//版权所有，盗版必究。
//Copyright(C) 中景园电子2014/3/16
//All rights reserved
//******************************************************************************/


#ifndef __OLED_H
#define __OLED_H			  	 
//#include "sys.h"
#include "stdlib.h"	    

//OLED模式设置
//0:4线串行模式

//#define OLED_MODE 1
		    						  
//-----------------OLED端口定义----------------  	原始
//              SCL   接PA5（SCL）
//              SDA   接PA7（SDA）
//              RES  接PB0
//              DC   接PB1
//              CS   接PA4 
//                修改后
//-----------------OLED端口定义----------------  					   
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
 		     
#define OLED_CMD  0	//写命令
#define OLED_DATA 1	//写数据
//OLED控制用函数






#endif  
	 



