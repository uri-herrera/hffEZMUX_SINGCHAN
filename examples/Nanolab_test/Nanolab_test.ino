#include <i2c_t3.h>
#include <hffEZMUX_SINGCHAN.h>

Nanolab test = Nanolab();

uint16_t tsl_0,tsl_1,tsl_2,tsl_3,tsl_4,tsl_5,tsl_6,tsl_7,
          tsl_8,tsl_9,tsl_10,tsl_11,tsl_12,tsl_13,tsl_14,
          tsl_15 = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Executing Code...");
}
   
void loop() {
  
  test.housekeeping();

  test.simpleRead(0,0); //  1
  tsl_0 = test.sro.lum;
  test.simpleRead(1,0); //  2
  tsl_1 = test.sro.lum;
  test.simpleRead(2,0); //  3
  tsl_2 = test.sro.lum;
  test.simpleRead(3,0); //  4
  tsl_3 = test.sro.lum;
  
  test.simpleRead(0,1); //  5
  tsl_4 = test.sro.lum;
  test.simpleRead(1,1); //  6
  tsl_5 = test.sro.lum;
  test.simpleRead(2,1); //  7
  tsl_6 = test.sro.lum;
  test.simpleRead(3,1); //  8
  tsl_7 = test.sro.lum;

  test.simpleRead(0,2); //  9
  tsl_8 = test.sro.lum;
  test.simpleRead(1,2); //  10
  tsl_9 = test.sro.lum;
  test.simpleRead(2,2); //  11
  tsl_10 = test.sro.lum;
  test.simpleRead(3,2); //  12
  tsl_11 = test.sro.lum;
  
  test.simpleRead(0,3); //  13
  tsl_12 = test.sro.lum;
  test.simpleRead(1,3); //  14
  tsl_13 = test.sro.lum;
  test.simpleRead(2,3); //  15
  tsl_14 = test.sro.lum;
  test.simpleRead(3,3); //  16
  tsl_15 = test.sro.lum;

  Serial.println("---------------------------------------------");
  Serial.print("Temperature: ");
  Serial.println(test.hkro.temperature);
  Serial.print("Pressure: ");
  Serial.println(test.hkro.pressure);
  Serial.print("Humidity: ");
  Serial.println(test.hkro.humidity);
  Serial.print("Gas Resistance: ");
  Serial.println(test.hkro.gas_resistance);
  Serial.print("Altitude: ");
  Serial.println(test.hkro.alt);
  Serial.println("---------------------------------------------");
  
  Serial.println("---------------------------------------------");
  Serial.print("\t");
  Serial.print(tsl_0);
  Serial.print("\t");
  Serial.print(tsl_1);
  Serial.print("\t");
  Serial.print(tsl_2);
  Serial.print("\t");
  Serial.print(tsl_3);
  Serial.print("\n");
  Serial.print("\n");
  Serial.print("\t");
  Serial.print(tsl_4);
  Serial.print("\t");
  Serial.print(tsl_5);
  Serial.print("\t");
  Serial.print(tsl_6);
  Serial.print("\t");
  Serial.print(tsl_7);
  Serial.print("\n");
  Serial.print("\n");

  Serial.print("\t");
  Serial.print(tsl_8);
  Serial.print("\t");
  Serial.print(tsl_9);
  Serial.print("\t");
  Serial.print(tsl_10);
  Serial.print("\t");
  Serial.print(tsl_11);
  Serial.print("\n");
  Serial.print("\n");
  Serial.print("\t");
  Serial.print(tsl_12);
  Serial.print("\t");
  Serial.print(tsl_13);
  Serial.print("\t");
  Serial.print(tsl_14);
  Serial.print("\t");
  Serial.println(tsl_15);
  Serial.println("---------------------------------------------");
  Serial.println();

}
