// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PawnWithCamera.generated.h"

UCLASS()
class HOWTO_PLAYERCAMERA_API APawnWithCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APawnWithCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    UPROPERTY(EditAnywhere)
    class USpringArmComponent* OurCameraSpringArm;
    UPROPERTY()
    class UCameraComponent* OurCamera;

    //Input variables
    FVector2D MovementInput;
    FVector2D CameraInput;
    float ZoomFactor;
    bool bZoomingIn;

    //Input functions
    UFUNCTION()
    void MoveForward(float AxisValue);
    UFUNCTION()
    void MoveRight(float AxisValue);
    UFUNCTION()
    void PitchCamera(float AxisValue);
    UFUNCTION()
    void YawCamera(float AxisValue);
    UFUNCTION()
    void ZoomIn();
    UFUNCTION()
    void ZoomOut();

};
