# Copyright 2013 Telefonica Investigacion y Desarrollo, S.A.U
#
# This file is part of Orion Context Broker.
#
# Orion Context Broker is free software: you can redistribute it and/or
# modify it under the terms of the GNU Affero General Public License as
# published by the Free Software Foundation, either version 3 of the
# License, or (at your option) any later version.
#
# Orion Context Broker is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero
# General Public License for more details.
#
# You should have received a copy of the GNU Affero General Public License
# along with Orion Context Broker. If not, see http://www.gnu.org/licenses/.
#
# For those usages not covered by this license please contact with
# iot_support at tid dot es

CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

SET (SOURCES
versionTreat.cpp
exitTreat.cpp
leakTreat.cpp
logTraceTreat.cpp
postRegisterContext.cpp
postDiscoverContextAvailability.cpp
getContextEntitiesByEntityId.cpp
postUpdateContext.cpp
postQueryContext.cpp
postSubscribeContext.cpp
postUpdateContextSubscription.cpp
postUnsubscribeContext.cpp
postContextEntitiesByEntityId.cpp
getContextEntityAttributes.cpp
postContextEntityAttributes.cpp
getEntityByIdAttributeByName.cpp
postEntityByIdAttributeByName.cpp
getContextEntityTypes.cpp
postContextEntityTypes.cpp
getContextEntityTypeAttribute.cpp
postContextEntityTypeAttribute.cpp
getIndividualContextEntity.cpp
putIndividualContextEntity.cpp
postIndividualContextEntity.cpp
putIndividualContextEntityAttribute.cpp
getIndividualContextEntityAttribute.cpp
postIndividualContextEntityAttribute.cpp
deleteIndividualContextEntityAttribute.cpp
deleteIndividualContextEntity.cpp
getNgsi10ContextEntityTypes.cpp
getNgsi10ContextEntityTypesAttribute.cpp
putSubscriptionConvOp.cpp
deleteSubscriptionConvOp.cpp
badVerbPostOnly.cpp
badVerbAllFour.cpp
badVerbAllFive.cpp
badVerbGetPostOnly.cpp
badVerbGetPostDeleteOnly.cpp
badVerbGetOnly.cpp
badVerbGetDeleteOnly.cpp
badVerbPutDeleteOnly.cpp
badVerbGetPutDeleteOnly.cpp
badVerbPutOnly.cpp
badNgsi9Request.cpp
badNgsi10Request.cpp
badRequest.cpp
postNotifyContext.cpp
statisticsTreat.cpp
getEntityTypes.cpp
getAttributesForEntityType.cpp
getAllContextEntities.cpp
getAllEntitiesWithTypeAndId.cpp
postAllEntitiesWithTypeAndId.cpp
putAllEntitiesWithTypeAndId.cpp
deleteAllEntitiesWithTypeAndId.cpp
getIndividualContextEntityAttributeWithTypeAndId.cpp
deleteIndividualContextEntityAttributeWithTypeAndId.cpp
postIndividualContextEntityAttributeWithTypeAndId.cpp
putIndividualContextEntityAttributeWithTypeAndId.cpp
getContextEntitiesByEntityIdAndType.cpp
postContextEntitiesByEntityIdAndType.cpp
getEntityByIdAttributeByNameWithTypeAndId.cpp
postEntityByIdAttributeByNameWithTypeAndId.cpp
postSubscribeContextConvOp.cpp
optionsVersionRequest.cpp
)

SET (HEADERS
versionTreat.h
exitTreat.h
logTraceTreat.h
postRegisterContext.h
postDiscoverContextAvailability.h
getContextEntitiesByEntityId.h
postUpdateContext.h
postQueryContext.h
postSubscribeContext.h
postUpdateContextSubscription.h
postUnsubscribeContext.h
postContextEntitiesByEntityId.h
getContextEntityAttributes.h
postContextEntityAttributes.h
getEntityByIdAttributeByName.h
postEntityByIdAttributeByName.h
getContextEntityTypes.h
postContextEntityTypes.h
getContextEntityTypeAttribute.h
postContextEntityTypeAttribute.h
getIndividualContextEntity.h
putIndividualContextEntity.h
postIndividualContextEntity.h
putIndividualContextEntityAttribute.h
getIndividualContextEntityAttribute.h
postIndividualContextEntityAttribute.h
deleteIndividualContextEntityAttribute.h
deleteIndividualContextEntity.h
getNgsi10ContextEntityTypes.h
badVerbPostOnly.h
badVerbAllFour.h
badVerbAllFive.h
badVerbGetPostOnly.h
badVerbGetPostDeleteOnly.h
badVerbGetOnly.h
badVerbGetDeleteOnly.h
badVerbPutDeleteOnly.h
badVerbGetPutDeleteOnly.h
badVerbPutOnly.h
# FIXME: disable NGSI9 API routes in Orion 3.8.0, to be definetively removed at some point of the future
# (along with badNgsi9Request.h|cpp files themselves)
#badNgsi9Request.h
badNgsi10Request.h
badRequest.h
postNotifyContext.h
statisticsTreat.h
getEntityTypes.h
getAttributesForEntityType.h
getAllContextEntities.h
getIndividualContextEntityAttributeWithTypeAndId.h
deleteIndividualContextEntityAttributeWithTypeAndId.h
postIndividualContextEntityAttributeWithTypeAndId.h
putIndividualContextEntityAttributeWithTypeAndId.h
getContextEntitiesByEntityIdAndType.h
postContextEntitiesByEntityIdAndType.h
getEntityByIdAttributeByNameWithTypeAndId.h
postEntityByIdAttributeByNameWithTypeAndId.h
postSubscribeContextConvOp.h
optionsVersionRequest.h
)



# Include directories
# -----------------------------------------------------------------
include_directories("${PROJECT_SOURCE_DIR}/src/lib")

# Library declaration
# -----------------------------------------------------------------
ADD_LIBRARY(serviceRoutines STATIC ${SOURCES} ${HEADERS})
