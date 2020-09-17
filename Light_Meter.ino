
int LightIntensity = 0;     //Integer to save values from LDR

void AllLEDsOFF(){    //Function to turn all LEDs OFF
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void setup(){
  // Setting pins connected to LEDs as outputs
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

  AllLEDsOFF();     //Turning all LEDs OFF
}

void loop() {
  LightIntensity = analogRead(A0);  //Saving values from LDR
  delay(50);      // Waiting for some time
  if(LightIntensity > 450){ //All LEDs ON if value is above 450
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);  
  }
  else if(LightIntensity > 400){//5 LEDs ON if value is above 400
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);      
  }
  else if(LightIntensity > 350){//4 LEDs ON if value is above 350
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);      
  }
  
  else if(LightIntensity > 300){//3 LEDs ON if value is above 300
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);      
  }
  else if(LightIntensity > 250){//2 LEDs ON if value is above 250
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);      
  }
  else if(LightIntensity > 200){//1 LEDs ON if value is above 200
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);      
  }
  else{
    AllLEDsOFF();        //All LEDs OFF if value not above 200
  }
}

