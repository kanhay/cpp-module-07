/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:05:52 by khanhayf          #+#    #+#             */
/*   Updated: 2024/03/03 20:03:49 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main(){
    int x = 15, y = 20;
    
    std::cout << "Before swap >> x = " << x << " y = " << y << "\n";
    swap<int>(x, y);
    std::cout << "After  swap >> x = " << x << " y = " << y << "\n";
    std::cout << "Min = " << min(x, y) << "\nMax = " << max(x, y) << "\n\n";

    char c1 = 'k', c2 = 'o';
    
    std::cout << "Before swap >> " << c1 << c2 << "\n";
    swap<char>(c1, c2);
    std::cout << "After  swap >> " << c1 << c2 << "\n";
    std::cout << "Max = " << max(c1, c2) << "\nMin = " << min(c1, c2) << "\n";
}
