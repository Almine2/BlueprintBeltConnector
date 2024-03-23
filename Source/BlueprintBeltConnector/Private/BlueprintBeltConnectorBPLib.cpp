#include "BlueprintBeltConnectorBPLib.h"
#include "BlueprintBeltConnectorModule.h"
#include "FGFactoryConnectionComponent.h"


void UBlueprintBeltConnectorBPLib::BBC_ConnectGivenBelt(UFGFactoryConnectionComponent* FromBelt, UFGFactoryConnectionComponent* ToBelt) {
	if (FromBelt != nullptr && ToBelt != nullptr && !FromBelt->IsConnected() && !ToBelt->IsConnected() && FromBelt->CanConnectTo(ToBelt)) {
		FromBelt->SetConnection(ToBelt);
	}
}

FVector UBlueprintBeltConnectorBPLib::BBC_GetConnectorLocation(UFGFactoryConnectionComponent* targetBelt) {
	return targetBelt->GetComponentLocation();
}
