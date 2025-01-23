//
int led = 13; // Pin digital para el LED
int boton = 9;// Pin digital para el boton
void setup()
{
  pinMode(led, OUTPUT);// Configura el pin como salida
  pinMode(boton, INPUT_PULLUP);// Configura el pin como entrada Pullup
}

void loop(){
  int dato = digitalRead(boton);// Verifica si el botón ha cambiado de estado
  if (dato == LOW) {
    delay(20);
    digitalWrite(led,HIGH);// enciende el LED
  }else{
    delay(20);
  	digitalWrite(led,LOW);// apaga el LED
  }
}
