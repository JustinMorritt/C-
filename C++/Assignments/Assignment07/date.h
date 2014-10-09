

class Date 
{
public:

Date()
{
NowDate();
}

void NowDate() ;
void DisplayDate(std::string saying, int month, int day, int year);
std::string ToString(std::string saying, int month, int day, int year); //Adds up and spits out readable date
std::string DaysToString(int days) const;
int GetYear()const;
int GetMonth()const;
int GetDay() const;
static bool IsLeapYear(int year);
static int IsLeapDay(int month, int year);

private:
int _Month;
int _Day;
int _Year;
};