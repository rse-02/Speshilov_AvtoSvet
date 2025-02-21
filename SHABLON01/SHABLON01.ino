
//Маркеры памяти
//void - пустота - космос - ничего - не использует память
//int  - интеджер - целое - память для чисел 12345
//char - символы - буквы
//long - для всего
//------setup - Название
//------() - круглые скобки (SHIFT+9, SHIFT+0) настройки
//------{} - фигурные скобки (SHIFT+Х, SHIFT+Ъ) Начало и конец
//Сложных приказов
const int PIN_TO_SENSOR = 2;  // вывод, к которому подключён выход датчика
int pinStateCurrent = LOW;  // текущее состояние вывода
int pinStatePrevious = LOW;  // предыдущее состояние вывода


//способности:

//проверить присутствие  ик двтчик присутствия
void prover(){
  pinStatePrevious = pinStateCurrent;  // сохранение старого состояния
  pinStateCurrent = digitalRead(PIN_TO_SENSOR);  // чтение нового состояния
  if (pinStatePrevious == LOW && pinStateCurrent == HIGH) {  // изменение состояния вывода: LOW -> HIGH
    Serial.println("Motion detected!");  // вывод сообщения о обнаружении движения
  } else if (pinStatePrevious == HIGH && pinStateCurrent == LOW) {  // изменение состояния вывода: HIGH -> LOW
    Serial.println("Motion stopped!");  // вывод сообщения о прекращении движения
  }
}
//выключать свет
void svet0(){
  
}
//включить свет
void svet0()
void setup() {       //-слэш - разрез /слэш в гору \слэш с горы
  
Serial.begin(9600);  // инициализация последовательного порта
  pinMode(PIN_TO_SENSOR, INPUT);  // установка вывода Arduino в режим ввода для чтения значения с выходного вывода датчика
}


void loop() {
 

}
