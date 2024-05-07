#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyXIIIBPawnBase.generated.h"

class UEnvQuery;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIIBPawnBase : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VanishModeEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_VanishModeEndQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SmokeCardParticleSystem;
    
public:
    ATresEnemyXIIIBPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    bool IsStun_e_ex307() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringCoopActionCooldown_Phase3();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringCoopActionCooldown_Phase2();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsCardEscape() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnableAlwaysCardScapegoat(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDefaultBT();
    
};

