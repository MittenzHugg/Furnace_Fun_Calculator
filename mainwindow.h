#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QKeyEvent>
#include <QLabel>
#include "stdint.h"
#include <stack>
#include <string>
#include <vector>
#include "qrightclickbutton.h"

enum  language : uint8_t{ENGLISH, FRENCH, GERMAN, JAPANESE};
enum  buttonFontStyles : uint8_t{DEFAULT, MOST_LIKELY, CORRECT, WRONG};
enum  searchMode : uint8_t{QUESTIONS, ANSWERS, QUESTION_AND_ANSWERS};
enum  searchLanguage : uint8_t{CURRENT, ALL_LANGUAGES};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    static const uint8_t patternArray[286];
    static const std::vector<QString> EnQuestionText;
    static const std::vector<QString> EnAnswerText;
    static const std::vector<QString> FrQuestionText;
    static const std::vector<QString> FrAnswerText;
    static const std::vector<QString> DeQuestionText;
    static const std::vector<QString> DeAnswerText;

    static const std::vector<QString> styleSheetText;

    std::stack<int16_t> userInputs;
    float probabilityMatrix[90];
    uint8_t singleMostLikely = 100;
    std::stack<int16_t> possibleAnswers;
    int16_t foundNumber = -1;
    language currLang = ENGLISH;
    uint8_t currSearchLang = QUESTIONS; //0=current, 1=all
    uint8_t currSearchMode = CURRENT; //0=current, 1=all

    QRightClickButton* buttonArray[90];
    QRightClickButton* miniButtonArray[5];
    QLabel* questionArray[30];


public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    float answerProbability(uint8_t answerLoc);

private slots:

    //MAIN WINDOW
    void newNegInput(uint8_t newUserInput); //main input field
    void newPosInput(uint8_t newUserInput);

    void on_DeRadioButton_clicked(); //language toggles
    void on_EnRadioButton_clicked();
    void on_FrRadioButton_clicked();

    void on_radioButton_clicked(); //answer/question toggle
    void on_questionToggle_clicked();

    void on_resetButton_clicked();
    void on_undoButton_clicked();

    void on_patternNumInput_textEdited(const QString &arg1);

    //MENU OPTIONS
    void on_actionDouble_triggered();
    void on_actionSingle_triggered();

    void on_actionFull_Calculator_triggered();
    void on_actionMini_mode_triggered();
    void on_actionQuestions_triggered();
    void on_actionAnswers_triggered();
    void on_actionQuestions_Answers_triggered();
    void on_actionCurrent_Language_triggered();
    void on_actionAll_Languages_triggered();


    void searchTextEdited(const QString &arg1);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_MiniStringSearch_cursorPositionChanged(int arg1, int arg2);

    void keyPressEvent(QKeyEvent *e);
    void resizeEvent(QResizeEvent *e);
    void setInitialSizes(void);

private:
    Ui::MainWindow *ui;
    void linkButtons(void);
    void updateVariables(void);
    void updateText();
};

#endif // MAINWINDOW_H
