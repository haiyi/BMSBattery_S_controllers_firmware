/*
 * config.h
 *
 *  Automatically created by OSEC Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define NUMBER_OF_PAS_MAGS 12
#define limit 28
#define timeout 3125
#define wheel_circumference 2230L
#define limit_without_pas 6
#define ADC_THROTTLE_MIN_VALUE 43
#define ADC_THROTTLE_MAX_VALUE 182
#define BATTERY_VOLTAGE_MIN_VALUE 111
#define BATTERY_CURRENT_MAX_VALUE 150L
#define PHASE_CURRENT_MAX_VALUE 300L
#define REGEN_CURRENT_MAX_VALUE 50L
#define MOTOR_ROTOR_DELTA_PHASE_ANGLE_RIGHT 212
#define current_cal_a 5
#define TEMP_CAL_A 1.6
#define TEMP_CAL_B -110.4
#define LEVEL_1 12
#define LEVEL_2 21
#define LEVEL_3 30
#define LEVEL_4 59
#define LEVEL_5 100
#define MORSE_TIME_1 50
#define MORSE_TIME_2 50
#define MORSE_TIME_3 50
#define RAMP_END 0
#define P_FACTOR 0.5
#define I_FACTOR 0.2
#define GEAR_RATIO 12L
#define BATTERY_LI_ION_CELLS_NUMBER 10
#define PAS_THRESHOLD 1.9
#define RAMP_START 0
#define limit_with_throttle_override 35
#define PWM_CYCLES_SECOND 15625L
#define SPEEDSENSOR_EXTERNAL
#define BLUOSEC
#define TQS_CALIB 1000.0
#define ACA 426
#define EEPROM_INIT_MAGIC_BYTE 94 // makes sure (chance of fail 1/255) eeprom is invalidated after flashing new config

#endif /* CONFIG_H_ */
