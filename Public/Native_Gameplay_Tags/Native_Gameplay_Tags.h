#pragma once

#include "NativeGameplayTags.h"

#pragma region Parkour_Region


#pragma region Parkour_State

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Free_Roam);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Jump);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Mantle);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Vault);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Ready_To_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Initialize_Wall_Run);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Wall_Run);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Initialize_Wall_Pipe_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Wall_Pipe_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Initialize_Balance_Walk);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_State_Balance_Walk);


#pragma endregion


#pragma region Parkour_Action

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_No_Action);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Free_Roam_Accelerating_Drop);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Accelerating_Drop);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Normal_Drop);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Falling_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Falling_Climb_Slipped);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Climb_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Right);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Left_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Right_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Down);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Left_Down);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Hop_Right_Down);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Shimmy_180_Shimmy);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Exit_Jump_Forward);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Braced_Climb_Exit_Jump_Backward);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Accelerating_Drop);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Normal_Drop);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Falling_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Falling__Climb_Hanging_Jump);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Climb_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Hop_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Hop_Right);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Hop_Down);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Shimmy_180_Shimmy);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_FreeHang_Exit_Jump);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Corner_Move);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_Start_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_Start_Right);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_L_Jump_F);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_R_Jump_F);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_Left_Jump_90_R);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_Right_Jump_90_L);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_L_Finish);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Run_R_Finish);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Attach_Grounded);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Attach_Airborne);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Jump_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Jump_Down);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Jump_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Jump_Right);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Fall_Down);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Wall_Pipe_Climb_Up_2_Hand);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Mantle);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Low_Vault);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_High_Vault);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_Up);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Accurate_Jump_Start_L);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Accurate_Jump_Start_R);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Accurate_Jump_Start_L_Warp);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Accurate_Jump_Start_R_Warp);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Accurate_Jump_Finish);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_Front_L_Start);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_Front_R_Start);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_Front_L_Start_Warp);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_Front_R_Start_Warp);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_Finish);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_One_L);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Jump_One_R);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Balance_Walk_90_L);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Balance_Walk_90_R);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Balance_Walk_180);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Balance_Walk_Automatic_Hop);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Balance_Drop_L_Hanging);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Balance_Drop_R_Hanging);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Hanging_Climb_Up_To_Balanced_Walk_L);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Action_Hanging_Climb_Up_To_Balanced_Walk_R);


#pragma endregion


#pragma region Parkour_Direction

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_No_Direction);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Right);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Forward);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Backward);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Forward_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Forward_Right);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Backward_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Direction_Backward_Right);


#pragma endregion


#pragma region Parkour_Climb_Style

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Climb_Style_None);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Climb_Style_Braced_Climb);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Climb_Style_FreeHang);

#pragma endregion


#pragma region Parkour_Wall_Run

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Wall_Run_Side_None);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Wall_Run_Side_Left);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Wall_Run_Side_Right);

#pragma endregion


#pragma region Parkour_Landing

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Landing_Down_Light);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Landing_Down_Impact);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Landing_Down_Front);

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Parkour_Landing_Down_Roll);


#pragma endregion


#pragma endregion


