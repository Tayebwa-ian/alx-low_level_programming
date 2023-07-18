#include <stdio.h>
/**
 * main - computes and prints the sum
 *
 * Return: 0
 */
int main() {
int limit = 1024;
int sum = 0;
for (int i = 1; i < limit; i++) {
if (i % 3 == 0 || i % 5 == 0) {
sum += i;
}
}
printf("%d", sum);
return (0);
}
