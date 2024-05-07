#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresTarHandParam_e_ex701.h"
#include "TresAttack10_e_ex701_SpawnTarHandChain.generated.h"

class UTresAttack_e_ex701_SpawnTarHandBase;
class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack10_e_ex701_SpawnTarHandChain : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_LoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_EndAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTarHandParam_e_ex701> m_TarHandParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAttack_e_ex701_SpawnTarHandBase* m_CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAttack_e_ex701_SpawnTarHandBase* m_NextAction;
    
public:
    UTresAttack10_e_ex701_SpawnTarHandChain();
};

