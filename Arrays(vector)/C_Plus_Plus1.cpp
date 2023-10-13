#include <iostream>
#include<vector>

using namespace std;
int main()
{
	bool is_Finish{ false };
	vector<int> vec{};

	do
	{
		char Choice;
		cout << "P - Print numbers\nA - Add numbers\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nC - Clear vector\nQ - Quit" << endl;
		cout << "\nEnter your choice: ";
		cin >> Choice;
		cout << endl;
		switch (Choice)
		{
		case 'p':
		case 'P':
		{
			if (vec.size() != 0)
			{
				int Prelast_Value = vec.size() - 1;
				cout << "All numbers: [";
				for (int i{ 0 }; i < vec.size(); i++)
				{
					if (vec.size() - 1 != i)
						cout << vec[i] << " ";
					else
						cout << vec[i];
				}
				cout << "]" << endl << endl;
			}
			else
				cout << "The vector is empty. Enter a numbers in the section 'A'" << endl << endl;
			break;
		}
		case 'a':
		case 'A':
		{
			int Values_To_Add{ 0 };
			cout << "How many values do you want to add?" << endl;
			if (cin >> Values_To_Add)
			{
				for (int i = 0; i < Values_To_Add; i++)
				{
					int Value{ 0 };
					cout << "Enter a value " << i + 1 << ": ";
					cin >> Value;
					cout << endl;
					vec.push_back(Value);
				}
			}
			else
			{
				cin.clear();
				cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			}
			break;
		}
		case 'm':
		case 'M':
		{
			if (vec.size() != 0)
			{
				int avarage_Value{ 0 };
				int sum_Of_Values{ 0 };
				for (int val : vec)
					sum_Of_Values += val;
				avarage_Value = sum_Of_Values / vec.size();
				cout << "The mean of vector is: [" << avarage_Value << "]" << endl;
			}
			else
				cout << "The vector is empty. Enter a numbers in the section 'A'" << endl;
			break;
		}
		case 's':
		case 'S':
		{
			if (vec.size() != 0)
			{
				int smallest_Value{ vec.at(0) };
				for (int val : vec)
				{
					if (val < smallest_Value)
					{
						smallest_Value = val;
					}
				}
				cout << "The smallest number is: " << smallest_Value << endl << endl;
			}
			else
				cout << "The vector is empty. Enter a numbers in the section 'A'" << endl;
			break;
		}
		case 'l':
		case 'L':
		{
			if (vec.size() != 0)
			{
				int largest_Value{ vec.at(0) };
				for (int val : vec)
				{
					if (val > largest_Value)
					{
						largest_Value = val;
					}
				}
				cout << "The largest number is: " << largest_Value << endl << endl;
			}
			else
				cout << "The vector is empty. Enter a numbers in the section 'A'" << endl;
			break;
		}
		case 'c':
		case 'C':
		{
			if (vec.size() != 0)
			{
				bool is_Done_Decision{ false };
				char make_Decision{ 0 };
				do
				{
					cout << "Are you sure? (Y/N)" << endl;
					cin >> make_Decision;
					switch (make_Decision)
					{
					case 'y':
					case 'Y':
					{
						cout << "You cleared vector\n" << endl;
						is_Done_Decision = true;
						vec.clear();
						break;
					}
					case 'n':
					case 'N':
					{
						cout << "You didn't clear vector\n" << endl;
						is_Done_Decision = true;
						break;
					}
					default:
					{
						cout << "Unknown selection, please try again" << endl << endl;
						break;
					}
					}
				} while (!is_Done_Decision);

			}
			else
				cout << "The vector is empty. Enter a numbers in the section 'A'" << endl;

			break;
		}
		case 'q':
		case 'Q':
		{
			is_Finish = true;
			break;
		}
		default:
			cout << "Unknown selection, please try again" << endl;
			break;
		}
	} while (!is_Finish);

	cout << "Thanks for try this program!" << endl << endl;

	return 0;
}


