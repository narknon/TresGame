#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex039_SpinAttack.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresCoop1_e_ex039_SpinAttack : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReverseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_QueryIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EndEnvQuery;
    
public:
    UTresCoop1_e_ex039_SpinAttack();
    UFUNCTION(BlueprintCallable)
    bool IsAttackLoop(const FTresCoopDefinitionParamBP& Param) const;
    
    UFUNCTION(BlueprintCallable)
    void CoopMemberAttackStart(const FTresCoopDefinitionParamBP& Param);
    
};

