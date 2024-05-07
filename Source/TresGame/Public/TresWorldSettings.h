#pragma once
#include "CoreMinimal.h"
#include "SQEX_WorldSettings.h"
#include "TresAttractionFlowDrawingInterface.h"
#include "ETresWorldCode.h"
#include "ETresWorldAreaCode.h"
#include "TresAttractionFlowDrawingEntry.h"
#include "ETresEffectAreaCode.h"
#include "TresWorldSettings.generated.h"

class UTresWorldResidentActorClassAsset;
class USoundBase;
class UDataTable;
class UDataAsset;
class UTresPhysMatEffectAsset;

UCLASS(Blueprintable)
class TRESGAME_API ATresWorldSettings : public ASQEX_WorldSettings, public ITresAttractionFlowDrawingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldCode> m_WorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresWorldAreaCode> m_WorldAreaCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> m_BGMField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> m_BGMBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAttractionFlowDrawingEntry> m_DrawingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AttractionFlowDrawingEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataAsset*> m_Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresWorldResidentActorClassAsset*> m_AssetMapsOnlyForLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LoadCommonAssetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_DiscardCommonAssetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPhysMatEffectAsset* m_PhysMatEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEffectAreaCode> m_EffectAreaCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_EffectBaseColorTable;
    
    ATresWorldSettings(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

