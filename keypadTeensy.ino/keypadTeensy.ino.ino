

#include <usb_keyboard.h>


int ledPin = 13;
int whitePin = 5; //row
int bluePin = 4; //row
int redPin = 3; //column
int orangePin = 2; //column
int testPin;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(bluePin, INPUT_PULLUP);
  pinMode(whitePin, INPUT_PULLUP);
  pinMode(redPin, INPUT_PULLUP);
  pinMode(orangePin, INPUT_PULLUP);
}

void loop()
{
  boolean k = pinCheck(bluePin, redPin); //acute a
  boolean l = pinCheck(bluePin, orangePin); //grave a
  boolean m = pinCheck(whitePin, redPin); // circumflex a
  boolean n = pinCheck(whitePin, orangePin); //tilde a
  if (k == true)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    Keyboard.set_modifier(MODIFIERKEY_ALT);// acute a
    Keyboard.send_now();

    Keyboard.set_key1(KEYPAD_0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_5);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  if (l == true)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    Keyboard.set_modifier(MODIFIERKEY_ALT); // grave a
    Keyboard.send_now();

    Keyboard.set_key1(KEYPAD_0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_4);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  if (m == true)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    Keyboard.set_modifier(MODIFIERKEY_ALT); // circumflex a
    Keyboard.send_now();

    Keyboard.set_key1(KEYPAD_0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_6);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  if (n == true)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    Keyboard.set_modifier(MODIFIERKEY_ALT); // tilde a
    Keyboard.send_now();

    Keyboard.set_key1(KEYPAD_0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(0);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_2);
    Keyboard.send_now();
    Keyboard.set_key1(KEYPAD_8);
    Keyboard.send_now();
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
boolean pinCheck(int row, int col)
{

  pinMode(row, OUTPUT);
  digitalWrite(row, LOW);
  boolean result;
  if (digitalRead(col) == LOW)
  {
    result = true;
  }
  else
  {
    result = false;
  }
  pinMode(row, INPUT_PULLUP);
  return result;
  
}
