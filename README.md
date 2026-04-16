# MaRs-Task-5
TASK: to make an object counter using IR sensor and print the value on the LCD

Tinkercad Link: https://www.tinkercad.com/things/kB16YbVyXAa-ir-object-counter?sharecode=q79VFAMMSG200su76pUPJDXdmQfeCTTWXZBdv0TuNKo

Once the problem was given and explained to me , i started to make a replica of it in the tinkercad. I have already used an I2C display in tinkercad for my project
given in task-1. The logic that I used for the IR sensor is declaring two variables before and current, the variable current stores the current reading of the ir sensor
and the variable before stores the previous value of current. When object is not detected the sensor value would be one and when the object is detected the sensor value 
would be zero. So, suddenly when the introduced body is removed from the front of the sensor, current value would be one(since there is no object in front of the sensor) and the previous value would be zero(since there was object in 
front of the sensor before). When this kind of condition is met the count(count is the variable which is used to store the No.of objects detected by the sensor) value gets 
incremented by one. The next task is to print this value of count in the LCD display. For that I reffered to the example code given in arduino IDE and modified it to suit my curent purpose.
