# include <stdio.h> // printf("Text"), scanf("%s",variable)
# include <stdlib.h> // system("Pause").

int main(){
	char word[30];
	printf("Example 2 - Write words and print in console.\n\nWrite a word and press 'Enter'\n");	
	scanf("%[^\n]s",word); 
	printf("You write: %s", word);
	system("pause");
	return 0;
}
