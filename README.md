# memory-management-
This repository is related to memory management using embedded c to efficiently manage memory when handling different types of data.


Problem 1 : 
Create a data structure using a union to efficiently store and manage sensor data from all three sensors. Implement a function that reads data from these sensors, stores it in the union, and then processes the data based on the sensor type. The function should be able to print the correct sensor value depending on which sensor data has been stored.

Solution : Realted Codes are in master branch. 

Flow Chart 
+------------------+
|      Start       |
+------------------+
        |
        v
+------------------+
| Declare Sensor   |
| Structure        |
+------------------+
        |
        v
+-----------------------------+
| Call storeTemperature       |
+-----------------------------+
        |
        v
+-----------------------------+
| Set type = TEMPERATURE_SENSOR |
+-----------------------------+
        |
        v
+-----------------------------+
| Store temperature in union  |
+-----------------------------+
        |
        v
+-----------------------------+
| Call processSensorData      |
+-----------------------------+
        |
        v
+-----------------------------+
| Check type                  |
+-----------------------------+
        |
        v
+-----------------------------+
| Print Temperature Data      |
+-----------------------------+
        |
        v
+-----------------------------+
| Call storeHumidity          |
+-----------------------------+
        |
        v
+-----------------------------+
| Set type = HUMIDITY_SENSOR  |
+-----------------------------+
        |
        v
+-----------------------------+
| Store humidity in union     |
+-----------------------------+
        |
        v
+-----------------------------+
| Call processSensorData      |
+-----------------------------+
        |
        v
+-----------------------------+
| Check type                  |
+-----------------------------+
        |
        v
+-----------------------------+
| Print Humidity Data         |
+-----------------------------+
        |
        v
+-----------------------------+
| Call storeLight             |
+-----------------------------+
        |
        v
+-----------------------------+
| Set type = LIGHT_SENSOR     |
+-----------------------------+
        |
        v
+-----------------------------+
| Store light in union        |
+-----------------------------+
        |
        v
+-----------------------------+
| Call processSensorData      |
+-----------------------------+
        |
        v
+-----------------------------+
| Check type                  |
+-----------------------------+
        |
        v
+-----------------------------+
| Print Light Data            |
+-----------------------------+
        |
        v
+------------------+
|      End         |
+------------------+



**UML Class Diagram
+-------------------------------+
|            Sensor              |
+-------------------------------+
| - type: SensorType             |
| - data: SensorData             |
+-------------------------------+
| + storeTemperature(temperature: int): void |
| + storeHumidity(humidity: int): void       |
| + storeLight(light: float): void           |
| + processSensorData(): void                |
+-------------------------------+

                 ^
                 |
                 |
+-------------------------------+
|          SensorType            |
+-------------------------------+
| + TEMPERATURE_SENSOR           |
| + HUMIDITY_SENSOR              |
| + LIGHT_SENSOR                 |
+-------------------------------+

                 ^
                 |
                 |
+-------------------------------+
|          SensorData            |
+-------------------------------+
| + temperature: int             |
| + humidity: int                |
| + light: float                 |
+-------------------------------+
