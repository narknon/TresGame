#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresGimmick_e_ex781_Avatar.generated.h"

class ATresEnemyPawn_e_ex781_Avatar;
class ATresEnemyPawn_e_ex781;
class UTresAttackDefinitionBase;
class UTresActionDefinitionBase;

UCLASS(Blueprintable)
class ATresGimmick_e_ex781_Avatar : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex781_Avatar> m_AfterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex781> m_ActionAvatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresAttackDefinitionBase>> m_ActionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_LastAction;
    
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    ATresEnemyPawn_e_ex781* m_pAvaterPawn[13];
    
public:
    ATresGimmick_e_ex781_Avatar(const FObjectInitializer& ObjectInitializer);
};

