String letra ;

void setup() {
  Serial.begin(9600);
  delay(500);
  Serial.println("Hola soy TRONIC");
  
}

void loop() {
  
  if (Serial.available()){

     letra = Serial.readString();
     Serial.print("Entrada:  ");
     Serial.println(letra);
     delay(500);
    
  }


}
