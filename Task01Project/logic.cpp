int get_quantity_of_days(int month)
{
	if (month < 1 || month > 12)
	{
		return 0;
	}

	int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return days[month - 1];
}