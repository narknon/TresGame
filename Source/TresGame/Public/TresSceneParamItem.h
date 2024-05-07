#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSceneParamItem.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresSceneParamItem : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SceneColorAttraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SceneColorMagic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SceneColorShootLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SceneColorWeaponForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_SceneColorDisneyMagic;
    
    UTresSceneParamItem();
};

