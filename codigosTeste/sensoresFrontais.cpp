int sensor1 = 1;
int valor_sensor1 = 0;
int sensor2 = 2;
int valor_sensor2 = 0;
int sensor3 = 3;
int valor_sensor3 = 0;
void setup()
{
    // put your setup code here, to run once:
    pinMode(1, INPUT);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    valor_sensor1 = analogRead(sensor1);
    valor_sensor2 = analogRead(sensor2);
    valor_sensor3 = analogRead(sensor3);

    Serial.print("sensor1 = ");
    Serial.print(valor_sensor1);
    Serial.print("//");
    Serial.print("sensor2 = ");
    Serial.print(valor_sensor2);
    Serial.print("//");
    Serial.print("sensor3 = ");
    Serial.println(valor_sensor3);
    delay(500);
}