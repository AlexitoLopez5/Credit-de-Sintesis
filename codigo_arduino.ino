    const int sensorIzq = A0;
    const int sensorDer = A1;
   
    int valorizq = 0;
    int valorder = 0;
   
    int mizqA = 3;
    int mizqB = 4;
    int ControlMotorIzq = 9;
   
    int mderA = 5;
    int mderB = 6;
    int ControlMotorDer = 10;
  
    void setup () {
   
      pinMode(sensorIzq, INPUT);
      pinMode(sensorDer, INPUT);
     
      pinMode(mizqA, OUTPUT);
      pinMode(mizqB, OUTPUT);
      pinMode(ControlMotorIzq, OUTPUT);
     
      pinMode(mderA, OUTPUT);
      pinMode(mderB, OUTPUT);
      pinMode(ControlMotorDer, OUTPUT);
   
      Serial.begin(9600);
    }
  
    void loop() {
     
    valorizq = digitalRead(sensorIzq);
    valorder = digitalRead(sensorDer);
  
      Serial.print("IZQ: ");
      Serial.print(valorizq);
   
      Serial.print("\tDER: ");
      Serial.print(valorder);
   
      Serial.print("\n");
  
    if (valorizq == 0 && valorder == 1) {
  
      analogWrite(ControlMotorIzq,125);
     
      digitalWrite(mizqA, LOW);
      digitalWrite(mizqB, HIGH);
      digitalWrite(mderB, LOW);
      digitalWrite(mderA, LOW);
     
      Serial.print("MOVER IZQUIERDO");
      Serial.print("\n");
    }
  
    else if (valorizq == 1 && valorder == 0) {
  
      analogWrite(ControlMotorDer,125);
     
      digitalWrite(mizqA, LOW);
      digitalWrite(mizqB, LOW);
      digitalWrite(mderB, HIGH);
      digitalWrite(mderA, LOW);
  
      Serial.print("MOVER DERECHO");
      Serial.print("\n");          
    }
  
    /*
    else if (valorizq == 0 && valorder == 0) {
   
      analogWrite(ControlMotorIzq,85);
      analogWrite(ControlMotorDer,85);
     
      digitalWrite(mizqA, LOW);
      digitalWrite(mizqB, HIGH);
      digitalWrite(mderB, HIGH);
      digitalWrite(mderA, LOW);
     
      Serial.print("MOVER ADELANTE");
      Serial.print("\n");    
    }
  
     else {
  
      analogWrite(ControlMotorIzq,0);
      analogWrite(ControlMotorDer,0);
     
      digitalWrite(mizqA, LOW);
      digitalWrite(mizqB, LOW);
      digitalWrite(mderB, LOW);
      digitalWrite(mderA, LOW);
  
      Serial.print("PARAR");
      Serial.print("\n");
    }
    */
  
    } 