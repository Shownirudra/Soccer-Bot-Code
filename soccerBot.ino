#define ledPin 7
int bt = 0;

#define m1_F 11
#define m1_B 10

#define m2_F 6
#define m2_B 7

#define m3_F 12 
#define m3_B 13

#define m4_F 9
#define m4_B 8



void setup() {
  pinMode(ledPin, OUTPUT);

  pinMode(m1_F, OUTPUT);
  pinMode(m1_B, OUTPUT);

  pinMode(m2_F, OUTPUT);
  pinMode(m2_B, OUTPUT);

  pinMode(m3_F, OUTPUT);
  pinMode(m3_B, OUTPUT);

  pinMode(m4_F, OUTPUT);
  pinMode(m4_B, OUTPUT);


  digitalWrite(ledPin, LOW);
  Serial.begin(9600); // Default communication rate of the Bluetooth module
}
void loop() {
  if (Serial.available() > 0) { // Checks whether data is comming from the serial port
    bt = Serial.read(); // Reads the data from the serial port
    Serial.println(bt);
  }

  switch (bt) {
    case '0':
      //
      Serial.println("FORWARD_ _started");
      
      digitalWrite(m1_F, HIGH);
      digitalWrite(m1_B, LOW);

      digitalWrite(m2_F, HIGH);
      digitalWrite(m2_B, LOW);

      digitalWrite(m3_F, HIGH);
      digitalWrite(m3_B, LOW);

      digitalWrite(m4_F, HIGH);
      digitalWrite(m4_B, LOW);

      Serial.println("FORWARD_ _ended");

      break;
    case '1':
      //

      Serial.println("BACKWARD_ _started");
      
      digitalWrite(m1_F, LOW);
      digitalWrite(m1_B, HIGH);

      digitalWrite(m2_F, LOW);
      digitalWrite(m2_B, HIGH);

      digitalWrite(m3_F, LOW);
      digitalWrite(m3_B, HIGH);

      digitalWrite(m4_F, LOW);
      digitalWrite(m4_B, HIGH);

      Serial.println("BACKWARD_ _ended");
      
      break;
    case '2':
      //

      Serial.println("LEFT_ _started");
      
      digitalWrite(m1_F, HIGH);
      digitalWrite(m1_B, LOW);

      digitalWrite(m2_F, HIGH);
      digitalWrite(m2_B, LOW);

      digitalWrite(m3_F, LOW);
      digitalWrite(m3_B, LOW);

      digitalWrite(m4_F, HIGH);
      digitalWrite(m4_B, LOW);

      Serial.println("LEFT_ _ended");
      
      break;
    case '3':
      //
      Serial.println("RIGHT_ _started");
      
      digitalWrite(m1_F, HIGH);
      digitalWrite(m1_B, LOW);

      digitalWrite(m2_F, HIGH);
      digitalWrite(m2_B, LOW);

      digitalWrite(m3_F, HIGH);
      digitalWrite(m3_B, LOW);

      digitalWrite(m4_F, LOW);
      digitalWrite(m4_B, LOW);

      Serial.println("RIGHT_ _ended");
      
      break;


    default:
      //

      //Serial.println("STOP_started");
      
      digitalWrite(m1_F, LOW);
      digitalWrite(m1_B, LOW);

      digitalWrite(m2_F, LOW);
      digitalWrite(m2_B, LOW);

      digitalWrite(m3_F, LOW);
      digitalWrite(m3_B, LOW);

      digitalWrite(m4_F, LOW);
      digitalWrite(m4_B, LOW);

      //Serial.println("STOP_ended");
      break;
  }  

}
