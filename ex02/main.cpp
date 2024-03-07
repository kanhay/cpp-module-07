/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:29:23 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/03 19:42:36 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main(){
    try{
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = 65 + i;
            
        Array<char> b(5);
        for (unsigned int i = 0; i < b.size(); i++)
            b[i] = i + 65;
        
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << "\t";
        std::cout << "\n";

        for (unsigned int i = 0; i < b.size(); i++)    
            std::cout << b[i] << "\t";
        std::cout << "\n";
    }
    catch(std::exception &e){
        std::cout << "\nException: " << e.what() << std::endl;
    }
}
