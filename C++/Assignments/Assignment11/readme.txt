
- Your pseudo-code

2)pseudo-code********************************************************************
Setup
	Abstract Class Matrix
		Assign Member functions(public)
			Matrix(Rows, Columns) excluding solution variable
			CreateRows( C1, C2, C3, C4 ... Accustom to keep going
			Void Solve()
			
			pushSolVar(double num)
			createRows();
			
			getRows() const
			getColumns() const
			getSolVar() const
			
			Swap(Row1, Row2)
			AddMultiple(Row1, Row2)
			MultNonZeroScale(Row)
			
		Assign Member variables(private)
			Vector Solution Variables {SolR1, SolR2, SolR3, SolR4....if more ROWS/COLUMNS 
			int Rows;
			int Columns;
	
	Class Row : public Equation
		Assign Member functions(public)
			Row(const Row& r) copy constructor used in conjunction with the Swap() row Function 
			void pushBackC(double c)
			
		Assign Member variables(public)
			Vector COLUMN { C1, C2, C3, C4 ... Accustom to keep going

	Main
		int Rows;
		int Columns;
		display "Enter Rows :"
		cin >> Rows
		display "Enter Columns :"
		cin >> Columns
		Matrix matrix(Rows, Columns);
			sets Matrix variables Rows and Columns
			runs createRows() function
				Loop while i < Rows
					Row* p = new Row (Implement a naming convention)
					Loop while  i < Columns
						"enter variable" i " :"
						double c;
						cin >> c
						p -> pushback(c)
						if(i == Columns)
							matrix.pushSolVar()
								"Enter equation solution variable"
								gets a double , pushes onto Solution Variables Vector
				end Loops
				this.Solve()
					while(Row(i) && Column(i) != 1)
						Checks all rows column1 for a possible 1
							if found
							runs Swap(R1, Rfound)
								Rfound(tempR)
								Rfound(R1)		Use copy Constructor
								R1(tempR)   
								
		
		
		
end

