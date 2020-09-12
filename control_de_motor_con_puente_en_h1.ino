void setup()
{
  pinMode(8, OUTPUT); //pin 8 de salida
  pinMode(9, OUTPUT);// pin 9 de salida
  pinMode(13,OUTPUT);// pin 13 de salida es pin siempre se utiliza
  // es el pin por defecto de control
}

void CambiaLed(){//se define la funcion asociada al arduino
  digitalWrite(13,!digitalRead(13));//lectura de los pin out y 
  //se invierte su valor con el ! o sea si escribo un high 
  //invierte un low, o sea invierte el sentido
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);//giro del motor hacia la derecha
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH);//motor se detiene
  digitalWrite(8, HIGH);//motor se detiene
  delay(500); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);//giro del motor en sentido contrario
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed();// se llama a la funcion cambialed
}