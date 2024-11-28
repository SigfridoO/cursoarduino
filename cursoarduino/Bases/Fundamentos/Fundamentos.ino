


// pines de entradas
int BA = 36; //8;
int BP = 35; //;
int S1 = 34;

// pines de salidas
int MotorA = 26; //5;
int MotorB = 27; //5;


// Variables Auxiliares
//Entradas
int X0 = 0;
int X1 = 0;
int X2 = 0;

// Salidas
int Y0 = 0;
int Y1 = 0;

int R = 0;
int GIRO = 0;
//int Z0 = 0;
//int Z1 = 0;


void setup() {
  // Se ejecuta una sola vez
  pinMode(BA, INPUT);
  pinMode(BP, INPUT);
  pinMode(S1, INPUT);
  
  pinMode(MotorA, OUTPUT);
  pinMode(MotorB, OUTPUT);

}

void loop() {

  R = (X0 || R) && !X1;
  GIRO = R && !X2;
  Y0 = R && GIRO;
  Y1 = R && !GIRO;


  
  // Se ejecuta infinitamente
  X0 = digitalRead(BA);
  X1 = digitalRead(BP);
  X2 = digitalRead(S1);
  
  digitalWrite(MotorA, Y0);
  digitalWrite(MotorB, Y1);

  
}
