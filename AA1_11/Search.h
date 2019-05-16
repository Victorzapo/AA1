#pragma once


namespace search {

	int linearSearch(int a[], int length, int value) {

		int index = -1;

		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				index = i;
				break;
			}
		}
		return index;
	}
	int binarySearch(int a[], int length, int value)
	{
		int iLimit = 0;
		int sLimit = length - 1;
		int iMid;
		while (iLimit <= sLimit)
		{
			iMid = (iLimit + sLimit) / 2;
			if (a[iMid] == value) return iMid;
			else
				if (value < a[iMid]) sLimit = iMid - 1;
				else iLimit = iMid + 1;
		}
		return -1;
	}
	int *linearSearchAllIndex(int a[], int length, int value) {
		
		int posCounter = -1;
		int *indexs = new int[length];
		
		

		for (int i = 0; i < length; i++) {
			if (value == a[i]) {
				posCounter++;
				indexs[posCounter] = i;
			}
		}
		return indexs;
	}

	int binarySearchR(int a[], int length, int value) {

		int iLimit = 0;
		int sLimit = length - 1;
		int iMid;
		int firstAp;
		
		while (iLimit <= sLimit)
		{
			iMid = (iLimit + sLimit) / 2;
			if (a[iMid] == value) {

				while (a[iMid - 1] == a[iMid])
					iMid--;
				return iMid;

			}
			else
				if (value < a[iMid])
					sLimit = iMid - 1;
				else
					iLimit = iMid + 1;
		}
		return -1;

	}

}