#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex761_BattleAreaAttack.h"
#include "TresBattleAreaAppearComponentBase_e_ex761.h"
#include "TresBattleAreaAppearComponentTypeB_e_ex761.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresBattleAreaAppearComponentTypeB_e_ex761 : public UTresBattleAreaAppearComponentBase_e_ex761 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsCameraAimTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex761_BattleAreaAttack::Type> m_AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableOverrideAppearTurnSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideTurnSpeed;
    
public:
    UTresBattleAreaAppearComponentTypeB_e_ex761();
};

