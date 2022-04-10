class ConversionTemperature {
  public:
    ConversionTemperature(int pin);
    void convertVolt();
    void convertTemp();
    void tempPrint();
    float temperature;
  private:
    float volt;
    int pinNumber;
    int value;
};
