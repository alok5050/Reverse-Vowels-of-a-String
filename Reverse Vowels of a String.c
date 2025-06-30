char* reverseVowels(char* s) {
    int left = 0, right = strlen(s) - 1;
    char temp;

    while(left < right) {
        char c1 = tolower(s[left]);
        if(c1 != 'a' && c1 != 'e' && c1 != 'i' && c1 != 'o' && c1 != 'u') {
            left++;
            continue;
        }
        char c2 = tolower(s[right]);
        if(c2 != 'a' && c2 != 'e' && c2 != 'i' && c2 != 'o' && c2 != 'u') {
            right--;
            continue;
        }

        temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        right--;
        left++;
    }
    return s;
    
}
