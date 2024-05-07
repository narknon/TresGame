#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_fz214.generated.h"

class ATresAccompanyPawnBase;
class UCurveFloat;

UCLASS(Blueprintable)
class ATresNpcPawn_n_fz214 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRGiantSoldierBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_AppearCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FinishCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParabolaDamagePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParabolaDamageAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParabolaDamageBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fParabolaDamageLimitBrake;
    
    ATresNpcPawn_n_fz214(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void BP_StopUserAI(bool Switch);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetArmorMorphWeight(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsAnimEnd(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

