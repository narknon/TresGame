#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresGummiMenuManager.generated.h"

class USoundBase;
class UTresUIP_HelpGummiShip;
class ATresWorldMapObject;
class UDataTable;
class UTresFieldVoice;
class ATresGumiShipHUD;
class ATresHudGummiMenu;
class ATresWorldMapPlayerController;
class UTresUIManager;
class ATresWorldMapCameraActor;
class ATresGumiShipPlayerControllerDefault;
class ATresGummiEditorManager;
class USceneComponent;
class ULevelStreamingKismet;
class UTresGummiEditorDataTableSet;

UCLASS(Blueprintable)
class ATresGummiMenuManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWorldMapObject> m_pShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWorldMapObject> m_pMist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWorldMapObject> m_pBlackBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSpaceUse;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_nSpaceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pPreviewDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pSE_se00800_035;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_pSE_se00800_036;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_chip_0010;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_chip_0020;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_chip_0030;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_chip_0040;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_dale_0010;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_dale_0020;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_dale_0030;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_dale_0040;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pFd_gm_ui_dale_0050;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresHudGummiMenu* m_pGummiHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipHUD* m_pGummiSpaceHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIP_HelpGummiShip* m_pGummiHelp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_pUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWorldMapPlayerController* m_pController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGumiShipPlayerControllerDefault* m_pSpaceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWorldMapObject* m_pLocalWorldIcon;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresWorldMapObject> m_pLocalWorldSymble;
    
    UPROPERTY(EditAnywhere, Transient)
    ATresWorldMapObject* m_pMistWorldIcon[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWorldMapObject* m_pGummiShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresWorldMapObject* m_pBlackWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGummiEditorManager* m_pGummiEditorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pHubComponent;
    
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pLocalSpaceRootComponent[4];
    
    UPROPERTY(EditAnywhere, Export)
    USceneComponent* m_pLocalSpaceRootMoveComponent[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingKismet*> m_Kismet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreamingKismet*> m_DepatureKismet;
    
public:
    ATresGummiMenuManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipHUD* GetSpaceHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresHudGummiMenu* GetHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGummiEditorDataTableSet* GetGummiEditorData() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelegateGummiMissionHelpOut(int32 InParam);
    
};

