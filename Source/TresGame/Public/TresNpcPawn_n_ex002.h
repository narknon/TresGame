#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex002.generated.h"

class ATresAccompanyPawnBase;
class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresNpcPawn_n_ex002 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRShieldGuardianBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRGoofyShootBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_GoofyShootProj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemyUniqueID> m_GoofyShootExpEnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PawnID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ScrumModeCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsLinkMode;
    
    ATresNpcPawn_n_ex002(const FObjectInitializer& ObjectInitializer);
};

