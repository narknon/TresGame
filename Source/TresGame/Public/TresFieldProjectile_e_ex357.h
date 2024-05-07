#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "ETresAttributeHitEnd_e_ex357.h"
#include "TresFieldAddProjectileParam_e_ex357.h"
#include "ETresDamageAttribute.h"
#include "TresFieldProjectile_e_ex357.generated.h"

class ATresSignProjectile_e_ex357_Base;
class UTresBodyCollComponent;

UCLASS(Blueprintable)
class ATresFieldProjectile_e_ex357 : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_EnableSpawnProjectileTurnTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresSignProjectile_e_ex357_Base> m_AddProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresFieldAddProjectileParam_e_ex357> m_AddProjectileParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresAttributeHitEnd_e_ex357::Type> m_AttributeHitEndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresDamageAttribute> m_HitAttributeList;
    
public:
    ATresFieldProjectile_e_ex357(const FObjectInitializer& ObjectInitializer);
};

