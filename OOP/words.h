#ifndef _WORDS_H_
#define _WORDS_H_

class Word {
public:
	Word(const char* content);
    ~Word();
    void display();
private:
	char* content;
};

class ChineseWord: public Word {
public:
    ChineseWord(const char* content);
    ~ChineseWord();
    void display();
};

class EnglishWord: public Word{
    public:
    EnglishWord(const char* content);
    ~EnglishWord();
    void display();
};

#endif