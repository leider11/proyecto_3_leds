#ifndef LED_HPP
#define LED_HPP

class Led {
    private:
    GPIO_TypeDef* puerto_;
    uint16_t pin_;

    public:
    Led(GPIO_TypeDef* puerto, uint16_t pin);

    void encender();
    void apagar();
    
};

#endif