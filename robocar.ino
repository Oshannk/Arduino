
#define IN1 9
#define IN2 12

////////////////  DC Motor 2  Pins

#define IN3 11
#define IN4 10

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);


}

//Main Program
void loop() {

    int sp3 = pulseIn(4, HIGH);
    int sp4 = pulseIn(2, HIGH);
// Serial.println(sp4);

  if(sp3> 1600)
    {
      Serial.println("FORWARD");
     
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      
    }
    if(sp3<1400)
    {
      Serial.println("BACKWARD");
      
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
    }
     if(sp3>1400 && sp3< 1600)
    {
      Serial.println("stop");
      
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);

   
    }


    ///left right



     if(sp4< 1400)
    {
      Serial.println("RIGHT");
     
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
    }
    if(sp4>1600)
    {
      Serial.println("LEFT");
      
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,HIGH);
     
    }

    
  
  
}


   





