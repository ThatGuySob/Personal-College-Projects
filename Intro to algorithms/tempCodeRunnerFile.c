void search(all_issues* arr, int total) 
{
	int min = 0;
    int max = total - 1;
    int index = -1;
	int product_id = 0; 
	
	printf("Enter an ID of a product to search for: ");
	scanf("%d", &product_id);

	while (min <= max) //condition for the the while loop to run until it finds the designated item
	{
		int mid = min + (max - min) / 2; //finds the mid range 

		if (arr[mid].ID == product_id) //if users input is the same as the element, assign current index
		{
			
			index = mid;
            
			max = mid - 1; 
		}
		
		else if (arr[mid].ID < product_id) min = mid + 1; //if the element didnt match, it checks for if its lowers, if so then it adds 1 to mid
		
		else max = mid - 1;// same as above except inverted
	}
    //prints out the located element as per users request
    printf("ID Of Proudct: %d, Line Code: %d, Issue Code: %d\n",arr[index].ID, arr[index].LineCode, arr[index].issue_code);
}