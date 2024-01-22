/*******************************************************************************
 *  Workshop 2/Task 2
 *
 *  Studying input, output, conditions and simple loops.
 *
 *  A program outputs a formatted multiplication table for n numbers.
 *
 *  Example. For n = 3, the output is:
 *
 *      1   2   3
 *  1   1   2   3
 *  2   2   4   6
 *  3   3   6   9
 *
 *  1) Ask a user to input a boundary n for the table.
 *  2) Check whether n is in the range [1; 10] using if statement. Otherwise
 *     output the following message: "Wrong argument", and terminate the program.
 *  3) Output a table row by row using for-loop statement. Use tabs to separate
 *     individual values.
 *  4) Modify the program. Use while-loop statement.
 *
 ******************************************************************************/

#include <iostream>

// the entrypoint of the application
int main()
{
    int n;

    std::cout << "Please input a boundary n for the table" << std::endl;
    std::cin >> n;

    for (int i = 0; i <= n; i++){
        for (int j = 0; j<=n; j++){
            if (i == 0 && j == 0){
                std::cout << '\t';
            }
            else if(i == 0){
                std::cout << j << '\t';
            }
            else if(j == 0){
                std::cout << i << '\t';
            }
            else{
                std::cout << j*i << '\t';
            }
        }
        std::cout << std::endl;
    }
    // TODO: place your code starting from this line

    return 0;
}
