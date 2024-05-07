#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETresUIMapMarkerType.h"
#include "TresMapMarkerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresMapMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresUIMapMarkerType m_MapMarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_MaskMapNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableUpdatePosition;
    
public:
    UTresMapMarkerComponent();
};

