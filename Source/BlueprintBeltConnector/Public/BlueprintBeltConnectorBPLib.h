#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGFactoryConnectionComponent.h"

#include "BlueprintBeltConnectorBPLib.generated.h"


UCLASS()
class BLUEPRINTBELTCONNECTOR_API UBlueprintBeltConnectorBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Blueprint Belt Connector")
		static void BBC_ConnectGivenBelt(UFGFactoryConnectionComponent* FromBelt, UFGFactoryConnectionComponent* ToBelt);

	UFUNCTION(BlueprintCallable, Category = "Blueprint Belt Connector")
		static FVector BBC_GetConnectorLocation(UFGFactoryConnectionComponent* targetBelt);
};