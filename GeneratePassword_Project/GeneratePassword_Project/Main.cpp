#include <iostream>;
#include <ctime>;
#include "StructCharacters.h"; 


using namespace std;


string PreparePassword(int Length)
{
	string Password;
	Password.reserve(Length);

	return Password;
}


string First4Characters(int Length)
{
	string Password = PreparePassword(Length);
	LibraryOfCharacters Characters;
	
	int RandomIndex;

	switch (rand() % 4)
	{
	case 0:
		RandomIndex = rand() % Characters.UpperCharacters.size();
		Password += Characters.UpperCharacters[RandomIndex];					// A
		switch (rand() % 3)
		{
		case 0:
			RandomIndex = rand() % Characters.LowerCharacters.size();
			Password += Characters.LowerCharacters[RandomIndex];				// Ab
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// Ab0
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// Ab0*
				break;

			case 1:
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// Ab*
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// Ab*0
				break;
			}
			break;

		case 1:
			RandomIndex = rand() % Characters.NumberCharacters.size();
			Password += Characters.NumberCharacters[RandomIndex];				// A0
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// A0b
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// Ab0*
				break;

			case 1:
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// A0*
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// A0*b
				break;
			}
			break;

		case 2:
			RandomIndex = rand() % Characters.SpecialCharacters.size();
			Password += Characters.SpecialCharacters[RandomIndex];				// A*
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// A*b
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// A*b0
				break;

			case 1:
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// A*0
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// A*0b
				break;
			}
			break;
		}
		break;
		// case 0 tamam 
	case 1:
		RandomIndex = rand() % Characters.LowerCharacters.size();
		Password += Characters.LowerCharacters[RandomIndex];					// b
		switch (rand() % 3)
		{
		case 0:
			RandomIndex = rand() % Characters.UpperCharacters.size();
			Password += Characters.UpperCharacters[RandomIndex];				// bA
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// bA0
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// bA0*
				break;

			case 1:
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// bA*
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// bA*0
				break;
			}
			break;

		case 1:
			RandomIndex = rand() % Characters.NumberCharacters.size();
			Password += Characters.NumberCharacters[RandomIndex];				// b0
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// b0A
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// b0A*
				break;

			case 1:
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// b0*
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// b0*A
				break;
			}
			break;

		case 2:
			RandomIndex = rand() % Characters.SpecialCharacters.size();
			Password += Characters.SpecialCharacters[RandomIndex];				// b*
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// b*A
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// b*A0
				break;

			case 1:
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// b*0
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// b*0A
				break;
			}
			break;
		}
		break;
		// CASE 1 TAMAM 
	case 2:
		RandomIndex = rand() % Characters.NumberCharacters.size();				// 0
		Password += Characters.NumberCharacters[RandomIndex];
		switch (rand() % 3)
		{
		case 0:
			RandomIndex = rand() % Characters.UpperCharacters.size();
			Password += Characters.UpperCharacters[RandomIndex];				// 0A
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// 0Ab
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// 0Ab*
				break;

			case 1:
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// 0A*
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// 0A*b
				break;
			}
			break;

		case 1:
			RandomIndex = rand() % Characters.LowerCharacters.size();
			Password += Characters.LowerCharacters[RandomIndex];				// 0b
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// 0bA
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// 0bA*
				break;

			case 1:
				RandomIndex = rand() % Characters.SpecialCharacters.size();
				Password += Characters.SpecialCharacters[RandomIndex];			// 0b*
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// 0b*A
				break;
			}
			break;

		case 2:
			RandomIndex = rand() % Characters.SpecialCharacters.size();
			Password += Characters.SpecialCharacters[RandomIndex];				// 0*
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// 0*A
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// 0*Ab
				break;

			case 1:
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// 0*b
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// 0*bA
				break;
			}
			break;
		}
		break;
		// case 2 tamam
	case 3:
		RandomIndex = rand() % Characters.SpecialCharacters.size();
		Password += Characters.SpecialCharacters[RandomIndex];					// *
		switch (rand() % 3)
		{
		case 0:
			RandomIndex = rand() % Characters.UpperCharacters.size();
			Password += Characters.UpperCharacters[RandomIndex];				// *A
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// *Ab
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// *Ab0
				break;

			case 1:
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// *A0
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// *A0b
				break;
			}
			break;

		case 1:
			RandomIndex = rand() % Characters.LowerCharacters.size();
			Password += Characters.LowerCharacters[RandomIndex];				// *b
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// *bA
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// *bA0
				break;

			case 1:
				RandomIndex = rand() % Characters.NumberCharacters.size();
				Password += Characters.NumberCharacters[RandomIndex];			// *b0
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// *b0A
				break;
			}
			break;

		case 2:
			RandomIndex = rand() % Characters.NumberCharacters.size();
			Password += Characters.NumberCharacters[RandomIndex];				// *0
			switch (rand() % 2)
			{
			case 0:
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// *0A
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// *0Ab
				break;

			case 1:
				RandomIndex = rand() % Characters.LowerCharacters.size();
				Password += Characters.LowerCharacters[RandomIndex];			// *0b
				RandomIndex = rand() % Characters.UpperCharacters.size();
				Password += Characters.UpperCharacters[RandomIndex];			// *0bA
				break;
			}
			break;
		}
		break;
		// Case 3 tamam
	}
	

	return Password;
}


string GeneratePassword(int Length)
{
	string Password;
	LibraryOfCharacters Characters;
	srand(static_cast<unsigned>(time(nullptr)));

	int RandomIndex;

	if (Length >= 4)
	{
		Password = First4Characters(Length);
		for (int i = 0; i < Length - 4; i++)
		{
			RandomIndex = rand() % Characters.AllCharacters.size();
			Password += Characters.AllCharacters[RandomIndex];
		}

		return Password;
	}

	return Password;
}


void DisplayPassword()
{
	int LengthOfPassword;
	cout << "Please enter the length of the password that you want to create: ";
	cin >> LengthOfPassword;

	if (LengthOfPassword < 4)
	{
		cout << "Insufficient words for password";
	}
	else
	{
		string PasswordICreate = GeneratePassword(LengthOfPassword);
		cout << "This password now is yours: " << PasswordICreate << endl;
	}
}


int main()
{

	DisplayPassword();

	return 0;
}