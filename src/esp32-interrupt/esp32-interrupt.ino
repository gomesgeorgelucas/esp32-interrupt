#define PIN_LED 32
#define PIN_LDR_LOW 2
#define PIN_LDR_HIGH 4

void IRAM_ATTR turnLEDOn_ISR()
{
    digitalWrite(PIN_LED, HIGH);
}

void IRAM_ATTR turnLEDOff_ISR()
{
    digitalWrite(PIN_LED, LOW);
}

void setup()
{
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_LDR_LOW, INPUT);
    pinMode(PIN_LDR_HIGH, INPUT);

    attachInterrupt(PIN_LDR_LOW, turnLEDOn_ISR, RISING);
    attachInterrupt(PIN_LDR_HIGH, turnLEDOff_ISR, FALLING);
}

void loop()
{
}