/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "network/bundle.hpp"
#include "billingsystem.hpp"
#include "orders.hpp"


namespace KBEngine{

//-------------------------------------------------------------------------------------
Orders::Orders():
address(),
ordersID(),
cbid(0),
dbid(0),
baseappID(UNKNOWN_COMPONENT_TYPE),
dbmgrID(UNKNOWN_COMPONENT_TYPE),
state(Orders::STATE_FAILED),
postDatas(),
getDatas(),
timeout(0)
{
}

//-------------------------------------------------------------------------------------
Orders::~Orders()
{
}

//-------------------------------------------------------------------------------------
OrdersCharge::OrdersCharge()
{
}

//-------------------------------------------------------------------------------------
OrdersCharge::~OrdersCharge()
{
	//INFO_MSG(boost::format("OrdersCharge::~OrdersCharge(%1%): orders=%2%\n") % 
	//	this % ordersID);
}

//-------------------------------------------------------------------------------------
}
