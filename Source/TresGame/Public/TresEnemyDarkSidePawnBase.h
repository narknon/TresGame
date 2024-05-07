#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemydw407ViewWay.h"
#include "TresEnemyDarkSidePawnBase_LockOnParam.h"
#include "TresEnemyDarkSidePawnBase.generated.h"

class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresEnemyDarkSidePawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyPawn_e_dw407b_EndLaserTiming);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyPawn_e_dw407b_EndBigRoarLaser);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresEnemyPawn_e_dw407b_BeginBigRoarLaser);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyPawn_e_dw407b_BeginBigRoarLaser OnEnemyDw407bBeginBigRoarLaser;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyPawn_e_dw407b_EndBigRoarLaser OnEnemyDw407bEndBigRoarLaser;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyPawn_e_dw407b_EndLaserTiming OnEnemyDw407bEndLaserTiming;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemydw407ViewWay> m_ViewWay;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresEnemyDarkSidePawnBase_LockOnParam m_LockOnViewTargetParams[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ViewTargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProdusedProjectileAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_TestAsset;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_SwitchingLockOnCursorPosHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_PreActionDefinitionClass;
    
public:
    ATresEnemyDarkSidePawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void BP_SpawnProjectile();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTest(const bool bIsTest);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
};

