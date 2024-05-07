#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresChrUniqueID.h"
#include "TresBTDecorator_IsPlayerTeamCharacter.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_IsPlayerTeamCharacter : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresChrUniqueID> m_CharactorUID;
    
    UTresBTDecorator_IsPlayerTeamCharacter();
};

