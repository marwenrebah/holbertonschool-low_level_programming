/**
 * reverse_array - reverse a given 
 * @a: the array
 * @n: its size
 */
void reverse_array(int *a, int n)
{
int i = 0;
while (i < n / 2)
{
*(a + n - i - 1) += *(a + i);
*(a + i) = *(a + n - i -  1) - *(a + i);
*(a + n - 1 - i) -= *(a + i);
i++;
}
}
