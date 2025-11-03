/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PolymorphicUtils.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:06:58 by ybounite          #+#    #+#             */
/*   Updated: 2025/11/03 17:20:40 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
#include <cstdlib> 
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base	*generate(void);
void	identify(Base& p);
void	identify(Base* p);
