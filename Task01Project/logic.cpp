int get_quantity_of_days (int month)
{
	if (month < 1 || month > 12)
	{
		return 0;
	}

	return month == 2 ? 28 : month % 2 == 0 ? 30 : 31;
}