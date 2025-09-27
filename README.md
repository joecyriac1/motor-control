# motor-control
Motor control system using Arduino + L293D


This projects demonstrates how you can control the direction and speed of a dc motor using an arduino and an L293D IC

1.the potetntiometer controls the speed
2.the push button toggles the direction
3.the L293D acts as H bridge driver



componenets needed:
1.arduino
2.L293D
3.DC motor
4.Potentiometer
5.Button
6.9v battery(powering arduino,motor and the ic)
7.breadboard and wires



Circuit Wiring

 Arduino ↔ L293D
   - **D9 (PWM)** → ENA  — speed control  
   - **D8** → IN1  — direction control  
   - **D7** → IN2  — direction control  
   - **5V** → Vcc1  — logic power  
   - **GND** → GND (pins 4, 5, 12, 13 on L293D) — common ground  

 Motor ↔ L293D
  - Motor wire A → OUT1  
  -   Motor wire B → OUT2 

Motor -Power Supply
  - Battery + → Vs 
  - Battery – → Arduino GND + L293D GND  

 Inputs
  - Potentiometer: left pin → 5V, right pin → GND, middle pin → A0  
  - Button: one side → D2, other side → GND


So basically the arduino reads the value from the potentiometer(a value between 0 and 1023) and converts it into PWM(0-255)
This adjusts the speed by giving it to the ENA
the button toggles the direction-IN1/IN2(by setting each of these high/low as required)
Serial monitor prints potentiometer vale,pwm value and the directuon




how to work this circuit



on tinkercad:
   open simulation
   start
   rotate potentiometer,see the change in speed
   press the button to see the change in direction
   open serial monitor for liv monitoring

on arduino:
   wire accordingly
   connect arduino,open IDE
   uploade the code file into the arduino
   Observe the responses
   
