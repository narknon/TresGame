#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TresWorldCodeLoadAssetName.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=StringAssetReference -FallbackName=StringAssetReference
#include "ETresWorldCode.h"
#include "Engine/EngineBaseTypes.h"
#include "TresLSIGameDriver.h"
#include "TresGamePlayWorldSwitcher.h"
#include "TresGameInstance.generated.h"

class UTresDebugData;
class UTresGameModeLoadAsset;
class UTresCommonAssets;
class UObject;
class UTresWorldCodeLoadAsset;
class UTresMapSet;
class UTresShare;
class UTresChrInitData;
class UAudioComponent;
class UTresAchievement;
class UTresTimelinePlayer;
class UTresObjectDataBuffer;
class UDataTable;
class UTresBattleLevelAutoAsset;
class UTresItemMan;
class UTresDebugDisplayManager;
class UTresTaskClassListExecuter;
class UTresTaskExecutor;
class AMatineeActor;
class UTresUIManager;
class APlayerStart;
class UTresNotifyEventToBlueprint;
class UTresScreenshotSaveController;
class UTresLevelEntityManager;
class UTresTaggedActorPropertyManager;
class UTresTexturePump;
class UTresAlbumPhotoManager;
class UTresPhotoHologramManager;
class UTresGameSettings;

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_AppLoadAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_CommonAssetsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_GameModeLoadAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FTresWorldCodeLoadAssetName> m_WorldCodeLoadAssetNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGameModeLoadAsset* m_AppStaticAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCommonAssets* m_CommonAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_Residents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGameModeLoadAsset* m_GameStaticAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresWorldCodeLoadAsset* m_WorldStaticAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresWorldCodeLoadAsset* m_WorldStaticAssetBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DisableWorldResidents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapSet* m_TutorialMapSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresChrInitData* m_ChrInitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_GameOverSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresMapSet* m_pMapSetForTemp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresMapSet* m_pMapSetForLevelList;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ETresWorldCode> m_PreviousWorldCode;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ETresWorldCode> m_PreviousPlayableWorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_DisableUpdatePreviousPlayableWorldCode;
    
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ETresWorldCode> m_CurrentWorldCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_LevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FURL m_TravelURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresObjectDataBuffer* m_WorldDataBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_TheaterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresShare* m_pShare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAchievement* m_pAchievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_pMapNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_pAreaNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_pNavMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresBattleLevelAutoAsset* m_pBattleLevelAutoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_pBattleLevelFromNameTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresItemMan* m_ItemMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresDebugDisplayManager* m_pDebugDisplayManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskClassListExecuter* m_pDebugTaskExecuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecutor* m_pTaskExecuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMatineeActor*> m_MatineeActorsForMovie;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerStart* m_pPlayerStartForTeleport;
    
    UPROPERTY(EditAnywhere, Transient)
    UClass* m_BlockGCClasses[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_BlockGCObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresNotifyEventToBlueprint* m_pCommonEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresLSIGameDriver m_LSIGameDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGamePlayWorldSwitcher m_TutorialSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresTimelinePlayer*> m_TimelinePlayers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresDebugData* m_DebugData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresLevelEntityManager* m_TresLevelEntityManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaggedActorPropertyManager* m_TresTaggedActorPropertyManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTexturePump* m_TexturePump;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresScreenshotSaveController* m_TresScreenshotSaveController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAlbumPhotoManager* m_TresAlbumPhotoManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresPhotoHologramManager* m_TresPhotoHologramManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGameSettings* m_pGameSettings;
    
public:
    UTresGameInstance();
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUnlockSmartphone(bool bUnlock);
    
};

