#include <stdio.h>
#include "die.h"
#include "craps.h"
#include "ui_CrapsMainWindow.h"

CrapsMainWindow :: CrapsMainWindow(QMainWindow *parent)
{
    // Build a GUI window with two dice.
    currentBankValue = 10000;
    setupUi(this);
    Die die1, die2;
    bool firstRoll = true;
    int winsCount = 0;
    QObject::connect(rollButton, SIGNAL(clicked()), this, SLOT(rollButtonClickedHandler()));
    QObject::connect(UserBetBox, SIGNAL(clicked()), this, SLOT(rollButtonClickedHandler()));
}
void CrapsMainWindow::printStringRep()
{
    // String representation for Craps.
    char buffer[25];
    int length =  sprintf(buffer, "Die1: %i\nDie2: %i\n", die1.getValue(), die2.getValue());
    printf("%s", buffer);
}
void CrapsMainWindow::updateUI()
{
    std::string die1ImageName = ":/dieImages/" + std::to_string(die1.getValue());
    std::string die2ImageName = ":/dieImages/" + std::to_string(die2.getValue());
    die1UI->setPixmap(QPixmap(QString::fromStdString(die1ImageName)));
    die2UI->setPixmap(QPixmap(QString::fromStdString(die2ImageName)));
    BankChecker->setText(QString::fromStdString(message));
    BetMessage->setText(QString::fromStdString(betMessage));
    currentBankValueUI->setText(QString::fromStdString(std::to_string(static_cast<int>(currentBankValue))));
}

// Player asked for another roll of the dice.
void CrapsMainWindow::rollButtonClickedHandler() {

    printf("Roll button clicked\n");
    if(playersTurn == 1)
    {
        betMessage = "";
        updateUI();
        checkBankValue();
    }
    else if(playersTurn == 2)
    {
        betMessage = "";
        updateUI();
        rollDice();
        CheckWin();
    }
}




void CrapsMainWindow::checkBankValue()
{
   bool valid = false;
   do{

        if(currentBankValue - UserBetBox->value() < 0)
        {
            message = "Sorry, but you dont have enough money to bet that amount.";
            valid = false;
        }
        else
        {
            valid = true;
            message = ("You bet $" + std::to_string(UserBetBox->value()));
            currentBankValue -= UserBetBox->value();
            rollDice();
            CheckWin();
        }
    }while(false);
 }
void CrapsMainWindow::rollDice()
{

    die1.roll();
    die2.roll();
    printStringRep();
    updateUI();

}
void CrapsMainWindow::CheckWin()
{

   if(playersTurn == 1)
   {
       rolledNumber =  die1.getValue() + die2.getValue();
    if( rolledNumber== 12 || rolledNumber == 3 || rolledNumber == 2)
           {
             message = "You lost since you rolled a " + std::to_string(rolledNumber) + ".";


             updateUI();
          }
          //Checks if the player has rolled one of the two winning numbers
           else if(rolledNumber == 7 || rolledNumber == 11)
          {
               message =  "You win! You rolled a " + std:: to_string(rolledNumber) + " Congrats!";
               settleBet(rolledNumber);
               updateUI();
           }
   else if(rolledNumber == 4 || rolledNumber == 5 || rolledNumber == 6 || rolledNumber == 8 || rolledNumber == 9 || rolledNumber == 10)
   {
          message = "You have rolled a " + std::to_string(rolledNumber) + " so you get to roll again! Click the roll button to roll again";
          playersTurn++;
          updateUI();



   }
   }
     else if(playersTurn == 2)
       {
        int secondRollValue =  die1.getValue() + die2.getValue();

                 if(rolledNumber == secondRollValue)
                  {
                      message = "You have rolled a " + std::to_string(secondRollValue) + " so you have rolled the same number twice meaning you win! Congrats!";

                      playersTurn = 1;
                      settleBet(secondRollValue);


                   }

                  else
                {
                      message =  "You have rolled a " + std::to_string(secondRollValue) + " so you have lost because you didnt roll the same number twice! Better luck next time.";
                     playersTurn = 1;
                      updateUI();
                 }


       }
}

void CrapsMainWindow::settleBet(int winningNumber)
{
    if(rolledNumber == 11|| rolledNumber == 7)
       {

            currentBankValue += UserBetBox->value();
            updateUI();

       }
       else if(rolledNumber == 4)
       {

          currentBankValue += (UserBetBox->value() * 2);
          updateUI();

       }
       else if(rolledNumber == 5)
       {

           currentBankValue += (UserBetBox->value() + (UserBetBox->value()/2));
           updateUI();

       }
       else if(rolledNumber == 6)
       {

          currentBankValue += (static_cast<float>((UserBetBox->value())) * 1.2);
          updateUI();

       }
       else if(rolledNumber == 8)
       {

         currentBankValue += (static_cast<float>((UserBetBox->value())) * 1.2);
         updateUI();

       }
       else if(rolledNumber == 9)
       {

        currentBankValue += (static_cast<float>((UserBetBox->value())) * 1.5);
        updateUI();

       }
       else if(rolledNumber == 10)
       {

          currentBankValue += (static_cast<float>((UserBetBox->value())) * 2.0);
          updateUI();

       }



}
