#include <iostream>

using namespace std;

inline void DivisionLine()
{
	cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
}

inline bool GameContinue(char resume)
{
	if (resume == 'Y')
	{
		return true;
	}
	else
	{
		return false;
	}
}


void Question1()
{
	cout << " How much is 2*2 " << endl;

	cout << 'A' << "--" << "4" << endl;
	cout << 'B' << "--" << "45" << endl;
	cout << 'C' << "--" << "8" << endl;
	cout << 'D' << "--" << "12" << endl;
}

void Question2()
{
	cout << " First President Of USA " << endl;

	cout << 'A' << "--" << "Abraham Lincoln" << endl;
	cout << 'B' << "--" << "George Washington" << endl;
	cout << 'C' << "--" << "William Johnson" << endl;
	cout << 'D' << "--" << "Robert Ford" << endl;
}

void Question3()
{
	cout << " Author of Don Quixote " << endl;

	cout << 'A' << "--" << "William Shekspeare" << endl;
	cout << 'B' << "--" << "Victor Hugo" << endl;
	cout << 'C' << "--" << "Miguel Servantes" << endl;
	cout << 'D' << "--" << "Jules Verne" << endl;
}

void Question4()
{
	cout << " Which rock group's composition is Starless " << endl;

	cout << 'A' << "--" << "Led Zeppelin" << endl;
	cout << 'B' << "--" << "King Crimson" << endl;
	cout << 'C' << "--" << "Pink Floyd" << endl;
	cout << 'D' << "--" << "Nirvana" << endl;
}

void Question5()
{
	cout << " Albert Einstein's formula is " << endl;

	cout << 'A' << "--" << "A=M*V" << endl;
	cout << 'B' << "--" << "F=M*A" << endl;
	cout << 'C' << "--" << "S=vt" << endl;
	cout << 'D' << "--" << "E=(MC)sq" << endl;
}

void Question6()
{
	cout << " A tallest man played in NBA was from " << endl;

	cout << 'A' << "--" << "USA" << endl;
	cout << 'B' << "--" << "Argentina" << endl;
	cout << 'C' << "--" << "China" << endl;
	cout << 'D' << "--" << "Slovenia" << endl;
}

void Question7()
{
	cout << " Napoleon Bonaparte Born in " << endl;

	cout << 'A' << "--" << "Germany" << endl;
	cout << 'B' << "--" << "Italy" << endl;
	cout << 'C' << "--" << "France" << endl;
	cout << 'D' << "--" << "Belgium" << endl;
}

void Question8()
{
	cout << " Champion of World Cup 2002 in soccer " << endl;

	cout << 'A' << "--" << "France" << endl;
	cout << 'B' << "--" << "Germany" << endl;
	cout << 'C' << "--" << "Italy" << endl;
	cout << 'D' << "--" << "Brazil" << endl;
}

void Question9()
{
	cout << " In which year the first world cup of soccer was " << endl;

	cout << 'A' << "--" << "1930" << endl;
	cout << 'B' << "--" << "1918" << endl;
	cout << 'C' << "--" << "1945" << endl;
	cout << 'D' << "--" << "1978" << endl;
}

void Question10()
{
	cout << " Who was Jim Hall " << endl;

	cout << 'A' << "--" << "Jazzman" << endl;
	cout << 'B' << "--" << "Painter" << endl;
	cout << 'C' << "--" << "Solider" << endl;
	cout << 'D' << "--" << "Football Player" << endl;
}

