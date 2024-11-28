


// pines de entradas
int boton0 = 36; //8;
int boton1 = 35; //;

// pines de salidas
int led0 = 26; //5;


// Variables Auxiliares
int X0 = 0;
int X1 = 0;

int Y0 = 0;

int R = 0;

void setup() {
  // Se ejecuta una sola vez
  pinMode(boton0, INPUT);
  pinMode(boton1, INPUT);
  pinMode(led0, OUTPUT);

}

void loop() {

//  Y0 = X0;
  R = (X0 || R) && !X1;
  Y0 = R;


  
  // Se ejecuta infinitamente
  X0 = digitalRead(boton0);
  X1 = digitalRead(boton1);
  
  digitalWrite(led0, Y0);

  
}
