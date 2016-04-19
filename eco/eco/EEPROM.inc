/*
 * EEPROM.inc
 *
 *  Created: 30.03.2016 0:35:04
 *   Author: Hogs
 */ 

.org 0

//--------------- MENU strings ------------------------------------------
ee_pressure_msg:.db "Pressure       ",2		//menu strings
ee_temp_msg:	.db "Temperature    ",0		//0 is up arrow
ee_time_msg:	.db "Time           ",0
ee_mc_msg:		.db "Memory Card    ",0
ee_sms_msg:		.db "SMS response   ",0
ee_sound_msg:	.db "Sound(5-On/Off)",0
ee_test_msg1:	.db "test str 1     ",1		//1 is down arrow
ee_test_msg2:	.db "test str 2     ",1
ee_test_msg3:	.db "12:34 14/11/15 ",1
ee_test_msg4:	.db "test str 4     ",1
ee_test_msg5:	.db "test str 5     ",1
ee_test_msg6:	.db "Press 5 to test",2
//------------------------------------------------------------------------

//------------ GSM strings -----------------------------------------------
ee_gsm_new_SMS:				.db "+CMTI: ",'"',"SM",'"',',',0    //+CMTI: "SM",INDEX  
ee_gsm_read_SMS1:			.db "AT+CMGR=",0
ee_gsm_read_SMS2:			.db ",0",0
ee_gsm_result:				.db "OK",0
ee_gsm_write:				.db "AT+CMGS=",0
ee_gsm_write_msg:			.db ">",0
ee_gsm_enter:				.db 0x0D,0
ee_gsm_end_msg:				.db 0x1A,0
ee_gsm_phone_start:			.db '"',',',0
ee_gsm_cmd1:				.db "device get",0
ee_gsm_cmd2:				.db "device set",0
ee_gsm_info_parameter:		.db "info",0
ee_gsm_time_parameter:		.db "time",0
ee_gsm_temp_parameter:		.db "temp",0
ee_gsm_pressure_parameter:	.db "pressure",0
ee_gsm_sound_parameter:		.db "sound",0
ee_gsm_memory_parameter:	.db "memory",0
ee_gsm_invalid_get:			.db "invalid get command, you can use only", 0x0D, "info", 0x0D, "time", 0x0D, "temp", 0x0D, "pressure", 0x0D, "sound", 0x0D, "memory", 0x0D, "commands", 0
ee_gsm_invalid_set:			.db "invalid set command, you can use only", 0x0D, "time", 0x0D, "sound", 0x0D, "memory", 0x0D, "commands", 0
ee_On_str:					.db "On ",0
ee_Off_str:					.db "Off",0
ee_gsm_invalid_time:		.db "invalid time set, use", 0x0D, "device set time 23:45 19/04/16",0
ee_gsm_invalid_OnOff:		.db "invalid On/Off set, use", 0x0D, "device set sound ON", 0x0D, "or", 0x0D, "device set memory OFF",0  
//------------------------------------------------------------------------