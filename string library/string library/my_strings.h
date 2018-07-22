#ifndef MY_STRINGS_H
#define MY_STRINGS_H
class my_strings
{
private:
	int size;
	char *str;
public:
	my_strings(int);
	void input();
	void show();
	void left(int);
	void right(int);
	void mid(int,int);
	int str_length();
	int find_sub_string(my_strings);
	void get_sub_str(int,int);
	void to_uppar();
	void to_lower();
	void to_proper();
	void to_alternate_case();
	void right_concatenate();
	void left_concatenate();
	int find_occurences_of_a_character(char,int[]);
	int find_occurences_of_a_string(my_strings,int[]);
	void remove_character(char);
	void remove_substring();

};
#endif