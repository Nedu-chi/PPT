    <!-- The ministry of health write an Algorithm  take in a population of 3 cities and they want to calculate how many people are in these cities I'm order to send a covid-19 drug to the city with the highest number of population. So create an algorithm to calculate this and also give me a diagrammatic representation of the algorithm in a flow chart  -->

    START

1. Input population of City1 → pop1
2. Input population of City2 → pop2
3. Input population of City3 → pop3

4. IF pop1 > pop2 AND pop1 > pop3 THEN
      HighestCity = "City1"
      HighestPop = pop1
   ELSE IF pop2 > pop1 AND pop2 > pop3 THEN
      HighestCity = "City2"
      HighestPop = pop2
   ELSE
      HighestCity = "City3"
      HighestPop = pop3
   ENDIF

5. OUTPUT "Send COVID-19 drug to " + HighestCity + " with population " + HighestPop

END




QUICK SORT (PSEUDOCODE with LIST SLICING STYLE) 

arr = [5, 2, 7, 1]

pivot = 5
left = [2, 1]
right = [7]

QuickSort([2, 1]) → [1, 2]
QuickSort([7]) → [7]

Result = [1, 2] + [5] + [7] = [1, 2, 5, 7]



PROCEDURE QuickSort(arr)
    IF length of arr < 2 THEN
        RETURN arr        // Already sorted

    pivot = arr[0]        // Choose first element as pivot
    left = elements in arr[1:] less than pivot
    right = elements in arr[1:] greater than or equal to pivot

    RETURN QuickSort(left) + [pivot] + QuickSort(right)
END PROCEDURE



