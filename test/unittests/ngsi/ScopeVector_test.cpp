/*
*
* Copyright 2013 Telefonica Investigacion y Desarrollo, S.A.U
*
* This file is part of Orion Context Broker.
*
* Orion Context Broker is free software: you can redistribute it and/or
* modify it under the terms of the GNU Affero General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* Orion Context Broker is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero
* General Public License for more details.
*
* You should have received a copy of the GNU Affero General Public License
* along with Orion Context Broker. If not, see http://www.gnu.org/licenses/.
*
* For those usages not covered by this license please contact with
* iot_support at tid dot es
*
* Author: Ken Zangelin
*/
#include "ngsi/Scope.h"
#include "ngsi/ScopeVector.h"

#include "unittest.h"



/* ****************************************************************************
*
* getAndSize -
*/
TEST(ScopeVector, getAndSize)
{
  utInit();

  ScopeVector   sV;
  Scope         scope0("Type", "Value0");
  Scope         scope1("Type", "Value1");
  Scope         scope2("Type", "Value2");
  Scope*        scopeP;

  sV.push_back(&scope0);
  sV.push_back(&scope1);
  sV.push_back(&scope2);

  EXPECT_EQ(3, sV.size());

  scopeP = sV[0];
  EXPECT_STREQ("Value0", scopeP->value.c_str());

  scopeP = sV[1];
  EXPECT_STREQ("Value1", scopeP->value.c_str());

  scopeP = sV[2];
  EXPECT_STREQ("Value2", scopeP->value.c_str());

  utExit();
}
