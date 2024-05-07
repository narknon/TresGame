#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresLoadAsset.h"
#include "UObject/NoExportTypes.h"
#include "TresPlayerPawnLoadAsset.generated.h"

class ATresCameraNormal;
class ATresCameraRailSlideMI;
class UTresPlayerStateEvent;
class ATresCameraRcHe001;
class ATresCameraDiving;
class ATresCameraWall;
class ATresCameraPreview;
class ATresCameraTeaCup;
class ATresCameraMerryGoRound;
class ATresCameraAirplane;
class ATresCameraDMSimba;
class UCameraAnim;
class ATresCameraDMAriel;
class ATresCameraHoldCamera;
class ATresCameraFRPowerStrike;
class UParticleSystem;

UCLASS(Blueprintable)
class UTresPlayerPawnLoadAsset : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresPlayerStateEvent>> PlayerStateEventCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> PlayerCameraNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraWall> PlayerCameraWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraDiving> PlayerCameraDiving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraPreview> PlayerCameraPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraRailSlideMI> PlayerCameraRailSlideMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraRcHe001> PlayerCameraRcHe001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraTeaCup> PlayerCameraTeaCup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraMerryGoRound> PlayerCameraMerryGoRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> PlayerCameraWaterRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraAirplane> PlayerCameraAirplane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraDMSimba> PlayerCameraDMSimba;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraDMAriel> PlayerCameraDMAriel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraHoldCamera> PlayerCameraHoldCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> PlayerCameraFRWoodyBuzzRocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraAirplane> PlayerCameraFRWoodyBuzzRocketMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraFRPowerStrike> PlayerCameraFRPowerStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* m_PlayerOpenTreasureBoxCameraAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* m_PlayerDieCameraAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* m_PlayerGameOverCameraAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PlayerGameOverHeartEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PlayerGameOverHeartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PlayerGameOverLightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PlayerGameOverLightLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* m_PlayerMissionFailedCameraAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PlayerMissionFailedLightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PlayerMissionFailedLightLocation;
    
    UTresPlayerPawnLoadAsset();
};

