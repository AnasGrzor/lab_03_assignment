  #include <stdio.h>

  int main() {
      float radius, height;
      float areainmeters, volumeinmeters;
      const float PI = 3.142;

      printf("Enter the radius of sphere (in meters): ");
      scanf("%f", &radius);

      areainmeters = 4 * PI * radius * radius;
      volumeinmeters = (4.0/3.0) * PI * radius * radius * radius;

      printf("\nArea of sphere = %.2f square meters", areainmeters);
      printf("\nVolume of sphere = %.2f cubic meters", volumeinmeters);

      return 0;
  }
