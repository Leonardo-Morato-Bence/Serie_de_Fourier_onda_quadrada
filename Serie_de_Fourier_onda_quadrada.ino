/*
Programa responsável por por plotar o gráfico do resultado da série de Fourier
de uma onda quadrada no plotter serial 
*/

//Parâmetros configuraveis
unsigned long amplitude = 1000;
int frequencias = 100;
unsigned int angulo = 360;

void setup() {
  Serial.begin(9600);
}

void loop() {

  for(int n=0; n<angulo; n++)
  {
    long calculo = (amplitude/1)*((sin(n*1*(PI/180))));
    
    for(int f=3; f<frequencias; f+=2)
    {
      calculo += ((amplitude/f)*((sin(n*f*(PI/180)))));
    }

    Serial.println(calculo);
  }
}
