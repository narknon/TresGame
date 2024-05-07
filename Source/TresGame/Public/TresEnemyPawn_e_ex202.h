#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemyEx202ActionMode.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex202.generated.h"

class UTresAnimSet;
class UTresEnemyControlVolumeData_e_ex202;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex202 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx202ActionMode m_AppearActionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LockonCursorNameAtSnakeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LockonCursorNameAtFlowerMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NumIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAnimSet* m_FlowerTossAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bTestTossDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TestBlowHeightRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Angle;
    
public:
    ATresEnemyPawn_e_ex202(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnakeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInLinkActorRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlowerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresEnemyControlVolumeData_e_ex202* GetLinkActorData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoopAddMotionAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator GetAimOffsetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAddMotionAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ToFlower();
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BP_DebugGetNearLinkActorEntry() const;
    
};

