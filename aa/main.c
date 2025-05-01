#include <mega32.h>
#include <alcd.h>   // مكتبة LCD
#include <delay.h>  // مكتبة التأخير

void setup_ports() {
    // تهيئة البورتات المتصلة بالدائرة المتكاملة
    DDRA = 0x03;  // تهيئة PA0 و PA1 كدخل
    DDRB = 0x01;  // تهيئة PB0 كخرج
    DDRC = 0x03;  // تهيئة PC0 و PC1 كإخراج (SCL و SDA لـ LCD)

    // توصيل VCC و GND للدائرة المتكاملة إذا لزم الأمر
    PORTA.6 = 0;  // توصيل GND إلى الدائرة المتكاملة
    PORTC.0 = 1;  // توصيل VCC إلى الدائرة المتكاملة
}

void test_IC() {
    // تهيئة LCD
    lcd_init(16);
    lcd_clear();

    // مثال لاختبار IC نوع AND 7408
    // النمط الأول: (0, 0) => 0
    PORTA = 0b00000000;  // إرسال (0,0) إلى المدخلات
    delay_ms(10);        // تأخير لضمان الاستقرار
    if (PINB.0 == 0) {   // تحقق من الناتج
        lcd_putsf("AND Test Pass");
    } else {
        lcd_putsf("AND Test Fail");
    }

    // النمط الثاني: (1, 1) => 1
    PORTA = 0b00000011;  // إرسال (1,1) إلى المدخلات
    delay_ms(10);        // تأخير لضمان الاستقرار
    if (PINB.0 == 1) {   // تحقق من الناتج
        lcd_putsf("AND Test Pass");
    } else {
        lcd_putsf("AND Test Fail");
    }
}

void main() {
    setup_ports();  // تهيئة البورتات
    lcd_clear();    // مسح الشاشة

    while (1) {
        test_IC();  // إجراء اختبار الدائرة المتكاملة
        delay_ms(1000);  // تأخير بين الاختبارات
    }
}
