#include "test.h"

void test_atoi() {
    // Test cases
    char *str1 = "12345";
    char *str2 = "   -6789";
    char *str3 = "+-10";
    char *str4 = "123abc";
    char *str5 = " +abc123";

    // Testing ft_atoi
    int result1 = ft_atoi(str1);
    int result2 = ft_atoi(str2);
    int result3 = ft_atoi(str3);
    int result4 = ft_atoi(str4);
    int result5 = ft_atoi(str5);

    // Testing atoi from the standard library
    int std_result1 = atoi(str1);
    int std_result2 = atoi(str2);
    int std_result3 = atoi(str3);
    int std_result4 = atoi(str4);
    int std_result5 = atoi(str5);

    if (result1 == std_result1 && result2 == std_result2 && result3 == std_result3 &&
        result4 == std_result4 && result5 == std_result5) {
        printf("Atoi - All Good!\n");
    } else {
        printf("Atoi - Error!\n");
    }
}

void test_isalnum () {
    char* string = "Hello my 1 # friend $ 16";
    int error = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (isalnum(string[i]) != ft_isalnum(string[i])) {
            error = 1;
            break;
        }
    }
    if (error) {
        printf("isalnum - Error!\n");
        return ;
    }
    printf("isalnum - All Good!\n");
    return ;

}

int main () {
    test_atoi();
    test_isalnum ();
    return 0;
}