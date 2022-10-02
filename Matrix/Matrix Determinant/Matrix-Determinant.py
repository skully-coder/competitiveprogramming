def determinant(matrix): #Optimized solution
    #your code here
    result = 0
    l = len(matrix)

    #base case when length of matrix is 1
    if l == 1:
        return matrix[0][0]

    #base case when length of matrix is 2
    if l == 2:
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]

    #for length of matrix > 2
    for j in range(0, l):
        # create a sub matrix to find the determinant
        if l!=2:
            sub_matrix = []               
            sub_matrix = [(row[0:j]+row[j+1:]) for row in matrix[1:]]
        result = result + (-1)**j * matrix[0][j] * determinant(sub_matrix)
    return result

def det(matrix): #My (perhaps easier to understand) solution
    if len(matrix)==1:      #Base Case
        return matrix[0][0]
    elif len(matrix)==2:    #Base Case
        return matrix[0][0]*matrix[1][1] - matrix[1][0]*matrix[0][1]

    else:
        sub_m = [] #List containing sub matrixes
        for z in range(len(matrix[0])):  
            sub_m.append([])                                    #Create an empty list for all sub matrixes
            for y in range(1,len(matrix)):
                sub_m[z].append([])                             #Create rows for each sub matrix
                for x in range(len(matrix[y])):
                    if x != z:                                  #Check if sub matrix doesn't include the row of the multiplying value               
                        sub_m[z][y-1].append(matrix[y][x])      #Append individual values to sub matrix
        total = 0
        for x in range(len(matrix[0])):     #cycle through matrix[0] values    
            if matrix[0][x] != 0:
                total += ((-1) ** x) * matrix[0][x] * det(sub_m[x])  #multiply them by the determinant of the sub matrix, creationg the recursion
            else:                
                continue
        return total  #in the end returns the determninant



