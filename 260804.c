#include <stdio.h>

int main() {
    int hour, minute;
    scanf("%d:%d", &hour, &minute);

    int h12;
    char *period;

    if (hour < 12) {
        period = "AM";
        h12 = hour;
    } else {
        period = "PM";
        h12 = (hour == 12) ? 12 : hour - 12;
    }

    printf("%d:%d %s\n", h12, minute, period);
    return 0;
}
