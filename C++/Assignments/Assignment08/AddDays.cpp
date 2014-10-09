void AddDays(int days);
int i = 0;
while( i != days)
{
	if(month == 2)  //IF FEBUARY
	{
		if(IsLeapYear(_years))
		{
			if( _days != 29 )
				if(days < 0)	// if passed in days is less then 0.
					if(_days == 1)
						i--
						_month--
						_days = 31
						continue;
					else
					i--
					_days--
					continue;
				else
				i++
				_days++
				continue;
			else
				if(days < 0)	//leap year and passed in days less then 0
					if(_days == 1)
						i--
						_month--
						_days = 31
						continue;
					else
					i--
					_days--
					continue;
				i++
				_days = 1
				_month++
				continue;
		}
		//Else if not leap year
		if( _days != 28 )
			if(days < 0)	// Not a leap year and passed in days less then 0
				if(_days == 1)
					i--
					_month--
					_days = 31
					continue;
				else
				i--
				_days--
				continue;
			i++
			_days++
			continue;
		else    //_days must be the 28th 
			if(days < 0)	// Not a leap year and passed in days less then 0
				i--
				_days--
				continue;
			i++
			_days = 1
			_month++
			continue;
	}
	
	if(month == 4 || month == 6 || month == 9 || month == 11) //IF OTHER MONTHS
	{
		if( _days != 30 )
			if(days < 0)	// Not a leap year and passed in days less then 0
				if(_days == 1)
					i--
					_month--
					_days = 31
					continue;
				else
				i--
				_days--
				continue;
			i++
			_days++
			continue;
		else
			if(days < 0)	
				if(_days == 1)
					i--
					_month--
					_days = 31
					continue;
				else
				i--
				_days--
				continue;
			i++
			_days = 1
			_month++
			continue;
	}
	else  	//The rest of the months ... INCLUDING DEC 31st..
			//ALSO If AUGUST set days to 31 ..
			//ALSO if Jan first and -- go to previous year and day 31'st
	{
			if( _days != 31 )
				if(days < 0)
					if(_days == 1 && _month == 3) 	// Check if March 1st ...
						if(IsLeapYear(_years))		//need to also check if leap year 
							i--						//what to set day to on Feb
							_month--
							_days = 29
							continue;
						else						
							i--
							_month--
							_days = 28	
							continue;
					if(_days == 1 && _month == 1) //CHECK IF JAN 1st
						i--
						_month = 12
						_days = 31	
						continue;
					if(_days == 1 && _month == 8) //CHECK IF AUG 1st
						i--
						_month--
						_days = 31	
						continue;
					if(_days == 1)	//Rest of the months  == 30 days
						i--
						_month--
						_days = 30
						continue;
				else	
				i--
				_days--
				continue;
			i++
			_days++
			continue;
			if( _days == 31 && _month != 12)
				if(days < 0)
					i--
					_days--
					continue;
				else
				i++
				_days = 1
				_month++
				continue;
			else  // _days == 31 and _Month is 12, Dec 31'st .. last day
				if(days < 0)
					i--
					_days--
					continue;
				i++
				_days = 1
				_month = 1
				_year++
				continue;
	}
}


void AddMonths(int months);
int i = 0;
while( i != months)
{
	
	if(_month == 1)				//Deal with January 
		if(IsLeapYear(_years))
			if(_days == 31)
				if(months < 0)
					i--
					_months = 12  // set December
					_days = 31
					continue;
			else
				++i
				_months++
				_days = 29
				continue;
		if(_days == 31)		// If not leap year and current day at end of month.
			if(months < 0)
					i--
					_months = 12
					_days = 31
					continue;
			++i
			_months++
			_days = 28
			continue;
	
	if(_month == 2)				//Deal with February 
		if(IsLeapYear(_years))
			if(_days == 29)
				if(months < 0)
					i--
					_months--
					_days = 31
					continue;
			else
				++i
				_months++
				_days = 31
				continue;
		if(_days == 28)
			if(months < 0)
					i--
					_months--
					_days = 31
					continue;
			++i
			_months++
			_days = 31
			continue;
			
	if(_month == 3)			//Deal with March 
	if(IsLeapYear(_years))
		if(_days == 31)
			if(months < 0)
				i--
				_months--
				_days = 29
				continue;
			else
			++i
			_months++
			_days = 30
			continue;
		if(_days == 30)
			if(months < 0)
				i--
				_months--
				_days = 28
				continue;
			else
				++i
				_months++
		if(_days == 31)
			if(months < 0)
				i--
				_months--
				_days = 28
				continue;
		else
			++i
			_months++
			_days = 30
			continue;
			++i
			_months++
			_days = 31
			continue;
	if(_days == 28)
		if(months < 0)
				i--
				_months--
				_days = 31
				continue;
		++i
		_months++
		_days = 31
		continue;	
		
	
	if(month == 4 || month == 6 || month == 9 || month == 11)
	
	if(_month == 12)
		if(months < 0)
			--i
			_month--
			continue;
		++i
		_month = 1
		_year++
	else		//Rest of the months
		if(months < 0)
			--i
			_month--
			continue;
		++i
		_month++
		_year++
}


void AddYears(int years);
while( i != months)
{
int i = 0;
	while( i != years)
	{
		if(years < 0)
			--i
			_years--
			continue;
		else
		++i
		_years++
	}

}



int _years;
int _months
int _days;