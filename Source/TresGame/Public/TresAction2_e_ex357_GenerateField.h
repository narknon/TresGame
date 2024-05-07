#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAction_e_ex357_Base.h"
#include "ETresEnemyFieldSize_e_ex357.h"
#include "TresAction2_e_ex357_GenerateField.generated.h"

class ATresProjectileBase;
class ATresFieldProjectile_e_ex357;
class UTresFieldGenerateParamBase_e_ex357;
class UTresFieldAttackParamBase_e_ex357;
class USoundBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex357_GenerateField : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> m_FieldSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresFieldProjectile_e_ex357> m_FieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresFieldGenerateParamBase_e_ex357* m_GenerateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresFieldAttackParamBase_e_ex357* m_AttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_VoiceDataList;
    
public:
    UTresAction2_e_ex357_GenerateField();
};

