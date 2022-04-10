class ConversionIllum {
  public:
    ConversionIllum(int pin);
    void convertVolt();
    void convertResistance();
    void convertIlluminance();
    void illumPrint();
    float illuminance;
    float volt;
  private:
    const float fixed = 10000.0;
    
    float resistance;
    int pinNumber;
    int value;
};
