#define SIZE 32 
void display(String sentence)
{
  String checkStr = "1ifl ";
  int tam = sentence.length();
  int min = -(6 * tam);
  for (int a = SIZE; a >= min; a--)
  {
    int posX = a;
    for (int i = 0; i < tam; i++)
    {
      if (checkStr.indexOf(sentence[i]) != -1)
        posX--;
      if (posX <= 32)
        matrix.drawChar(posX, 0, sentence[i], 1, 0, 1);
      if (checkStr.indexOf(sentence[i]) != -1)
        posX += 5;
      else
        posX += 6;
    }
    matrix.write();
    delay(45);
  }
}
