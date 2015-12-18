/* PROYECTO DE INTELIGENCIA ARTIFICIAL GRUPO 1 */
int cuarto1 = D0;
int cuarto2 = D1;
int sala = D2;
int comedor = D3;
int patio = D4;

void setup()
{
   pinMode(cuarto1, OUTPUT);
   pinMode(cuarto2, OUTPUT);
   pinMode(sala, OUTPUT);
   pinMode(comedor, OUTPUT);
   pinMode(patio, OUTPUT);

   Spark.function("cuarto1",encCuarto1);
   Spark.function("cuarto2",encCuarto2);
   Spark.function("sala",encSala);
   Spark.function("comedor",encComedor);
   Spark.function("patio",encPatio);
   Spark.function("todos",encTodos);


}



void loop()
{

}




int encCuarto1(String comando) {

    if (comando=="on") {
        digitalWrite(cuarto1,HIGH);
        return 1;
    }
    else if (comando=="off") {
        digitalWrite(cuarto1,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int encCuarto2(String comando) {

    if (comando=="on") {
        digitalWrite(cuarto2,HIGH);
        return 1;
    }
    else if (comando=="off") {
        digitalWrite(cuarto2,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int encSala(String comando) {

    if (comando=="on") {
        digitalWrite(sala,HIGH);
        return 1;
    }
    else if (comando=="off") {
        digitalWrite(sala,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int encComedor(String comando) {

    if (comando=="on") {
        digitalWrite(comedor,HIGH);
        return 1;
    }
    else if (comando=="off") {
        digitalWrite(comedor,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int encPatio(String comando) {

    if (comando=="on") {
        digitalWrite(patio,HIGH);
        return 1;
    }
    else if (comando=="off") {
        digitalWrite(patio,LOW);
        return 0;
    }
    else {
        return -1;
    }
}

int encTodos(String comando) {

    if (comando=="on") {
        digitalWrite(cuarto1,HIGH);
        digitalWrite(cuarto2,HIGH);
        digitalWrite(sala,HIGH);
        digitalWrite(comedor,HIGH);
        digitalWrite(patio,HIGH);
        return 1;
    }
    else if (comando=="off") {
        digitalWrite(cuarto1,LOW);
        digitalWrite(cuarto2,LOW);
        digitalWrite(sala,LOW);
        digitalWrite(comedor,LOW);
        digitalWrite(patio,LOW);
        return 0;
    }
    else {
        return -1;
    }
}
