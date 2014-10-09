- How to build the example.
- Your pseudo-code
- What you accomplished in the assignment.
- What you didn't accomplish.

1) Building *********************************************************************
	To compile this program on windows all one has to do is type
nmake in the Command Prompt window in the corresponding directory. To run the
program type the programs name. To compile this program in Unix, all you need to
do is type: make -f MakefileNix. To run the program type the file name ./swordCrossBow
to run it. If you want to run it through visual studio, you can open the Assignment16.sln.
press ctrl+F7 to compile and ctrl+F5 to run .


2)pseudo-code********************************************************************
Setup
vector<double> AddVectors(vector<double>& vec1, vector<double>& vect2)
    for each element i
        result[i] is assigned vec1[i] + vec2[i] 
    addVectors is result
end addVectors

vector<double> MultVectors(vector<double>& vec, int i);
    for each element i
        result[i] is assigned vec[i] * coefficient
   return multVector 

void SwitchRow(Matrix& m, unsigned vec1, unsigned vec2)
    temp is assigned matrix[i]
    matrix[i] is assigned matrix[j]
    matrix[j] is assigned temp

void GJElimination(Matrix& m)
    for each row i from 1 to matrix.rows
        if matrix[i][i] equals 0
            for each row j from i + 1 to matrix.rows
                if matrix[j][i] is not equal to 0
                    swichRows(i, j)
                    break;
        matrix[i] is assigned multVector(matrix[i], 1 / matrix[i][i])
        for each row j from 1 to matrix.rows
            if i does not equal j
                if matrix[j][i] is not equal to 0
                    matrix[j] is assigned addVectors( multVector(matrix[i], -matrix[j][i]), 
                                                     matrix[j])
													 
vector<double> TrimVector(vector<double>& vec, unsigned exclude)
    for each element i
        if i does not equal exclude
            push vec[i] on to result
    trimVector is result
	
vector<vector<double>> minor(Matrix& m, unsigned row)
      for each i from 1 matrix.rows
        if i does not equal row
            push trimVector(matrix[i], 1) on to result
end
3)Accomplishments*****************************************************************
	I passed many vectors by reference throughout this entire program. THis will keep
the efficiency higher and a smoother running program. I converted the pseudo code into 
working C++ code . This was good practice for me as it didn't take too long at all to get the main 
functions done. I even implemented a couple of the bonus functions.


4)Non-Accomplishments*************************************************************
No Non-Accomplishments. Everything is included:
Headers, cpp SourceCode, Readme, .sln file, .vcxproj file, Makefile .