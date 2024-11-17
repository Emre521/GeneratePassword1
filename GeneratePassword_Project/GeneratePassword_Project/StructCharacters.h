#pragma once


using namespace std;


struct LibraryOfCharacters
{
	const string UpperCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const string LowerCharacters = "abcdefghijklmnoqprstuvwxyz";
	const string NumberCharacters = "0123456789";
	const string SpecialCharacters = "!@#$%^&*()-_+=<>?";
	const string AllCharacters = UpperCharacters + LowerCharacters + NumberCharacters + SpecialCharacters;

};