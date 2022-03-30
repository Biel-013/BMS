/****************************************************************************
 *					Team Formula Tesla UFMG - 2017
 * File:   defines.h
 * PIC: 24FJ64GA004 Family
 * Compiler: XC16 v1.3
 * Author: Patrick Garcia (Botze), Pedro Ivan Ribeiro (Somalia)
 * Contributors: Eric Drumond
 * License: Free - Open Source
 * Created on 28 de Mar�o de 2017, 15:43
 ****************************************************************************/
#ifndef DEFINES_H
#define DEFINES_H


//GENERAL DEFINES
#define NUMBER_OF_PACKS				1//6
#define NUMBER_OF_SLAVES			1//9
#define NUMBER_OF_CELLS				12
#define NUMBER_OF_THERMISTORS		5
#define NUMBER_OF_PACKS_IN_SERIES	1//2

//BATTERY CELL DEFINES
#define VOLTAGE_MAX_DISCHARGE		34000
#define VOLTAGE_MAX_CHARGE			35000
#define VOLTAGE_MAX_BALANCE			34000

#define VOLTAGE_MIN_DISCHARGE		27000
#define VOLTAGE_MIN_CHARGE			23000
#define VOLTAGE_MIN_BALANCE			23000

#define TEMPERATURE_MAX_DISCHARGE	550
#define TEMPERATURE_MAX_CHARGE		500
#define TEMPERATURE_MAX_BALANCE		400

//CELL BALANCE DEFINES
#define BALANCE_THRESHOLD_VOLTAGE	100
#define TIME_BALANCING_SEC			30
#define DELAY_AFTER_BALANCE_SEC		3

//BMS OPERATION MODES:
#define BMS_MONITORING 	0
#define BMS_CHARGING 	0b01
#define BMS_BALANCING 	0b10

//ERROR DEFINES:
#define ERR_NO_ERROR 			0b000000000
#define ERR_OVER_VOLTAGE		0b000000001
#define ERR_UNDER_VOLTAGE		0b000000010
#define ERR_OVER_CURRENT		0b000000100
#define ERR_OVER_TEMPERATURE	0b000001000
#define ERR_OPEN_FUSES			0b000010000
#define ERR_COMM_ERROR			0b000100000
#define ERR_AIR_ERROR			0b001000000
#define ERR_GLV_VOLTAGE			0b010000000
#define ERR_BALANCE				0b100000000
#define NUMBER_OF_ERRORS		3

//TIME DEFINES
#define T_WAKEUP 			400
#define T_REFUP_V 			20
#define T_ADC				3000
#define ONE_SEC_IN_US		1000000
#define CHARGER_DELAY		100

//AIR STATUS
#define AIR_OPEN	SET
#define AIR_CLOSED	RESET

//LOGIC DEFINES
#define HIGH  SET
#define LOW	  RESET
#define ON	  SET
#define OFF	  RESET

//CURRENT SENSOR DEFINES
#define NUMBER_OF_CURRENT_SENSORS 		4
#define CHANELLS_PER_CURRENT_SENSOR		2
#define THRESHOLD_CURRENT_mA			3000

#endif
