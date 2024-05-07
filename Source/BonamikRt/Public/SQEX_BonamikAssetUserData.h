#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ESQEX_Bonamik_OutOfCamera.h"
#include "SQEX_BonamikGroupLOD.h"
#include "SQEX_BonamikAssetUserData.generated.h"

class USQEX_BonamikAsset;

UCLASS(EditInlineNew)
class BONAMIKRT_API USQEX_BonamikAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USQEX_BonamikAsset*> BonamikAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bAlwaysUse60FPSsetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> IgnoreEffectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> ReferenceGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> CheckGroundBodyPosGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSQEX_BonamikGroupLOD> BonamikGroupLODs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAccurateBoundsUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PreRollStepOnResume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESQEX_Bonamik_OutOfCamera> OutOfCamera;
    
    USQEX_BonamikAssetUserData();
};