int main() {


	cout << "\t\t\t\t\t\t Welcome to the game ! " << "\n\n\n";
	DivisionLine();
	char navigator;
	char answer;
	int balance = 0;
	cout << " Balance = " << balance << " GEL " << endl;
	int totalBalance = 0; // თამაშის ბოლოს შევკრიბოთ მთელი ბალანსი და ის იქნება საბოლოო შედეგი totalBalance+=balance
	char resume;


	cout << " 1. Start " << " \t\t\t\t\t\t\t\t\t\t\t\t\t";
	cout << " 2. Quit " << "\n";

	cin >> navigator;
	if (navigator == '1')
	{
		/////////////////////////////////////// პირველი შეკითხვა ////////////////////////////////////////////////

		DivisionLine();
		Question1();

		cin >> answer;

		if (answer == 'A')
		{
			cout << " Correct answer ! " << endl;
			balance += 100;
			cout << " Balance = " << balance << " GEL " << endl;
			cout << " Press Y to continue, press N to leave the game ==> ";
			cin >> resume;
			if (GameContinue(resume))
			{
				/////////////////////////////////////// მეორე შეკითხვა ////////////////////////////////////////////////
				DivisionLine();
				Question2();
				cin >> answer;
				if (answer == 'B')
				{
					cout << " Correct answer ! " << endl;
					balance += 100;
					cout << " Balance = " << balance << " GEL " << endl;
					cout << " Press Y to continue, press N to leave the game ==> ";
					cin >> resume;
					if (GameContinue(resume))
					{
						/////////////////////////////////////// მესამე შეკითხვა ////////////////////////////////////////////////
						DivisionLine();
						Question3();
						cin >> answer;
						if (answer == 'C')
						{
							cout << " Correct answer ! " << endl;
							balance += 100;
							cout << " Balance = " << balance << " GEL " << endl;
							cout << " Press Y to continue, press N to leave the game ==> ";
							cin >> resume;
							if (GameContinue(resume))
							{
								/////////////////////////////////////// მეოთხე შეკითხვა ////////////////////////////////////////////////
								DivisionLine();
								Question4();
								cin >> answer;
								if (answer == 'B')
								{
									cout << " Correct answer ! " << endl;
									balance += 100;
									cout << " Balance = " << balance << " GEL " << endl;
									cout << " Press Y to continue, press N to leave the game ==> ";
									cin >> resume;
									if (GameContinue(resume))
									{
										/////////////////////////////////////// მეხუთე შეკითხვა ////////////////////////////////////////////////
										DivisionLine();
										Question5();
										cin >> answer;
										if (answer == 'D')
										{
											cout << " Correct answer ! " << endl;
											balance += 100;
											cout << " Balance = " << balance << " GEL " << endl;
											cout << " Press Y to continue, press N to leave the game ==> ";
											cin >> resume;
											if (GameContinue(resume))
											{
												/////////////////////////////////////// მეექვსე შეკითხვა ////////////////////////////////////////////////
												DivisionLine();
												Question6();
												cin >> answer;
												if (answer == 'C')
												{
													cout << " Correct answer ! " << endl;
													balance += 100;
													cout << " Balance = " << balance << " GEL " << endl;
													cout << " Press Y to continue, press N to leave the game ==> ";
													cin >> resume;
													if (GameContinue(resume))
													{
														/////////////////////////////////////// მეშვიდე შეკითხვა ////////////////////////////////////////////////
														DivisionLine();
														Question7();
														cin >> answer;
														if (answer == 'B')
														{
															cout << " Correct answer ! " << endl;
															balance += 100;
															cout << " Balance = " << balance << " GEL " << endl;
															cout << " Press Y to continue, press N to leave the game ==> ";
															cin >> resume;
															if (GameContinue(resume))
															{
																/////////////////////////////////////// მერვე შეკითხვა ////////////////////////////////////////////////
																DivisionLine();
																Question8();
																cin >> answer;
																if (answer == 'D')
																{
																	cout << " Correct answer ! " << endl;
																	balance += 100;
																	cout << " Balance = " << balance << " GEL " << endl;
																	cout << " Press Y to continue, press N to leave the game ==> ";
																	cin >> resume;
																	if (GameContinue(resume))
																	{
																		/////////////////////////////////////// მეცხრე შეკითხვა ////////////////////////////////////////////////
																		DivisionLine();
																		Question9();
																		cin >> answer;
																		if (answer == 'A')
																		{
																			cout << " Correct answer ! " << endl;
																			balance += 100;
																			cout << " Balance = " << balance << " GEL " << endl;
																			cout << " Press Y to continue, press N to leave the game ==> ";
																			cin >> resume;
																			if (GameContinue(resume))
																			{
																				/////////////////////////////////////// მეათე შეკითხვა ////////////////////////////////////////////////
																				DivisionLine();
																				Question10();
																				cin >> answer;
																				if (answer == 'A')
																				{
																					cout << " Correct answer ! " << endl;
																					totalBalance += balance;
																					DivisionLine();
																					cout << " YOU WON THE GAME, CONGRATULATIONS " << endl;
																					cout << " YOU WON " << totalBalance << " GEL " << endl;
																					cout << " THANK YOU FOR PLAYING, GOODBYE " << endl;
																					DivisionLine();
																				}
																				else
																				{
																					cout << " Game Over, you lost ! " << endl;
																				}
																			}
																			else
																			{
																				cout << " Good Luck ! " << endl;
																			}
																		}
																		else
																		{
																			cout << " Game Over, you lost ! " << endl;
																		}
																	}
																	else
																	{
																		cout << " Good Luck ! " << endl;
																	}
																}
																else
																{
																	cout << " Game Over, you lost ! " << endl;
																}
															}
															else
															{
																cout << " Good Luck ! " << endl;
															}
														}
														else
														{
															cout << " Game Over, you lost ! " << endl;
														}
													}
													else
													{
														cout << " Good Luck ! " << endl;
													}
												}
												else
												{
													cout << " Good Luck ! " << endl;
												}
											}
											else
											{
												cout << " Good Luck ! " << endl;
											}
										}
										else
										{
											cout << " Game Over, you lost ! " << endl;
										}
									}
									else
									{
										cout << "Good Luck !" << endl;
									}
								}
								else
								{
									cout << " Game Over, you lost !" << endl;
								}
							}
							else
							{
								cout << " Good Luck ! " << endl;
							}
						}
						else
						{
							cout << " Game Over, you lost !" << endl;
						}
					}
					else
					{
						cout << " Good Luck ! " << endl;
					}
				}
				else
				{
					cout << " Game Over, You lost ! " << endl;
				}
			}
			else
			{
				cout << " Good Luck ! ";
			}
		}
		else
		{
			cout << " Game Over, You lost ! " << endl;
		}
	}
	else
	{
		cout << " Good Luck " << endl;
	}

	DivisionLine();








	return 0;
}