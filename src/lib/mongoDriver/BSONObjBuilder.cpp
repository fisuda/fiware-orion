/*
*
* Copyright 2020 Telefonica Investigacion y Desarrollo, S.A.U
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
* Author: Fermín Galán
*/

#include <string>

#include "mongoDriver/BSONObjBuilder.h"

namespace orion
{
/* ****************************************************************************
*
* BSONObjBuilder::BSONObjBuilder -
*/
BSONObjBuilder::BSONObjBuilder(void)
{
}



/* ****************************************************************************
*
* BSONObjBuilder::obj -
*/
BSONObj BSONObjBuilder::obj(void)
{
  return BSONObj(bob.obj());
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, const std::string& value)
{
  bob.append(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, const char* value)
{
  bob.append(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, int value)
{
  bob.append(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, long long value)
{
  bob.append(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, double value)
{
  bob.append(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, bool value)
{
  bob.append(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, const orion::OID& value)
{
  bob.append(key, value.get());
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, const BSONObj& value)
{
  bob.append(key, value.get());
}



/* ****************************************************************************
*
* BSONObjBuilder::append -
*/
void BSONObjBuilder::append(const std::string& key, const BSONArray& value)
{
  bob.append(key, value.get());
}



/* ****************************************************************************
*
* BSONObjBuilder::appendCode -
*/
void BSONObjBuilder::appendCode(const std::string& key, const std::string& value)
{
  bob.appendCode(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::appendRegex -
*/
void BSONObjBuilder::appendRegex(const std::string& key, const std::string& value)
{
  bob.appendRegex(key, value);
}



/* ****************************************************************************
*
* BSONObjBuilder::appendDate -
*/
void BSONObjBuilder::appendDate(const std::string& key, const BSONDate& value)
{
  bob.appendDate(key, value.get());
}



/* ****************************************************************************
*
* BSONObjBuilder::appendNull -
*/
void BSONObjBuilder::appendNull(const std::string& key)
{
  bob.appendNull(key);
}



/* ****************************************************************************
*
* BSONObjBuilder::appendElements -
*/
void BSONObjBuilder::appendElements(orion::BSONObj b)
{
  // In the case the underlying driver doesn't provide a direct appendElements method
  // this can be implemented with a loop on b elements with plain append()
  bob.appendElements(b.get());
}
}