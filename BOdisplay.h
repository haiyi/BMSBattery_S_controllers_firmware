/*
 * Copyright (c) 2018 Björn Schmidt
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 */

/* 
 * File:   BOdisplay.h
 * Author: Björn Schmidt
 *
 * Created on August 30, 2018, 8:03 PM
 */

#ifndef BODISPLAY_H
#define BODISPLAY_H

#include "config.h"

typedef enum
{
    FUN_ERROR = ((uint8_t) 0x66),
    FUN_RUNTIME_INFOS = ((uint8_t) 0x41),
    FUN_CONFIG_INFOS = ((uint8_t) 0x42),
    FUN_HALL_INFOS = ((uint8_t) 0x43),
    FUN_SET_CONFIG = ((uint8_t) 0x44)
} BO_FUN_CODES;

typedef enum
{
    CODE_DUMMY = ((uint8_t) 0xFF),
    CODE_LRC_CHECK = ((uint8_t) 0x60),
    CODE_ERROR = ((uint8_t) 0x66),

    CODE_ASSIST_LEVEL = ((uint8_t) 0xA0),
    CODE_BRAKE_STATUS = ((uint8_t) 0xA1),
    CODE_PAS_ACTIVE = ((uint8_t) 0xA2),
    CODE_PAS_DIRECTION = ((uint8_t) 0xA3),
    CODE_OFFROAD = ((uint8_t) 0xA4),

    CODE_MOTOR_STATE = ((uint8_t) 0xC0),
    CODE_BATTERY_VOLTAGE = ((uint8_t) 0xC1),
    CODE_UPTIME = ((uint8_t) 0xC2),
    CODE_ER_SPEED = ((uint8_t) 0xC3),
    CODE_BATTERY_CURRENT_HIGH_BYTE = ((uint8_t) 0xC4),
    CODE_BATTERY_CURRENT = ((uint8_t) 0xC5),
    CODE_CORRECTION_VALUE = ((uint8_t) 0xC6),
    CODE_PHASE_CURRENT = ((uint8_t) 0xC7),

    CODE_SUM_TORQUE = ((uint8_t) 0xD0),
    CODE_SETPOINT = ((uint8_t) 0xD1),
    CODE_SETPOINT_STATE = ((uint8_t) 0xD2),

    CODE_THROTTLE_HIGH_BYTE = ((uint8_t) 0xDA),
    CODE_THROTTLE = ((uint8_t) 0xDB),
    CODE_CURRENT_TARGET_HIGH_BYTE = ((uint8_t) 0xDC),
    CODE_CURRENT_TARGET = ((uint8_t) 0xDD),

    CODE_MOTOR_SPECIFIC_ANGLE = ((uint8_t) 0x80),
    CODE_ERPS_FACTOR = ((uint8_t) 0x81),
    CODE_CURRENT_CAL_A = ((uint8_t) 0x82),

    CODE_CURRENT_CAL_B_HIGH_BYTE = ((uint8_t) 0x88),
    CODE_CURRENT_CAL_B = ((uint8_t) 0x89),

    CODE_EEPROM_MAGIC_BYTE = ((uint8_t) 0x84),
    CODE_MAX_SPEED = ((uint8_t) 0x85),

    CODE_THROTTLE_MIN_RANGE = ((uint8_t) 0x86),
    CODE_THROTTLE_MAX_RANGE = ((uint8_t) 0x87),

 

    CODE_HALL_ORDER_BASE = ((uint8_t) 0x10),
    CODE_CURRENT_AT_HALL_POSITION_BASE = ((uint8_t) 0x00)
} BO_VALUE_CODES;

typedef enum
{
    EEPROM_ADDRESS = ((uint8_t) 0xFE),
    STATIC_DATA_ADDRESS = ((uint8_t) 0xFB),
    CONFIG_ADDRESS = ((uint8_t) 0xFC),
    DYNAMIC_DATA_ADDRESS = ((uint8_t) 0xFD),
    ERROR_ADDRESS = ((uint8_t) 0x66)
} BO_ADDRESS_CODES;

void processBoMessage();

#endif /* BODISPLAY_H */