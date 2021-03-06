/*********************************************************************************************************************
 * COPYRIGHT NOTICE
 * Copyright (c) 2017,逐飞科技
 * All rights reserved.
 * 技术讨论QQ群：179029047
 *
 * 以下所有内容版权均属逐飞科技所有，未经允许不得用于商业用途，
 * 欢迎各位使用并传播本程序，修改内容时必须保留逐飞科技的版权声明。
 *
 * @file       		main
 * @company	   		成都逐飞科技有限公司
 * @author     		逐飞科技(QQ3184284598)
 * @version    		v2.0
 * @Software 		IAR 7.7 or MDK 5.23
 * @Target core		S9KEA128AMLK
 * @Taobao   		https://seekfree.taobao.com/
 * @date       		2017-11-6
 ********************************************************************************************************************/

#include "headfile.h"

int16 ad_result[8], result[8];
int16 ad_max0 = 0, ad_max1 = 0;
uint8 lap = 0;

int main(void)
{
    init();
    
    while(1)
    {
      key_deal();
      oled_show();
      if (lap == 0)
      {
        ftm_pwm_duty(motor_ftm,motor_ch,1000); 
      }
    }
}
