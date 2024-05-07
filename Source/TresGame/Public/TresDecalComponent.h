#pragma once
#include "CoreMinimal.h"
#include "SQEX_DecalComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_DecalComponent -FallbackName=SQEX_DecalComponent
#include "TresDecalComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDecalComponent : public USQEX_DecalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_pMaterial;
    
public:
    UTresDecalComponent();
};

