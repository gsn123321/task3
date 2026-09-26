

#include <iostream>

int main()
{
    //int num;
    //std::cin >> num;

    //for (int i = 0; i <= num; i++)
    //{
    //    std::cout << i << " ";
    //}


    //2

 //   int num1, num2;
 //   
	//std::cin >> num1 >> num2;

	//for (int i = num1; i <= num2; i++)
	//{
	//	std::cout << i << " ";
	//}

   // for (int i = num1; i <= num2; i++) {
   //     if (i % 2 == 0) {
			//std::cout << i << " ";
   //     }
   // }

    //for (int i = num1; i <= num2; i++) {
    //    if (i % 2 != 0) {
    //        std::cout << i << " ";
    //    }
    //}


    //for (int i = num1; i <= num2; i++) {
    //    if (i % 7 == 0) {
    //        std::cout << i << " ";
    //    }
    //}


    //3


	//int num1, num2;
 //   int sum = 0;

	//std::cin >> num1 >> num2;

 //   for (int i = num1; i <= num2; i++) {
	//	sum += i;
 //   }
 //   std::cout << sum << std::endl;


    //4 

  //  int num;
  //  int num2 = 0;

  //  while (true) {
  //      std::cin >> num;

  //      if (num == 0) {
  //          break;
  //      }

		//num2 += num;
  //  }
  //  std::cout << num2 << std::endl;



    //5

	//srand(time(0));

	//int num = rand() % 500 + 1;
 //   int num1;
	//int attempts = 0;

 //   while (true) {
	//	std::cin >> num1;
 //       attempts++;
 //       if (num1 == 0) {
 //           break;
 //       }

 //       else if (num1 > num) {
	//		std::cout << "Your number is bigger than the random number" << std::endl;
 //       }

	//	else if (num1 < num) {
	//		std::cout << "Your number is smaller than the random number" << std::endl;
 //       }

	//	else if (num1 == num) {
	//		std::cout << "Congratulations! You guessed the number." << attempts << std::endl;
 //           break;
 //       }

	//	
 //   }


	//6

	float money;
	int action = 0;
	float dollar = 40;
	float euro = 50;

	while (true) {

		std::cout << "1 - GRN v DLR\n";
		std::cout << "2 - GRN v EUR\n";
		std::cout << "3 - EXIT\n";

		std::cin >> action;

		switch (action) {
		case 1:
			std::cout << "Enter action and money: ";
			std::cin >> money;
			std::cout << money * dollar << '\n';
			break;
		case 2:
			std::cout << "Enter action and money: ";
			std::cin >> money;
			std::cout << money * euro  << '\n';
			break;
		case 3: break;
		default: std::cout << "MENA\n";
		}
	}


}

