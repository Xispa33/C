#include "cg.h"

static int getArrayLength(char* array, int allocated_mem) {
    char buffer[allocated_mem];
    const int len = sprintf(buffer, "%s", array);
    return len;
}

bool isGrowingNumber(const int n) {
    char buffer[50];
    const int n_length = sprintf(buffer, "%d", n);
    char *ptr_0 = &buffer[0], *ptr_1 = &buffer[1];

    while (*ptr_1 != '\0') {
        if (*ptr_0 > *ptr_1) {
            return false;
        }
        ptr_0++;
        ptr_1++;
    }
    return true;
}

void displayCamelCase(char* arr) {
    char out[50];
    //int n_length = getArrayLength(arr, (int) sizeof(arr)/sizeof(arr[0])) - 1;
    char *ptr_in = &arr[0];
    char *ptr_out = &out[0];
    while (*ptr_in != '\0') {
        if (isspace((int) *ptr_in)) {
            *ptr_out = toupper((int) *(ptr_in + 1));
            ptr_in++;
        } else {
            *ptr_out = tolower((int) *ptr_in);
        }
        ptr_in++;
        ptr_out++;
    }
    printf("%s\n", out);
    return;
}

int sumFrom2toN(const int N) {
    int out = 0;

    for (int i=2; i<=N; ++i) {
        out += i;
    }

    return out;
}

char* alternateReading(char *arr) {
    char *ptr_1 = arr;
    char *ptr_2 = arr;
    char out[50];
    char *ptr_3 = &out[0];

    while (*ptr_2 != '\0') {
        ptr_2++;
    }
    ptr_2--;

    while (ptr_1 != ptr_2) {
        *ptr_3 = *ptr_1;
        ptr_3++;
        *ptr_3 = *ptr_2;
        ptr_3++;
        ptr_1++;
        ptr_2--;

    }
    *ptr_3 = *ptr_2;
    //memcpy(arr, out, sizeof(out));
    (void) sprintf(arr, "%s", out);
    //sprintf()
    return &arr[0];

}

char* inverseWordReading(char *arr) {
    
}

void offsetReading(int offset, char *arr)
{
    char out[offset];
    char *ptr = arr;

    ptr += offset - 1;

    while (*ptr != '\0')
    {
        ptr -= offset - 1;
        for (int i = 0; i < offset; ++i){
            while (isspace(*ptr)) {
                ptr++;
            }
            out[i] = *ptr;
            //printf("VAL = %c\n", *ptr);
            ptr++;
        }
        printf("%s\n", out);
    }
}

int ascii_short(const void* a, const void* b)
{
    //printf("Comparing %c - %c", *(char*) a, *(char*) b);
    return (int) ( *(char*) a - *(char*) b );
}

void decomposeWord()
{
    char word[20]="Banana";
    
    char out[20];
    int length = sprintf(out, "%s", word);
    //printf("%s\n", out);
    
    qsort(word, length, sizeof(char), ascii_short);
    
    char last_letter = word[0];
    char *ptr = word;
    for (int i=0; i < length; ++i) {
        
        if (*ptr != last_letter) {
            printf("\n%c", *ptr);
            last_letter = *ptr;
        } else {
            printf("%c", *ptr);
        }
        ptr++;
    }
    printf("\nWORD = %s\n", word);

}
//hello world avec offset
//tri ascii
//3A3B3C

/*
int main()
{
    int N;
    scanf("%d", &N);
    int int_arr[N];
    for (int i = 0; i < N; i++) {
        int X;
        scanf("%d", &X);
        int_arr[i] = X;
    }
    int M, cpt;
    scanf("%d", &M);
    for (int i = 0; i < M; i++) {
        int start_range, end_range;
        cpt = 0;
        scanf("%d%d", &start_range, &end_range);
        for (int j = start_range; j <= end_range; ++j) {
            cpt += int_arr[j];
        }
        printf("%d\n", cpt);
    }

    return 0;
}
*/

/*
void rotate_right(char* a, const int n) {
    if (n < 1) return;
    const char temp = a[n - 1];
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

int main()
{
    char s_1[101];
    scanf("%[^\n]", s_1); fgetc(stdin);
    char s_2[101];
    scanf("%[^\n]", s_2);
    char out_1[101];
    char out_2[101];

    int len_word_1 = sprintf(out_1, "%s", s_1);
    int len_word_2 = sprintf(out_2, "%s", s_2);
    
    for (int i=0; i < len_word_1; ++i){
        s_1[i] = toupper((int)s_1[i]);
    }
    for (int i=0; i < len_word_2; ++i){
        s_2[i] = toupper((int)s_2[i]);
    }
    //printf("%s\n", s_1);
    //printf("%s\n", s_2);

    for (int i = 0; i < len_word_1; ++i) {
        rotate_right(s_1, len_word_1);
        //printf("S1 = %s\n", s_1);
        //printf("S2 = %s\n", s_2);
        //printf("MEMCMP RES = %d\n", memcmp(s_1, s_2, len_word_1));
        if (memcmp(s_1, s_2, len_word_1) == 0){
            printf("true");
            return 0;
        }
    }
    printf("false");
    
    //printf("%s\n", out_1);
    //printf("%s\n", s_1<<1);
    //printf("true or false\n");

    return 0;
}
*/

/*
bool isvowel(int ch)
{
  int c = toupper(ch);
 
  return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main()
{
    char string[1001];
    scanf("%[^\n]", string);

    char *ptr = &string[0];

    while (*ptr != '\0') {
        if (isvowel(*ptr)){
            printf("%c%c%c", *ptr, 'p', *ptr);
        } else {
            printf("%c", *ptr);
        }
        ptr++;
    }

    return 0;
}
*/

/*
int cmp(const void *a, const void* b){
    return *(int*) b - *(int*) a;
}

int main()
{
    int N, P;
    scanf("%d %d", &N, &P);

    int int_arr[N];
    int _max = 0;
    int nb_part = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            int points;
            scanf("%d", &points);
            int_arr[j] = points;
        }
        qsort(int_arr, P, sizeof(int), cmp);
        int *ptr = &int_arr[0];
        while (*ptr == int_arr[0]) {
            nb_part++;
            _max += *ptr;
            ptr++;
        }
    }
    printf("%d %d\n", nb_part, _max);

    return 0;
}
*/