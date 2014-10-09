class StupidString
{
public:
	StupidString() : _pData(0), _capacity(0)
	{
	}
	
	StupidString(const char* p);
	StupidString(unsigned len, char ch);
	StupidString(const StupidString& str); //OVERRIDING THE copy ctor
	~StupidString();
	bool isEmpty() const
	{
		if(_capacity == 0)
		{
		return true;
		}
		return false;
	}
	
	StupidString& operator=(const StupidString& str);
	
	const char* data() const
		{
		return _pData;
		};
	
	

private:
	char* _pData;
	unsigned int _capacity;
	

};