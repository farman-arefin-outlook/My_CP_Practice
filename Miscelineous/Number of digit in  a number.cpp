// double memoizedArray[1000001];//Array for Memoization
	// memoizedArray[0] = 0; //Don't do manual log for 0, it will throw an error

	// //Memoizing the array
	// for(int i=1;i<=1000000;i++){
	//   memoizedArray[i] = memoizedArray[i-1] + log(i);
	// }

	// int testCase, base;
	// long digits,n;

	// cin >> testCase;

	// for(int i = 1; i<= testCase; i++){
	//     cin >> n >> base;
	//     //The formula
	//     digits = memoizedArray[n]/log(base) + 1;
	//     cout << "Case " << i << ": " << digits << "\n";
	// }