#pragma once
#include "CoreMinimal.h"
#include "TresCharState_ShopMenu.h"
#include "TresPlayerState_ShopMenu.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_ShopMenu : public UTresCharState_ShopMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_ShopMenu();
};

