#include <stdio.h>
#include <string.h>

int main()
{
    char a[82], b[82];
    char result[83]; // 최대 80자리 + 올림 1자리 + 널문자
    int carry = 0, i, j, k;

    scanf("%s %s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;

    i = lenA - 1;
    j = lenB - 1;
    k = maxLen;

    result[k + 1] = '\0'; // 문자열 끝 표시

    while (k > 0)
    {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;

        int sum = bitA + bitB + carry;
        result[k] = (sum % 2) + '0';
        carry = sum / 2;

        i--;
        j--;
        k--;
    }

    if (carry)
        result[0] = '1';
    else
        result[0] = '0';

    // 🔑 불필요한 leading zero 제거
    int start = 0;
    while (result[start] == '0' && result[start + 1] != '\0')
        start++;

    printf("%s\n", result + start);

    return 0;
}
