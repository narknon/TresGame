#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "ETresChrLaunchType.h"
#include "TresChrLauncherDoLaunchSignatureDelegate.h"
#include "TresChrLauncherComponentBase.generated.h"

class ATresCharPawnBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresChrLauncherComponentBase : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LaunchHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresChrLaunchType> m_JumpMode;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATresCharPawnBase>> m_PawnList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresChrLauncherDoLaunchSignature OnChrPawnLaunched;
    
    UTresChrLauncherComponentBase();
    UFUNCTION(BlueprintCallable)
    void RemovePawnList(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    bool AddPawnList(ATresCharPawnBase* pPawn);
    
};

