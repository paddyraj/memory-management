/*
 * main.c
 *
 *  Created on: Aug 23, 2024
 *      Author: Raj paddy
 */

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

typedef enum {
	Temperature_sensor,
	Humidity_sensor,
	Light_sensor
} sensorType_e;

typedef union {
	int16_t tempsensor;
	uint16_t humidsensor;
	float lightsensor;
} sensorData_u;

typedef struct {

	sensorType_e type;
	sensorData_u data;
} sensor;

//function to store sensor

void temperature_store(sensor *sensor, int temperature) {

	sensor->type = Temperature_sensor;
	sensor->data.tempsensor = temperature;
}
void humidity_store(sensor *sensor, int humidity) {
	sensor->type = Humidity_sensor;
	sensor->data.humidsensor = humidity;
}
void light_store(sensor *sensor, float light) {
	sensor->type = Light_sensor;
	sensor->data.lightsensor = light;
}

// function to process sensor data accordinly

void processData(const sensor *sensor) {

	switch(sensor->type) {
	case Temperature_sensor:
		printf("Temperature %d C\n",sensor->data.tempsensor);
		break;

	case Humidity_sensor:
		printf("Humidity %d %\n",sensor->data.humidsensor);
		break;

	case Light_sensor:
		printf("Light Intensity %.2f Lux",sensor->data.lightsensor);
		break;

	default:
		printf("Unknown sensor type");
		break;
	}
}

// enter the values in sensor from main

int main() {

	sensor sensor;

            //temperature
	temperature_store(&sensor,1400); // to store data
    processData(&sensor);       // to process data and print

            //Humidity
    humidity_store(&sensor,45);
    processData(&sensor);

            //Light
    light_store(&sensor, 45.9906);
    processData(&sensor);

}

