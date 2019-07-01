#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include<QTextToSpeech>

class QTextEdit;

class Button;

class Keyboard : public QWidget
{
    Q_OBJECT

public:
   Keyboard(QWidget *parent = nullptr);

private slots:
    void characterClicked();
    void backspaceClicked();
    void speakButtonClicked();
    void clearAllButtonClicked();
    void shiftButtonClicked();

private:
    Button *createButton(const QString &text, const char * member);

    QTextToSpeech *m_speech;

    QTextEdit *display;

    enum { NumCharButtons = 29 };
    Button *characterButtons[NumCharButtons];

    enum { NumNumberRowButtons =  13};
    Button *numberRowButtons[NumNumberRowButtons];

    int shiftFlag;

};

#endif // KEYBOARD_H
