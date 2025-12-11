#include "ft_printf.h"
#include <stdio.h>  // لاختبار printf الحقيقية

int main()
{
    // اختبار بدون أي تنسيق
    ft_printf("Hello World!\n");
    printf("Hello World!\n");

    // اختبار %c (طباعة حرف واحد)
    ft_printf("Character: %c\n", 'A');     // اختبار %c مع ft_printf
    printf("Character: %c\n", 'A');        // اختبار %c مع printf الحقيقية
    ft_printf("Character: %c\n", '\n');    // اختبار الحرف الجديد (newline)
    printf("Character: %c\n", '\n');       // اختبار الحرف الجديد (newline)

    // اختبار %s (طباعة سلسلة نصية)
    ft_printf("String: %s\n", "42 Network");  // اختبار %s مع ft_printf
    printf("String: %s\n", "42 Network");     // اختبار %s مع printf الحقيقية

    // اختبار %p (طباعة المؤشر بنظام Hexadecimal)
    ft_printf("Pointer: %p\n", (void *)123456789);  // اختبار %p مع ft_printf
    printf("Pointer: %p\n", (void *)123456789);     // اختبار %p مع printf الحقيقية

    // اختبار %d (طباعة رقم عشري موقّع)
    ft_printf("Decimal: %d\n", 123456789);  // اختبار %d مع ft_printf
    printf("Decimal: %d\n", 123456789);     // اختبار %d مع printf الحقيقية
    ft_printf("Decimal: %d\n", -123456789); // اختبار %d مع رقم سالب
    printf("Decimal: %d\n", -123456789);    // اختبار %d مع رقم سالب
    ft_printf("Decimal: %d\n", 0);          // اختبار %d مع صفر
    printf("Decimal: %d\n", 0);             // اختبار %d مع صفر

    // اختبار %i (طباعة عدد صحيح)
    ft_printf("Integer: %i\n", 123456789);  // اختبار %i مع ft_printf
    printf("Integer: %i\n", 123456789);     // اختبار %i مع printf الحقيقية
    ft_printf("Integer: %i\n", -123456789); // اختبار %i مع رقم سالب
    printf("Integer: %i\n", -123456789);    // اختبار %i مع رقم سالب
    ft_printf("Integer: %i\n", 0);          // اختبار %i مع صفر
    printf("Integer: %i\n", 0);             // اختبار %i مع صفر

    // اختبار %u (طباعة عدد صحيح غير موقّع)
    ft_printf("Unsigned Decimal: %u\n", 123456789);  // اختبار %u مع ft_printf
    printf("Unsigned Decimal: %u\n", 123456789);     // اختبار %u مع printf الحقيقية
    ft_printf("Unsigned Decimal: %u\n", 0);          // اختبار %u مع صفر
    printf("Unsigned Decimal: %u\n", 0);             // اختبار %u مع صفر
    ft_printf("Unsigned Decimal: %u\n", -1);         // اختبار %u مع رقم سلبي (يجب أن يطبع قيمة غير موقعة كبيرة)
    printf("Unsigned Decimal: %u\n", -1);            // اختبار %u مع رقم سلبي (يجب أن يطبع قيمة غير موقعة كبيرة)

    // اختبار %x (طباعة عدد في صيغة hexadecimal صغيرة)
    ft_printf("Hexadecimal (lowercase): %x\n", 123456789);  // اختبار %x مع ft_printf
    printf("Hexadecimal (lowercase): %x\n", 123456789);     // اختبار %x مع printf الحقيقية
    ft_printf("Hexadecimal (lowercase): %x\n", 0);          // اختبار %x مع صفر
    printf("Hexadecimal (lowercase): %x\n", 0);             // اختبار %x مع صفر
    ft_printf("Hexadecimal (lowercase): %x\n", -1);         // اختبار %x مع رقم سلبي
    printf("Hexadecimal (lowercase): %x\n", -1);            // اختبار %x مع رقم سلبي

    // اختبار %X (طباعة عدد في صيغة hexadecimal كبيرة)
    ft_printf("Hexadecimal (uppercase): %X\n", 123456789);  // اختبار %X مع ft_printf
    printf("Hexadecimal (uppercase): %X\n", 123456789);     // اختبار %X مع printf الحقيقية
    ft_printf("Hexadecimal (uppercase): %X\n", 0);          // اختبار %X مع صفر
    printf("Hexadecimal (uppercase): %X\n", 0);             // اختبار %X مع صفر
    ft_printf("Hexadecimal (uppercase): %X\n", -1);         // اختبار %X مع رقم سلبي
    printf("Hexadecimal (uppercase): %X\n", -1);            // اختبار %X مع رقم سلبي

    // اختبار %% (طباعة العلامة المئوية)
    ft_printf("Percent Sign: %%\n");  // اختبار %% مع ft_printf
    printf("Percent Sign: %%\n");     // اختبار %% مع printf الحقيقية

    // اختبارات خاصة مع مسافات وأحرف خاصة
    ft_printf("Tab: %c | Newline: %c | Backslash: %c | Quote: %c\n", '\t', '\n', '\\', '\"');
    printf("Tab: %c | Newline: %c | Backslash: %c | Quote: %c\n", '\t', '\n', '\\', '\"');
    
    // اختبار مع قيم متطرفة للأعداد
    ft_printf("Max Int: %d | Min Int: %d\n", 214748364, -214748364);
    printf("Max Int: %d | Min Int: %d\n", 214748364, -214748364);
    ft_printf("Max Unsigned: %u\n", 429496729);
    printf("Max Unsigned: %u\n", 429496729);

    // اختبار المؤشر مع قيم كبيرة جدًا
    ft_printf("Large Pointer: %p\n", (void *)0x7fffffff12345678);
    printf("Large Pointer: %p\n", (void *)0x7fffffff12345678);
    
    // اختبار دمج جميع التنسيقات في سطر واحد
    ft_printf("Combination: %c %s %d %p %x %%\n", 'B', "Hello", 42, (void *)987654321, 255);  // جميع التنسيقات في سطر واحد
    printf("Combination: %c %s %d %p %x %%\n", 'B', "Hello", 42, (void *)987654321, 255);  // مع printf الحقيقية

    // اختبار مع أرقام صغيرة جدًا
    ft_printf("Small Number: %x\n", 0x1);  // اختبار %x مع رقم صغير جدًا
    printf("Small Number: %x\n", 0x1);     // اختبار %x مع رقم صغير جدًا

    return 0;
}
