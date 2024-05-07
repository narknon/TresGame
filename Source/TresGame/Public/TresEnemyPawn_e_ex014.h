#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemySetAppearMode.h"
#include "TresEnemyPawn_e_ex014.generated.h"

class ATresEnemyPawn_e_ex012;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex014 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex012* m_CoopDummyPawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_pro_TanpopoOffsetRot;
    
    ATresEnemyPawn_e_ex014(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDebugStateNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    bool IsCooperation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTanpopoBoneRot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTanpopoBoneAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugStateNo();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAppearState(TEnumAsByte<ETresEnemySetAppearMode> mode);
    
};

