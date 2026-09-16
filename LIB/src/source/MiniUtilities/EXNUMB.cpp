/*********************************************************************************
 * Description:
 * Author : Lei Zhai, Insti. of Nucle. Sci. and Tech., Sichuan University
 * Email : zhaileiytp@163.com
 * data: From 2017-09 to 2021-12
 * License: MIT License (There are no limitation for anyone to use/modify/sale of this code, be happy to use this code)
*********************************************************************************/

#include "EXNUMB.h"
#include <iostream>

void extract_numb(const std::string & str, std::vector<std::string>& result) {

	int size;

	std::string tempStr;

	int flag;

	int tempLenght;

	result.clear();

	std::vector<std::string>().swap(result);

	size = str.size();

	tempLenght = 0;

	flag = 0;

	for (int i = 0; i < size; i++) {

		if (' ' == str.at(i) || 
			',' == str.at(i) ||
			'{' == str.at(i) ||
			'}' == str.at(i) ||
			'[' == str.at(i) ||
			']' == str.at(i) ||
			'(' == str.at(i) ||
			')' == str.at(i) ||
			'=' == str.at(i)) {

			
			if (0 != flag) {

				tempStr.clear();
				std::string().swap(tempStr);

				for (int j = tempLenght; j > 0; j--) {
					tempStr.push_back(str[i - j]);
				}

				result.push_back(tempStr);

				flag = 0;
			}


		}
		else if( (str.at(i) >= '0' && str.at(i) <= '9') ||
			      '+' == str.at(i) ||
				  '-' == str.at(i) ||
				  '.' == str.at(i)){

				if (0 == flag) {
					flag = 1;
					tempLenght = 0;
				}
		}

		tempLenght++;
	}

}