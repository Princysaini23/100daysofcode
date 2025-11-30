//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    enum Status s;

    printf("Enum Names and Their Integer Values:\n");

    for (s = SUCCESS; s <= TIMEOUT; s += 10) {  // increment by 10 to match enum values
        switch (s) {
            case SUCCESS:
                printf("SUCCESS = %d\n", s);
                break;

            case FAILURE:
                printf("FAILURE = %d\n", s);
                break;

            case TIMEOUT:
                printf("TIMEOUT = %d\n", s);
                break;
        }
    }

    return 0;
}
