void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // 获取自程序运行以来的秒数
  int seconds = millis() / 1000 % 60;

  // 根据秒数点亮相应的 LED
  digitalWrite(2, seconds >= 10 ? HIGH : LOW);
  digitalWrite(3, seconds >= 20 ? HIGH : LOW);
  digitalWrite(4, seconds >= 30 ? HIGH : LOW);
  digitalWrite(6, seconds >= 40 ? HIGH : LOW);
  digitalWrite(8, seconds >= 50 ? HIGH : LOW);
  digitalWrite(9, seconds >= 59 ? HIGH : LOW);
}
