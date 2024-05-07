#pragma once
#include "CoreMinimal.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresSavePointDispType.h"
#include "ETresShopChrID.h"
#include "ETresShopID.h"
#include "TresShopActor.generated.h"

class UTresMapMarkerComponent;
class UTresReactorComponent;
class UTresBodyCollComponent;

UCLASS(Blueprintable)
class ATresShopActor : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresMapMarkerComponent* MyMapMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresShopID m_ShopID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresShopChrID m_ShopChrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultIdlingMotName;
    
public:
    ATresShopActor(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeShopActorDispType(ETresSavePointDispType InDispType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePlayerArtsMode(bool bIsArtsMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCinematicMode(bool bIsCinematicMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
};

