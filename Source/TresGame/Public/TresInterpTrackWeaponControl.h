#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresWeaponControlTrackKey.h"
#include "TresInterpTrackWeaponControl.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackWeaponControl : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresWeaponControlTrackKey> m_Keys;
    
    UTresInterpTrackWeaponControl();
};

