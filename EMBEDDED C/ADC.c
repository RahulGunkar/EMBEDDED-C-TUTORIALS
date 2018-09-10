/*This code contains two functions for ADC
  user should include the two functions given below in their main file and call them in main
  NOTE: 2nd function returns the value of ADC on pin A0

*/

void initializeADC()
{
  DDRC|=(1<<PC0);
  DDRC|=(1<<PC1);
  ADMUX|=(1<<REFS0);
  ADCSRA|=(1<<ADEN);
  ADMUX&=~(1<<MUX0);
}

float returnAdcValue()
{
  ADCSRA|=(1<<ADSC);
  while(ADSC==1);
  return(ADC);
}

