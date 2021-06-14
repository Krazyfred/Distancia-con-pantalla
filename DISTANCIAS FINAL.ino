#define TRIGGER A1
#define ECHO A0

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinH = 0;
int D1 = 12;
int D2 = 11;
int D3 = 10;
int D4 = 9;
6
int numero, unidades, decenas, centenas, millar;

const float sonido = 34300.0; 

void setup() {
  Serial.begin(9600);

  pinMode(ECHO, INPUT);
  pinMode(TRIGGER, OUTPUT);

  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);  
  pinMode(pinH, OUTPUT); 
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);

}

void loop() {
  iniciarTrigger();

  float distancia = calcularDistancia();

  numero=distancia*10;
  Serial.println(numero);

  unidades = numero%10; numero /=10; //unidades = 2 , numero = 215
  decenas = numero%10; numero/=10; //decenas = 5 , numero = 21
  centenas = numero%10; numero/=10; //centenas = 1, numero = 2
  millar = numero%10; numero/=10; //millar= 2, numero = 0

  delay(1);

  if(unidades==1){
    
    encender_0();
    
    poner_1();
  }
  if(unidades==2){
    
    encender_0();
    
    poner_2();
  }
  if(unidades==3){
    
    encender_0();
    
    poner_3();
  }
  if(unidades==4){
    
    encender_0();
    
    poner_4();
  }
  if(unidades==5){
    
    encender_0();
    
    poner_5();
  }
  if(unidades==6){
    
    encender_0();
    
    poner_6();
  }
  if(unidades==7){
    
    encender_0();
    
    poner_7();
  }
  if(unidades==8){
    
    encender_0();
    
    poner_8();
  }
  if(unidades==9){
    
    encender_0();
    
    poner_9();
  }
  if(unidades==0){
    
    encender_0();
    
    poner_0();
  }
  
  delay(1);


  if(decenas==1){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_1();
    
  }
  if(decenas==2){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_2();
    
  }
  if(decenas==3){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_3();

  }
  if(decenas==4){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_4();
    
  }
  if(decenas==5){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_5();
    
  }
  if(decenas==6){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_6();

  }
  if(decenas==7){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_7();
    
  }
  if(decenas==8){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_8();
    
  }
  if(decenas==9){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_9();

  }
  if(decenas==0){
    
    encender_1();
    digitalWrite(pinH, LOW);
    poner_0();
    
  }

  delay(1);

  if(centenas==1){
    
    encender_2();
    
    poner_1();
  }
  if(centenas==2){
    
    encender_2();
    
    poner_2();
  }
  if(centenas==3){
    
    encender_2();
    
    poner_3();
  }
  if(centenas==4){
    
    encender_2();
    
    poner_4();
  }
  if(centenas==5){
    
    encender_2();
    
    poner_5();
  }
  if(centenas==6){
    
    encender_2();
    
    poner_6();
  }
  if(centenas==7){
    
    encender_2();
    
    poner_7();
  }
  if(centenas==8){
    
    encender_2();
    
    poner_8();
  }
  if(centenas==9){
    
    encender_2();
    
    poner_9();
  }
  if(centenas==0){
    
    encender_2();
    
    poner_0();
  }

  delay(1);

  if(millar==1){
    
    encender_3();
    
    poner_1();
  }
  if(millar==2){
    
    encender_3();
    
    poner_2();
  }
  if(millar==3){
    
    encender_3();
    
    poner_3();
  }
  if(millar==4){
    
    encender_3();
    
    poner_4();
  }
  if(millar==5){
    
    encender_3();
    
    poner_5();
  }
  if(millar==6){
    
    encender_3();
    
    poner_6();
  }
  if(millar==7){
    
    encender_3();
    
    poner_7();
  }
  if(millar==8){
    
    encender_3();
    
    poner_8();
  }
  if(millar==9){
    
    encender_3();
    
    poner_9();
  }
  if(millar==0){
    
    encender_3();
    
    poner_0();
  }

  delay(1);

}




float calcularDistancia(){
  unsigned long tiempo = pulseIn(ECHO, HIGH);

  float distancia = tiempo * 0.000001 * sonido / 2.0;
  /*Serial.print(distancia);
  Serial.print("cm");
  Serial.println();*/
  delay(20);
  return distancia;
}


void iniciarTrigger(){

  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIGGER, LOW);
}






void encender_0(){
  
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
}


void encender_1(){
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);

}


void encender_2(){
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, LOW);
}


void encender_3(){
  
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, HIGH);
}


void poner_0(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, HIGH); 
}


void poner_1(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);
}


void poner_2(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);
}


void poner_3(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);
}


void poner_4(){
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
}


void poner_5(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
}


void poner_6(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW); 
}


void poner_7(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, HIGH);
}


void poner_8(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW); 
}


void poner_9(){
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);
}






