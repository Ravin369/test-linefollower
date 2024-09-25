// define digital pins to L1, L2, R1, R2 and configure them as output
// define pwm pins to enL, enR
// set upperBound to maximum int speed required
// set lowerBound to minimum int speed required

void motor(int a, int b) {
  if (a > 0) {
    digitalWrite(L1, HIGH);
    digitalWrite(L2, LOW);
  } else {
    a = -(a);
    digitalWrite(L1, LOW);
    digitalWrite(L2, HIGH);
  }
  if (b > 0) {
    digitalWrite(R1, HIGH);
    digitalWrite(R2, LOW);
  } else {
    b = -(b);
    digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
  }

  constrain(a, lowerBound, upperBound);
  constrain(b, lowerBound, upperBound);
  
  analogWrite(enL, a);
  analogWrite(enR, b);
}