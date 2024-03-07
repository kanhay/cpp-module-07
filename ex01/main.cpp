/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:58:32 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/06 14:06:28 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
    try{
        int i[6] = {0, 1, 2, 3, 4, 5};
        std::string s[6] = {"zero", "one", "two", "three", "four", "five"};
        
        iter<int, unsigned int, void>(NULL, 6, _print<int>);
        std::cout << "\n";
        iter<>(s, 6, _print<std::string>);
        std::cout << "\n";
    }
    catch (const char *str){
        std::cerr << str << std::endl;
    }
    
}