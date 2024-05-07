#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "TresAction100_e_ex771_UpdraftTest.generated.h"

class UCurveFloat;
class UParticleSystemComponent;
class ATresActor_e_ex771_Updraft;
class ATresActor_e_ex771_Descent;
class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAction100_e_ex771_UpdraftTest : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_Updraft* m_pUpdraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresActor_e_ex771_Descent* m_pDescent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_Updraft> m_pro_UpdraftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UpdraftForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pro_UpdraftForceRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_UpdraftEffParticleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UpdraftEffSpeedZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UpdraftEffScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_UpdraftEffData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_UpdraftEff;
    
    UTresAction100_e_ex771_UpdraftTest();
};

