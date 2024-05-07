#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresGummiShipSticker.h"
#include "TresRealGummiShipStruct.h"
#include "TresGummiEditorManager.generated.h"

class ATresGummiEditorActor;
class ATresCreateGummiShipActor;
class USceneComponent;
class UStaticMeshComponent;
class ATresWorldMapCameraActor;
class ATresWorldMapPlayerController;
class UTresUIManager;
class ATresHudGummiMenu;
class UTresGummiEditorDataTableSet;

UCLASS(Blueprintable)
class ATresGummiEditorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_pRootComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCreateGummiShipActor> GummiShipActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGummiEditorActor> GummiEditorActorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWorldMapCameraActor> WorldMapCameraActorRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGummiEditorActor* m_pGummiEditorActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCreateGummiShipActor* m_pGummiShipActor;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    ATresCreateGummiShipActor* m_pDepatureShipActor[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWorldMapCameraActor* m_pWorldMapCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWorldMapPlayerController* m_pController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_pUIManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiShipSticker m_OldSticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_BaseGummiData9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRealGummiShipStruct> m_DecoGummiData9;
    
public:
    ATresGummiEditorManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresHudGummiMenu* GetHUD() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGummiEditorDataTableSet* GetGummiEditorData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DelegateSpecialWeaponHelpOut(int32 InParam);
    
    UFUNCTION(BlueprintCallable)
    void DelegateGummiAbilityHelpOut(int32 InParam);
    
};

