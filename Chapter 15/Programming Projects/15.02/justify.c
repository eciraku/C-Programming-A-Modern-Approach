/* Formats a file of text */

#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char const *argv[])
{
	char word[MAX_WORD_LEN + 2];
	int word_len;

	clear_line();
	for (;;) {
		word_len = read_word(word, MAX_WORD_LEN + 1);
		if (word_len == 0) {
			flush_line();
			return 0;
		}
		if (word_len + 1 > space_remaining()) {
			write_line();
			clear_line();
		}
		add_word(word);
	}
}