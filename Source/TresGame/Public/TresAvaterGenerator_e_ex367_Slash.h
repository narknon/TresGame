#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresE_EX367AvaterSlashParam.h"
#include "TresAvaterGenerator_e_ex367_Slash.generated.h"

class UTresStateBase;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresAvaterGenerator_e_ex367_Slash : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_EX367AvaterSlashParam> m_AvaterPatternParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_MyTarget;
    
public:
    ATresAvaterGenerator_e_ex367_Slash(const FObjectInitializer& ObjectInitializer);
};

