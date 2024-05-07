#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresChrUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcAINpcModeFreeWalkWayPoint.generated.h"

UCLASS(Blueprintable)
class ATresNpcAINpcModeFreeWalkWayPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_CharUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLookAtPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LookAtPoint;
    
    ATresNpcAINpcModeFreeWalkWayPoint(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharUniqueIDName() const;
    
};

