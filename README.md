# Data-Structure-1
Implementation Of Multidimensional array
Rainfall Tracking:
Algorithm
 Step 1: Start
 Step 2: Declare a 2D array rainfall[3][4] to store rainfall data for 3 cities over 4 months
 Step 3: Input rainfall data for each city for 4 months
 Step 4: Display the rainfall data in a tabular format
 Step 5: For each city:
   a. Calculate the total rainfall
   b. Compute the average = total / 4
 Step 6: Display average rainfall for each city
 Step 7: End

Temperature Tracking:
Algorithm:
Step 1: Start
Step 2: Declare a 2D array temp[3][7] for 3 cities × 7 days
Step 3: For each city (i = 0 to 2)
        For each day (j = 0 to 6):
        Input temperature temp[i][j]
Step 4: For each day (j = 0 to 6):
        Initialize daySum = 0
        For each city (i = 0 to 2):
             Add temp[i][j] to daySum
        Calculate dayAverage = daySum / 3
        Display average temperature for day j+1
Step 5: For each city (i = 0 to 2):
             Initialize citySum = 0
             For each day (j = 0 to 6):
             Add temp[i][j] to citySum
             Calculate cityAverage = citySum / 7
             Display average temperature for city i+1
Step 6: End
