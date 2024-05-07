#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex360.generated.h"

class ATresEnemyPawn_e_ex360;
class ATresPawnBase;
class ATresProjectileBase;
class ATresCharPawnBase;
class ATresEnemyPawn_e_ex360KBBoard;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex360 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresPawnBase> m_KBBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_KBBoardTailAttackPawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyXIIILPawnBase> m_Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CenterPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DarkSplicerAvatarShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StrongDarkSplicerAvatarShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CloneBurstAvatarShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_KeyBladeRideMinHigh;
    
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    ATresEnemyPawn_e_ex360* m_pAvaterPawn[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex360KBBoard* m_KeybladeBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_AttackedChar;
    
public:
    ATresEnemyPawn_e_ex360(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeyBladeRide();
    
};

