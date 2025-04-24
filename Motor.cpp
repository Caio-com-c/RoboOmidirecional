//Classe do Motor
class Motor
{
  private:
    int pino_in1;
    int pino_in2;

  public: 
    Motor(int sentido_1, int sentido_2){
      pino_in1 = sentido_1;
      pino_in2 = sentido_2;

      pinMode(pino_in1, OUTPUT);
      pinMode(pino_in2, OUTPUT);
    }

    void horario(){
      digitalWrite(pino_in1, 1);
      digitalWrite(pino_in2, 0);
    }

    void antihorario(){
      digitalWrite(pino_in1, 0);
      digitalWrite(pino_in2, 1);
    }

    void parar(){
      digitalWrite(pino_in1, 0);
      digitalWrite(pino_in2, 0);
    }
};

//Pinagem Motor 1
#define IN1 2
#define IN2 3

//Pinagem Motor 2
#define IN3 4
#define IN4 5

//Pinagem Motor 3
#define IN5 6
#define IN6 7

//Pinagem Motor 4
#define IN7 8
#define IN8 9

Motor motor1(IN1, IN2);
Motor motor2(IN3, IN4);
Motor motor3(IN5, IN6);
Motor motor4(IN7, IN8);

void lateral(unsigned long tempo){
  motor1.horario();
  motor4.horario();
  motor2.antihorario();
  motor3.antihorario();
  delay(tempo);
  motor1.parar();
  motor2.parar();
  motor3.parar();
  motor4.parar();
}

void frente(unsigned long tempo){
  motor1.horario();
  motor4.horario();
  motor2.horario();
  motor3.horario();
  delay(tempo);
  motor1.parar();
  motor2.parar();
  motor3.parar();
  motor4.parar();
}

void tras(unsigned long tempo){
  motor1.antihorario();
  motor4.antihorario();
  motor2.antihorario();
  motor3.antihorario();
  delay(tempo);
  motor1.parar();
  motor2.parar();
  motor3.parar();
  motor4.parar();
}

void giro_proprio_eixo(unsigned long tempo){
  motor1.horario();
  motor2.antihorario();
  motor3.horario();
  motor4.antihorario();
  delay(tempo);
  motor1.parar();
  motor2.parar();
  motor3.parar();
  motor4.parar();
}

void diagonal(unsigned long tempo){
  motor1.horario();
  motor4.horario();
  delay(tempo);
  motor1.parar();
  motor2.parar();
  motor3.parar();
  motor4.parar();
}
void setup() {

}

void loop() {
  motor1.parar();
  motor2.parar();
  motor3.parar();
  motor4.parar();
}
