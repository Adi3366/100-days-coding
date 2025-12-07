#include <stdio.h>

void wait_enter() {
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');
}

int read_int() {
    int x;
    while (scanf("%d", &x) != 1) {
        printf("Invalid input. Enter a number: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return x;
}

void read_two_ints(int *a, int *b) {
    while (1) {
        if (scanf("%d %d", a, b) == 2) {
            while (getchar() != '\n');
            return;
        } else {
            printf("Invalid input. Enter two numbers separated by space (e.g., 1 2): ");
            while (getchar() != '\n');
        }
    }
}

double read_double() {
    double d;
    while (scanf("%lf", &d) != 1) {
        printf("Invalid input. Enter a number: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    return d;
}

void print_header(const char *title) {
    printf("\n----------------------------------------\n");
    printf("%s\n", title);
    printf("----------------------------------------\n");
}

void convert_length() {
    print_header("Length Converter");
    printf("1. Meter (m)\n2. Kilometer (km)\n3. Centimeter (cm)\n4. Millimeter (mm)\n");
    printf("5. Mile (mi)\n6. Yard (yd)\n7. Foot (ft)\n8. Inch (in)\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t;
    read_two_ints(&s, &t);

    printf("Enter value: ");
    double v = read_double();

    double to_m = 0.0;
    switch (s) {
        case 1: to_m = v; break;
        case 2: to_m = v * 1000.0; break;
        case 3: to_m = v / 100.0; break;
        case 4: to_m = v / 1000.0; break;
        case 5: to_m = v * 1609.344; break;
        case 6: to_m = v * 0.9144; break;
        case 7: to_m = v * 0.3048; break;
        case 8: to_m = v * 0.0254; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_m; break;
        case 2: res = to_m / 1000.0; break;
        case 3: res = to_m * 100.0; break;
        case 4: res = to_m * 1000.0; break;
        case 5: res = to_m / 1609.344; break;
        case 6: res = to_m / 0.9144; break;
        case 7: res = to_m / 0.3048; break;
        case 8: res = to_m / 0.0254; break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

void convert_mass() {
    print_header("Mass Converter");
    printf("1. Kilogram (kg)\n2. Gram (g)\n3. Milligram (mg)\n4. Tonne (t)\n5. Pound (lb)\n6. Ounce (oz)\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double to_kg = 0.0;
    switch (s) {
        case 1: to_kg = v; break;
        case 2: to_kg = v / 1000.0; break;
        case 3: to_kg = v / 1000000.0; break;
        case 4: to_kg = v * 1000.0; break;
        case 5: to_kg = v * 0.45359237; break;
        case 6: to_kg = v * 0.028349523125; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_kg; break;
        case 2: res = to_kg * 1000.0; break;
        case 3: res = to_kg * 1000000.0; break;
        case 4: res = to_kg / 1000.0; break;
        case 5: res = to_kg / 0.45359237; break;
        case 6: res = to_kg / 0.028349523125; break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

void convert_temperature() {
    print_header("Temperature Converter");
    printf("1. Celsius (C)\n2. Fahrenheit (F)\n3. Kelvin (K)\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double C = 0.0;
    if (s == 1) C = v;
    else if (s == 2) C = (v - 32.0) * 5.0 / 9.0;
    else if (s == 3) C = v - 273.15;
    else { printf("Invalid source unit.\n"); return; }

    double res = 0.0;
    if (t == 1) res = C;
    else if (t == 2) res = C * 9.0 / 5.0 + 32.0;
    else if (t == 3) res = C + 273.15;
    else { printf("Invalid target unit.\n"); return; }

    printf("\nResult: %.10g\n", res);
}

void convert_time() {
    print_header("Time Converter");
    printf("1. Second (s)\n2. Minute (min)\n3. Hour (h)\n4. Day\n5. Week\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double to_sec = 0.0;
    switch (s) {
        case 1: to_sec = v; break;
        case 2: to_sec = v * 60.0; break;
        case 3: to_sec = v * 3600.0; break;
        case 4: to_sec = v * 86400.0; break;
        case 5: to_sec = v * 604800.0; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_sec; break;
        case 2: res = to_sec / 60.0; break;
        case 3: res = to_sec / 3600.0; break;
        case 4: res = to_sec / 86400.0; break;
        case 5: res = to_sec / 604800.0; break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

void convert_area() {
    print_header("Area Converter");
    printf("1. m^2\n2. km^2\n3. cm^2\n4. hectare (ha)\n5. acre\n6. ft^2\n7. in^2\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double to_m2 = 0.0;
    switch (s) {
        case 1: to_m2 = v; break;
        case 2: to_m2 = v * 1000000.0; break;
        case 3: to_m2 = v / 10000.0; break;
        case 4: to_m2 = v * 10000.0; break;
        case 5: to_m2 = v * 4046.8564224; break;
        case 6: to_m2 = v * 0.09290304; break;
        case 7: to_m2 = v * 0.00064516; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_m2; break;
        case 2: res = to_m2 / 1000000.0; break;
        case 3: res = to_m2 * 10000.0; break;
        case 4: res = to_m2 / 10000.0; break;
        case 5: res = to_m2 / 4046.8564224; break;
        case 6: res = to_m2 / 0.09290304; break;
        case 7: res = to_m2 / 0.00064516; break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

void convert_volume() {
    print_header("Volume Converter");
    printf("1. m^3\n2. L\n3. mL\n4. cm^3\n5. in^3\n6. US gallon\n7. US pint\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double to_m3 = 0.0;
    switch (s) {
        case 1: to_m3 = v; break;
        case 2: to_m3 = v / 1000.0; break;
        case 3: to_m3 = v / 1000000.0; break;
        case 4: to_m3 = v / 1000000.0; break;
        case 5: to_m3 = v * 0.000016387064; break;
        case 6: to_m3 = v * 0.003785411784; break;
        case 7: to_m3 = v * 0.000473176473; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_m3; break;
        case 2: res = to_m3 * 1000.0; break;
        case 3: res = to_m3 * 1000000.0; break;
        case 4: res = to_m3 * 1000000.0; break;
        case 5: res = to_m3 / 0.000016387064; break;
        case 6: res = to_m3 / 0.003785411784; break;
        case 7: res = to_m3 / 0.000473176473; break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

void convert_speed() {
    print_header("Speed Converter");
    printf("1. m/s\n2. km/h\n3. mph\n4. ft/s\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double to_ms = 0.0;
    switch (s) {
        case 1: to_ms = v; break;
        case 2: to_ms = v / 3.6; break;
        case 3: to_ms = v * 0.44704; break;
        case 4: to_ms = v * 0.3048; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_ms; break;
        case 2: res = to_ms * 3.6; break;
        case 3: res = to_ms / 0.44704; break;
        case 4: res = to_ms / 0.3048; break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

void convert_data() {
    print_header("Data Storage Converter");
    printf("1. bit (b)\n2. Byte (B)\n3. KB (10^3 B)\n4. KiB (2^10 B)\n");
    printf("5. MB (10^6 B)\n6. MiB (2^20 B)\n7. GB (10^9 B)\n8. GiB (2^30 B)\n");

    printf("Enter source unit number and target unit number (example: 1 2): ");
    int s, t; read_two_ints(&s, &t);
    printf("Enter value: "); double v = read_double();

    double to_B = 0.0;
    switch (s) {
        case 1: to_B = v / 8.0; break;
        case 2: to_B = v; break;
        case 3: to_B = v * 1000.0; break;
        case 4: to_B = v * 1024.0; break;
        case 5: to_B = v * 1000000.0; break;
        case 6: to_B = v * 1024.0 * 1024.0; break;
        case 7: to_B = v * 1000000000.0; break;
        case 8: to_B = v * 1024.0 * 1024.0 * 1024.0; break;
        default: printf("Invalid source unit.\n"); return;
    }

    double res = 0.0;
    switch (t) {
        case 1: res = to_B * 8.0; break;
        case 2: res = to_B; break;
        case 3: res = to_B / 1000.0; break;
        case 4: res = to_B / 1024.0; break;
        case 5: res = to_B / 1000000.0; break;
        case 6: res = to_B / (1024.0 * 1024.0); break;
        case 7: res = to_B / 1000000000.0; break;
        case 8: res = to_B / (1024.0 * 1024.0 * 1024.0); break;
        default: printf("Invalid target unit.\n"); return;
    }

    printf("\nResult: %.10g\n", res);
}

int main() {
    while (1) {
        print_header("UNIT CONVERTER (SIMPLE INPUT)");
        printf("1. Length\n2. Mass\n3. Temperature\n4. Time\n5. Area\n6. Volume\n7. Speed\n8. Data Storage\n9. Exit\n");

        printf("Enter choice: ");
        int c = read_int();

        switch (c) {
            case 1: convert_length(); break;
            case 2: convert_mass(); break;
            case 3: convert_temperature(); break;
            case 4: convert_time(); break;
            case 5: convert_area(); break;
            case 6: convert_volume(); break;
            case 7: convert_speed(); break;
            case 8: convert_data(); break;
            case 9: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice.\n");
        }

        wait_enter();
    }
    return 0;
}
