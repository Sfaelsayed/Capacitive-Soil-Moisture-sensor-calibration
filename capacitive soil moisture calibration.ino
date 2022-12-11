int soiPin = 39;
int moisture;
int percentage;

int map_low = 95;
int map_high = 1700;

void setup() {
  Serial.begin(9600);
}

void loop(){
  moisture = analogRead(soiPin);
  Serial.print("Raw: ");
  Serial.print(moisture);
  percentage = map(moisture, map_low, map_high, 100, 0);
  Serial.print(" | percentage: ");
  Serial.print(percentage);
  Serial.println("%");
  delay(1000);
}
