#include <iostream>
#include <math.h>

using namespace std;

int main() {
setlocale(LC_ALL,"Portuguese");
	
float massa;
float altura;
float IMC;
cout << fixed;
cout.precision(1);

  cout << "OBS: Separe os decimais com ponto." << endl << endl;
  cout << "Digite o valor do seu peso: ";
  cin >> massa;
  cout << "Digite o valor da sua altura: ";
  cin >> altura;

  IMC = massa / pow(altura, 2);

  if (IMC <= 18.5) {
  cout << "\nVocê está abaixo do peso ideal," << " e o valor do seu IMC é: " << IMC << endl;  
}
   
   if (IMC >= 18.6 && IMC <= 24.9) {
  cout << "\nVocê está com o peso ideal," << " e o valor do seu IMC é: " << IMC << endl;  
}
 
    if (IMC >= 25.0 && IMC <= 29.9) {
  cout << "\nVocê está levemente acima do peso ideal," << " e o valor do seu IMC é: " << IMC << endl;  
}
    if (IMC >= 30.0 && IMC <= 34.9) {
  cout << "\nVocê está com obesidade de grau I," << " e o valor do seu IMC é: " << IMC << endl;  
}
 
  if (IMC >= 35.0 && IMC <= 39.9) {
  cout << "\nVocê está com obesidade de grau II (Severa)," << " e o valor do seu IMC é: " << IMC << endl;  
}

  if (IMC >= 40.0) {
  cout << "\nVocê está com obesidade de grau III (Morbida), " << " e o valor do seu IMC é: " << IMC << endl;  
} 
	
	system("pause");

  return 0;
}