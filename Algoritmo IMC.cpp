#include <iostream>

using namespace std;

int main() {
float massa;
float altura;
float IMC;

  cout << "Separe os decimais com ponto" << endl << endl;
  cout << "Digite o valor do seu peso:";
  cin >> massa;
  cout << "Digite o valor da sua altura:";
  cin >> altura;

  IMC = massa/(altura*altura);

  if (IMC <= 18.5) {
  cout << "Abaixo do peso" << endl << endl;  
}
   
   if (IMC >= 18.6 && IMC <= 24.9) {
  cout << "Peso ideal" << endl << endl;  
}
 
    if (IMC >= 25.0 && IMC <= 29.9) {
  cout << "Levemente acima do peso" << endl << endl;  
}
    if (IMC >= 30.0 && IMC <= 34.9) {
  cout << "Obesidade de grau I" << endl << endl;  
}
 
  if (IMC >= 35.0 && IMC <= 39.9) {
  cout << "Obesidade de grau II (Severa)" << endl << endl;  
}

  if (IMC >= 40.0) {
  cout << "Obesidade de grau III (Morbida)" << endl << endl;  
} 
                 
  cout << "O valor do seu IMC e:" << IMC << endl;

	system("pause");

  return 0;
}
