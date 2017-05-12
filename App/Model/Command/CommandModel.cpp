class CommandModel
{
  private:
    string CommandText;

  public:
    void setCommandText(string tempCommandText);
    string getCommandText();
};

CommandModel::setCommandText(string tempCommandText)
{
    CommandText = tempCommandText;
}

CommandModel::getCommandText()
{
    return CommandText;
}