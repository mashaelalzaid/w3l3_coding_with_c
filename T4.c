#include <stdio.h>


int StringLength(char sentence[]);
int NumOfWords(char sentence[], int StrLength);
int NumOfVowels(char sentence[], int StrLength);
int VowelFreq (char sentence[], char vowel);

int main() {
char sentence[100];

char c;
printf("Enter the sentence (max is 100 character)\n");
scanf("%[^\n]", sentence);
///fgets(sentence, sizeof(sentence));


//F1 String Length
int StrLength = StringLength(sentence);
printf("String Length is: %d", StrLength);

//F2 Word counter
int wordCount=NumOfWords(sentence, StrLength);
printf("\nWord count is: %d", wordCount);

//F3 Number of vowels
int vowel_counter=NumOfVowels(sentence, StrLength);
printf("\nVowels count is: %d\n", vowel_counter);

//F4 vowel Frequency
printf("Enter Vowel to retrieve its frequency or enter z to exit\n");
char vowel;
int VF;
scanf(" %c", &vowel);
if (vowel!='z'){
VF = VowelFreq(sentence, vowel);
printf("Vowel Frequencies for the letter %c is %d", vowel, VF);
printf("\nEnter Vowel to retrieve its frequency or enter z to exit\n");
scanf(" %c", &vowel);
}

return 0;
}


int StringLength(char *sentence){
int sum=0;

while(sentence[sum] != '\0') {
	sum++;
}

return sum;

}

int NumOfWords(char sentence[], int StrLength){
int counter=1;
for(int i =0; i<StrLength; i++){
	if(sentence[i] == ' ') { counter++;}
}
return counter;
}

int NumOfVowels(char sentence[], int StrLength){
int counter=0;
for(int i =0; i<StrLength; i++){
        if(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u') {
	 counter++;}
}
return counter;

}

int VowelFreq(char sentence[], char vowel){

int counter=0;
for(int i =0; i<100; i++){
        if(sentence[i] == vowel) {
		counter++;
}}
return counter;
}

