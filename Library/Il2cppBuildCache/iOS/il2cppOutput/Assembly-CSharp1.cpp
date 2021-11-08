#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743;
// System.Collections.Generic.Dictionary`2<Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams>
struct Dictionary_2_tD05C5DECAC7B7C022F8BCFFC30A66A50C64189C2;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int64>>
struct Func_2_tCD6EC6795DB38C6D03C31274E0FF5A07948F0C8C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs>
struct List_1_t22D3D10F7EBB4A2C41F8A5DEF30C81BA26EB660F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController>
struct List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Int64>
struct TaskFactory_1_t9085A5B4B74FCDF0916A2182779E1AF17061F3BF;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger
struct AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F;
// Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria
struct AnchorLocateCriteria_t3788FB0C80EFC40BBDEE07407BD4B517D9A1D62A;
// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate
struct AnchorLocatedDelegate_t63F80C2ABA2971622D19629B36B15A39E02157BF;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript
struct AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor
struct CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession
struct CloudSpatialAnchorSession_t2439BFFD20A25281552D4CA34438271EAE72AAC7;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher
struct CloudSpatialAnchorWatcher_t64C96F5E1128208ACE41657C6B480622E8E0ED14;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase
struct DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate
struct LocateAnchorsCompletedDelegate_tED43F1F51EE49684CC6702034FA282ABD8468E9F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate
struct OnLogDebugDelegate_t0BC357FDC2C118751B436AACBD47CA02C5467E9D;
// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector
struct SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate
struct SessionErrorDelegate_t5845C9DBCAEFD9192CB394FD672E8D743E96E1EF;
// Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs
struct SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06;
// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329;
// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate
struct SessionUpdatedDelegate_t94467A4FBED6FF18BCC6F078549145A0C022F611;
// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager
struct SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner
struct ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Microsoft.Azure.SpatialAnchors.Unity.ARFoundation.UnityARFoundationAnchorComponent
struct UnityARFoundationAnchorComponent_t41395687A4CECB011B07F91319C3A44A673AB045;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo
struct XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c
struct U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t73BA75EA4BDEF160EFD775353BEDCF993636C19D;
// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t28BAE31EF3E5401B0BF17C47139480860D9A3D83;
// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6;
// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155;
// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityDispatcher_t7149A6870953BBC3017D311981B8478FB7E380F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral272298C555A55DB344383F15E2CC5414E2554E8F;
IL2CPP_EXTERN_C String_t* _stringLiteral27615B845F6E2B65B574ABF6B2D147F1CE7A1A53;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC6BE263333BF3C804BDBC3B7D234237A991D04;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1164CE08722FB8C6EEF375B61462D3D107CE6D;
IL2CPP_EXTERN_C String_t* _stringLiteral365439334A80ECFF830D5AC2817A973FAA812795;
IL2CPP_EXTERN_C String_t* _stringLiteral3E159244F7F58072D4E3CE9FCBE498AD4112187A;
IL2CPP_EXTERN_C String_t* _stringLiteral524067D5CA3C6345B2101F415A3489EEE3360B11;
IL2CPP_EXTERN_C String_t* _stringLiteral53C1D57DC44BD3FDBDE905511300952CB7C3260D;
IL2CPP_EXTERN_C String_t* _stringLiteral54B11C37F44999682BFFB7D441A533E5BFFBD219;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1C76F631EAD6B679D4A037FAD043B5B0B7FB32;
IL2CPP_EXTERN_C String_t* _stringLiteral7BBDCC66485B3AB9E12433A13B5BF8E90C304F0B;
IL2CPP_EXTERN_C String_t* _stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970;
IL2CPP_EXTERN_C String_t* _stringLiteral942BF559927F44C154B17447EC464655613A4B70;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5B38AFB8D573F768D552840A9142729293ACE5;
IL2CPP_EXTERN_C String_t* _stringLiteralBA5B4838089D19C21A5321528CF32839A8B4D8C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAB6EF21FD63A5FA41DDA76CD9FF277FD18513A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mC4D7CAFB4EB10AF2EF40FDD6A7B8C0AB6018059B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9_mA5C775BC9B522ED83699998930275E2CDCA697BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CReturnToLauncherU3Eb__19_0_m22E305F7F64AD0C8F2291D8A64B1EEFFBC67F6E9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger
struct AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F  : public RuntimeObject
{
public:
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::baseAddress
	String_t* ___baseAddress_0;
	// System.Collections.Generic.List`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::anchorkeys
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___anchorkeys_1;

public:
	inline static int32_t get_offset_of_baseAddress_0() { return static_cast<int32_t>(offsetof(AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F, ___baseAddress_0)); }
	inline String_t* get_baseAddress_0() const { return ___baseAddress_0; }
	inline String_t** get_address_of_baseAddress_0() { return &___baseAddress_0; }
	inline void set_baseAddress_0(String_t* value)
	{
		___baseAddress_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseAddress_0), (void*)value);
	}

	inline static int32_t get_offset_of_anchorkeys_1() { return static_cast<int32_t>(offsetof(AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F, ___anchorkeys_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_anchorkeys_1() const { return ___anchorkeys_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_anchorkeys_1() { return &___anchorkeys_1; }
	inline void set_anchorkeys_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___anchorkeys_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorkeys_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c
struct U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c::<>9
	U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * ___U3CU3E9_0;
	// System.Action Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c::<>9__19_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t73BA75EA4BDEF160EFD775353BEDCF993636C19D  : public RuntimeObject
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass36_0::<>4__this
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * ___U3CU3E4__this_0;
	// System.Exception Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass36_0::exception
	Exception_t * ___exception_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t73BA75EA4BDEF160EFD775353BEDCF993636C19D, ___U3CU3E4__this_0)); }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t73BA75EA4BDEF160EFD775353BEDCF993636C19D, ___exception_1)); }
	inline Exception_t * get_exception_1() const { return ___exception_1; }
	inline Exception_t ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(Exception_t * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_1), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t28BAE31EF3E5401B0BF17C47139480860D9A3D83  : public RuntimeObject
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass48_0::<>4__this
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * ___U3CU3E4__this_0;
	// Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass48_0::args
	SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06 * ___args_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t28BAE31EF3E5401B0BF17C47139480860D9A3D83, ___U3CU3E4__this_0)); }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass48_0_t28BAE31EF3E5401B0BF17C47139480860D9A3D83, ___args_1)); }
	inline SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06 * get_args_1() const { return ___args_1; }
	inline SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6  : public RuntimeObject
{
public:
	// System.Int32 MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>4__this
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E4__this_2)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>
struct TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77, ___m_task_0)); }
	inline Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.Azure.SpatialAnchors.Unity.AuthenticationMode
struct AuthenticationMode_t15681DBD9CC227423B06379232F43EF08E1D35F0 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.AuthenticationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationMode_t15681DBD9CC227423B06379232F43EF08E1D35F0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs
struct SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionLogLevel
struct SessionLogLevel_t26866212F4BF97628400768C53E03C6388CBD445 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.SessionLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionLogLevel_t26866212F4BF97628400768C53E03C6388CBD445, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.Azure.SpatialAnchors.SessionStatus::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState
struct AppState_tFF64D6DCAC66B850E510C8A9C1E1B8D6D4BEF0CD 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppState_tFF64D6DCAC66B850E510C8A9C1E1B8D6D4BEF0CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/DemoFlow
struct DemoFlow_t4D81FADC7E556A88387232F73AB30CABCE87382E 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/DemoFlow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DemoFlow_t4D81FADC7E556A88387232F73AB30CABCE87382E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
struct DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 
{
public:
	// UnityEngine.Color Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::<StepColor>k__BackingField
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CStepColorU3Ek__BackingField_0;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::<StepMessage>k__BackingField
	String_t* ___U3CStepMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStepColorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435, ___U3CStepColorU3Ek__BackingField_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CStepColorU3Ek__BackingField_0() const { return ___U3CStepColorU3Ek__BackingField_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CStepColorU3Ek__BackingField_0() { return &___U3CStepColorU3Ek__BackingField_0; }
	inline void set_U3CStepColorU3Ek__BackingField_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CStepColorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStepMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435, ___U3CStepMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CStepMessageU3Ek__BackingField_1() const { return ___U3CStepMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStepMessageU3Ek__BackingField_1() { return &___U3CStepMessageU3Ek__BackingField_1; }
	inline void set_U3CStepMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CStepMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStepMessageU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
struct DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_pinvoke
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CStepColorU3Ek__BackingField_0;
	char* ___U3CStepMessageU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
struct DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_com
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CStepColorU3Ek__BackingField_0;
	Il2CppChar* ___U3CStepMessageU3Ek__BackingField_1;
};

// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UpdateSensorState/Sensor
struct Sensor_t3CB613486B23B032B6DFCAC277FDAEC230A2CE0F 
{
public:
	// System.Int32 UpdateSensorState/Sensor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sensor_t3CB613486B23B032B6DFCAC277FDAEC230A2CE0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Int64>
struct Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int64_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675, ___m_result_40)); }
	inline int64_t get_m_result_40() const { return ___m_result_40; }
	inline int64_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int64_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9085A5B4B74FCDF0916A2182779E1AF17061F3BF * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tCD6EC6795DB38C6D03C31274E0FF5A07948F0C8C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9085A5B4B74FCDF0916A2182779E1AF17061F3BF * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9085A5B4B74FCDF0916A2182779E1AF17061F3BF ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9085A5B4B74FCDF0916A2182779E1AF17061F3BF * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tCD6EC6795DB38C6D03C31274E0FF5A07948F0C8C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tCD6EC6795DB38C6D03C31274E0FF5A07948F0C8C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tCD6EC6795DB38C6D03C31274E0FF5A07948F0C8C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26
struct U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::<>4__this
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047, ___U3CU3E4__this_2)); }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28
struct U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::<>4__this
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752, ___U3CU3E4__this_2)); }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16
struct U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::<>4__this
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67, ___U3CU3E4__this_2)); }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18
struct U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::<>4__this
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7, ___U3CU3E4__this_2)); }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19
struct U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::<>4__this
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B, ___U3CU3E4__this_2)); }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6
struct U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::<>4__this
	SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC, ___U3CU3E4__this_2)); }
	inline SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25
struct U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::<>4__this
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216, ___U3CU3E4__this_2)); }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27
struct U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::<>4__this
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::<>u__1
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114, ___U3CU3E4__this_2)); }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22
struct U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>4__this
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64> Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::<>u__2
	TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D, ___U3CU3E4__this_2)); }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  value)
	{
		___U3CU3Eu__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41
struct U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 
{
public:
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::<>4__this
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * ___U3CU3E4__this_2;
	// Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::<cna>5__2
	CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * ___U3CcnaU3E5__2_3;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::<cloudAnchor>5__3
	CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * ___U3CcloudAnchorU3E5__3_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231, ___U3CU3E4__this_2)); }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcnaU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231, ___U3CcnaU3E5__2_3)); }
	inline CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * get_U3CcnaU3E5__2_3() const { return ___U3CcnaU3E5__2_3; }
	inline CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 ** get_address_of_U3CcnaU3E5__2_3() { return &___U3CcnaU3E5__2_3; }
	inline void set_U3CcnaU3E5__2_3(CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * value)
	{
		___U3CcnaU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcnaU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcloudAnchorU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231, ___U3CcloudAnchorU3E5__3_4)); }
	inline CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * get_U3CcloudAnchorU3E5__3_4() const { return ___U3CcloudAnchorU3E5__3_4; }
	inline CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 ** get_address_of_U3CcloudAnchorU3E5__3_4() { return &___U3CcloudAnchorU3E5__3_4; }
	inline void set_U3CcloudAnchorU3E5__3_4(CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * value)
	{
		___U3CcloudAnchorU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcloudAnchorU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate
struct ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856  : public MulticastDelegate_t
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate
struct PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155  : public MulticastDelegate_t
{
public:

public:
};


// MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate
struct PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor
struct CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor::cloudAnchor
	CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * ___cloudAnchor_4;
	// Microsoft.Azure.SpatialAnchors.Unity.ARFoundation.UnityARFoundationAnchorComponent Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor::nativeAnchor
	UnityARFoundationAnchorComponent_t41395687A4CECB011B07F91319C3A44A673AB045 * ___nativeAnchor_5;

public:
	inline static int32_t get_offset_of_cloudAnchor_4() { return static_cast<int32_t>(offsetof(CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9, ___cloudAnchor_4)); }
	inline CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * get_cloudAnchor_4() const { return ___cloudAnchor_4; }
	inline CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 ** get_address_of_cloudAnchor_4() { return &___cloudAnchor_4; }
	inline void set_cloudAnchor_4(CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * value)
	{
		___cloudAnchor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudAnchor_4), (void*)value);
	}

	inline static int32_t get_offset_of_nativeAnchor_5() { return static_cast<int32_t>(offsetof(CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9, ___nativeAnchor_5)); }
	inline UnityARFoundationAnchorComponent_t41395687A4CECB011B07F91319C3A44A673AB045 * get_nativeAnchor_5() const { return ___nativeAnchor_5; }
	inline UnityARFoundationAnchorComponent_t41395687A4CECB011B07F91319C3A44A673AB045 ** get_address_of_nativeAnchor_5() { return &___nativeAnchor_5; }
	inline void set_nativeAnchor_5(UnityARFoundationAnchorComponent_t41395687A4CECB011B07F91319C3A44A673AB045 * value)
	{
		___nativeAnchor_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeAnchor_5), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.InputInteractionBase
struct InputInteractionBase_t280C7A4FD89FF9EB4DCEAC53F962D9242CDFBAA8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARRaycastManager Microsoft.Azure.SpatialAnchors.Unity.Examples.InputInteractionBase::arRaycastManager
	ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * ___arRaycastManager_4;

public:
	inline static int32_t get_offset_of_arRaycastManager_4() { return static_cast<int32_t>(offsetof(InputInteractionBase_t280C7A4FD89FF9EB4DCEAC53F962D9242CDFBAA8, ___arRaycastManager_4)); }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * get_arRaycastManager_4() const { return ___arRaycastManager_4; }
	inline ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F ** get_address_of_arRaycastManager_4() { return &___arRaycastManager_4; }
	inline void set_arRaycastManager_4(ARRaycastManager_t76CDCF27810673048562A85CAD0E3FEEB3D7328F * value)
	{
		___arRaycastManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arRaycastManager_4), (void*)value);
	}
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::locationToPlace
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___locationToPlace_4;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPunEnabled
	bool ___isPunEnabled_7;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::shouldCheckPlacement
	bool ___shouldCheckPlacement_8;
	// UnityEngine.AudioSource MRTK.Tutorials.GettingStarted.PartAssemblyController::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_9;
	// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner MRTK.Tutorials.GettingStarted.PartAssemblyController::toolTipSpawner
	ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * ___toolTipSpawner_10;
	// System.Collections.Generic.List`1<UnityEngine.Collider> MRTK.Tutorials.GettingStarted.PartAssemblyController::colliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___colliders_11;
	// System.Collections.Generic.List`1<MRTK.Tutorials.GettingStarted.PartAssemblyController> MRTK.Tutorials.GettingStarted.PartAssemblyController::partAssemblyControllers
	List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * ___partAssemblyControllers_12;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController::originalParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___originalParent_13;
	// UnityEngine.Vector3 MRTK.Tutorials.GettingStarted.PartAssemblyController::originalPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originalPosition_14;
	// UnityEngine.Quaternion MRTK.Tutorials.GettingStarted.PartAssemblyController::originalRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___originalRotation_15;
	// System.Collections.IEnumerator MRTK.Tutorials.GettingStarted.PartAssemblyController::checkPlacementCoroutine
	RuntimeObject* ___checkPlacementCoroutine_16;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasAudioSource
	bool ___hasAudioSource_17;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::hasToolTip
	bool ___hasToolTip_18;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isPlaced
	bool ___isPlaced_19;
	// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController::isResetting
	bool ___isResetting_20;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnResetPlacement
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___OnResetPlacement_21;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate MRTK.Tutorials.GettingStarted.PartAssemblyController::OnSetPlacement
	PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * ___OnSetPlacement_22;

public:
	inline static int32_t get_offset_of_locationToPlace_4() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___locationToPlace_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_locationToPlace_4() const { return ___locationToPlace_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_locationToPlace_4() { return &___locationToPlace_4; }
	inline void set_locationToPlace_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___locationToPlace_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locationToPlace_4), (void*)value);
	}

	inline static int32_t get_offset_of_isPunEnabled_7() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isPunEnabled_7)); }
	inline bool get_isPunEnabled_7() const { return ___isPunEnabled_7; }
	inline bool* get_address_of_isPunEnabled_7() { return &___isPunEnabled_7; }
	inline void set_isPunEnabled_7(bool value)
	{
		___isPunEnabled_7 = value;
	}

	inline static int32_t get_offset_of_shouldCheckPlacement_8() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___shouldCheckPlacement_8)); }
	inline bool get_shouldCheckPlacement_8() const { return ___shouldCheckPlacement_8; }
	inline bool* get_address_of_shouldCheckPlacement_8() { return &___shouldCheckPlacement_8; }
	inline void set_shouldCheckPlacement_8(bool value)
	{
		___shouldCheckPlacement_8 = value;
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___audioSource_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_toolTipSpawner_10() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___toolTipSpawner_10)); }
	inline ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * get_toolTipSpawner_10() const { return ___toolTipSpawner_10; }
	inline ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC ** get_address_of_toolTipSpawner_10() { return &___toolTipSpawner_10; }
	inline void set_toolTipSpawner_10(ToolTipSpawner_t160110D29BD0AE79D25EA907BD2CFA66FE991FFC * value)
	{
		___toolTipSpawner_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolTipSpawner_10), (void*)value);
	}

	inline static int32_t get_offset_of_colliders_11() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___colliders_11)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_colliders_11() const { return ___colliders_11; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_colliders_11() { return &___colliders_11; }
	inline void set_colliders_11(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___colliders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colliders_11), (void*)value);
	}

	inline static int32_t get_offset_of_partAssemblyControllers_12() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___partAssemblyControllers_12)); }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * get_partAssemblyControllers_12() const { return ___partAssemblyControllers_12; }
	inline List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 ** get_address_of_partAssemblyControllers_12() { return &___partAssemblyControllers_12; }
	inline void set_partAssemblyControllers_12(List_1_tF87BF15BE18BF48C00FEBF39CE17C053CB9AC027 * value)
	{
		___partAssemblyControllers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___partAssemblyControllers_12), (void*)value);
	}

	inline static int32_t get_offset_of_originalParent_13() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalParent_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_originalParent_13() const { return ___originalParent_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_originalParent_13() { return &___originalParent_13; }
	inline void set_originalParent_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___originalParent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalParent_13), (void*)value);
	}

	inline static int32_t get_offset_of_originalPosition_14() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originalPosition_14() const { return ___originalPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originalPosition_14() { return &___originalPosition_14; }
	inline void set_originalPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originalPosition_14 = value;
	}

	inline static int32_t get_offset_of_originalRotation_15() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___originalRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_originalRotation_15() const { return ___originalRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_originalRotation_15() { return &___originalRotation_15; }
	inline void set_originalRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___originalRotation_15 = value;
	}

	inline static int32_t get_offset_of_checkPlacementCoroutine_16() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___checkPlacementCoroutine_16)); }
	inline RuntimeObject* get_checkPlacementCoroutine_16() const { return ___checkPlacementCoroutine_16; }
	inline RuntimeObject** get_address_of_checkPlacementCoroutine_16() { return &___checkPlacementCoroutine_16; }
	inline void set_checkPlacementCoroutine_16(RuntimeObject* value)
	{
		___checkPlacementCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkPlacementCoroutine_16), (void*)value);
	}

	inline static int32_t get_offset_of_hasAudioSource_17() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___hasAudioSource_17)); }
	inline bool get_hasAudioSource_17() const { return ___hasAudioSource_17; }
	inline bool* get_address_of_hasAudioSource_17() { return &___hasAudioSource_17; }
	inline void set_hasAudioSource_17(bool value)
	{
		___hasAudioSource_17 = value;
	}

	inline static int32_t get_offset_of_hasToolTip_18() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___hasToolTip_18)); }
	inline bool get_hasToolTip_18() const { return ___hasToolTip_18; }
	inline bool* get_address_of_hasToolTip_18() { return &___hasToolTip_18; }
	inline void set_hasToolTip_18(bool value)
	{
		___hasToolTip_18 = value;
	}

	inline static int32_t get_offset_of_isPlaced_19() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isPlaced_19)); }
	inline bool get_isPlaced_19() const { return ___isPlaced_19; }
	inline bool* get_address_of_isPlaced_19() { return &___isPlaced_19; }
	inline void set_isPlaced_19(bool value)
	{
		___isPlaced_19 = value;
	}

	inline static int32_t get_offset_of_isResetting_20() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___isResetting_20)); }
	inline bool get_isResetting_20() const { return ___isResetting_20; }
	inline bool* get_address_of_isResetting_20() { return &___isResetting_20; }
	inline void set_isResetting_20(bool value)
	{
		___isResetting_20 = value;
	}

	inline static int32_t get_offset_of_OnResetPlacement_21() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___OnResetPlacement_21)); }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * get_OnResetPlacement_21() const { return ___OnResetPlacement_21; }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** get_address_of_OnResetPlacement_21() { return &___OnResetPlacement_21; }
	inline void set_OnResetPlacement_21(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * value)
	{
		___OnResetPlacement_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnResetPlacement_21), (void*)value);
	}

	inline static int32_t get_offset_of_OnSetPlacement_22() { return static_cast<int32_t>(offsetof(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573, ___OnSetPlacement_22)); }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * get_OnSetPlacement_22() const { return ___OnSetPlacement_22; }
	inline PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 ** get_address_of_OnSetPlacement_22() { return &___OnSetPlacement_22; }
	inline void set_OnSetPlacement_22(PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * value)
	{
		___OnSetPlacement_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSetPlacement_22), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector
struct SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector::SelectedSceneNameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___SelectedSceneNameText_4;
	// System.Collections.Generic.List`1<System.Int32> Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector::SceneBuildIndices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___SceneBuildIndices_5;
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector::_SceneIndex
	int32_t ____SceneIndex_6;

public:
	inline static int32_t get_offset_of_SelectedSceneNameText_4() { return static_cast<int32_t>(offsetof(SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B, ___SelectedSceneNameText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_SelectedSceneNameText_4() const { return ___SelectedSceneNameText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_SelectedSceneNameText_4() { return &___SelectedSceneNameText_4; }
	inline void set_SelectedSceneNameText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___SelectedSceneNameText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedSceneNameText_4), (void*)value);
	}

	inline static int32_t get_offset_of_SceneBuildIndices_5() { return static_cast<int32_t>(offsetof(SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B, ___SceneBuildIndices_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_SceneBuildIndices_5() const { return ___SceneBuildIndices_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_SceneBuildIndices_5() { return &___SceneBuildIndices_5; }
	inline void set_SceneBuildIndices_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___SceneBuildIndices_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneBuildIndices_5), (void*)value);
	}

	inline static int32_t get_offset_of__SceneIndex_6() { return static_cast<int32_t>(offsetof(SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B, ____SceneIndex_6)); }
	inline int32_t get__SceneIndex_6() const { return ____SceneIndex_6; }
	inline int32_t* get_address_of__SceneIndex_6() { return &____SceneIndex_6; }
	inline void set__SceneIndex_6(int32_t value)
	{
		____SceneIndex_6 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager
struct SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::isSessionStarted
	bool ___isSessionStarted_4;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::session
	CloudSpatialAnchorSession_t2439BFFD20A25281552D4CA34438271EAE72AAC7 * ___session_5;
	// Microsoft.Azure.SpatialAnchors.SessionStatus Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::sessionStatus
	SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * ___sessionStatus_6;
	// System.Int64 Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::lastFrameProcessedTimeStamp
	int64_t ___lastFrameProcessedTimeStamp_7;
	// System.Collections.Generic.List`1<Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs> Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::pendingEventArgs
	List_1_t22D3D10F7EBB4A2C41F8A5DEF30C81BA26EB660F * ___pendingEventArgs_9;
	// UnityEngine.XR.ARFoundation.ARCameraManager Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arCameraManager
	ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * ___arCameraManager_11;
	// UnityEngine.XR.ARFoundation.ARSession Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arSession
	ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * ___arSession_12;
	// UnityEngine.Camera Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_13;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::ARSessionInitialized
	bool ___ARSessionInitialized_14;
	// Microsoft.Azure.SpatialAnchors.Unity.AuthenticationMode Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::authenticationMode
	int32_t ___authenticationMode_15;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::spatialAnchorsAccountId
	String_t* ___spatialAnchorsAccountId_16;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::spatialAnchorsAccountKey
	String_t* ___spatialAnchorsAccountKey_17;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::spatialAnchorsAccountDomain
	String_t* ___spatialAnchorsAccountDomain_18;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::clientId
	String_t* ___clientId_19;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::tenantId
	String_t* ___tenantId_20;
	// Microsoft.Azure.SpatialAnchors.SessionLogLevel Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::logLevel
	int32_t ___logLevel_21;
	// Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::AnchorLocated
	AnchorLocatedDelegate_t63F80C2ABA2971622D19629B36B15A39E02157BF * ___AnchorLocated_22;
	// Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::LocateAnchorsCompleted
	LocateAnchorsCompletedDelegate_tED43F1F51EE49684CC6702034FA282ABD8468E9F * ___LocateAnchorsCompleted_23;
	// Microsoft.Azure.SpatialAnchors.SessionErrorDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::Error
	SessionErrorDelegate_t5845C9DBCAEFD9192CB394FD672E8D743E96E1EF * ___Error_24;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionChanged
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___SessionChanged_25;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionCreated
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___SessionCreated_26;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionDestroyed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___SessionDestroyed_27;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionStarted
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___SessionStarted_28;
	// System.EventHandler Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionStopped
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___SessionStopped_29;
	// Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::SessionUpdated
	SessionUpdatedDelegate_t94467A4FBED6FF18BCC6F078549145A0C022F611 * ___SessionUpdated_30;
	// Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::LogDebug
	OnLogDebugDelegate_t0BC357FDC2C118751B436AACBD47CA02C5467E9D * ___LogDebug_31;

public:
	inline static int32_t get_offset_of_isSessionStarted_4() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___isSessionStarted_4)); }
	inline bool get_isSessionStarted_4() const { return ___isSessionStarted_4; }
	inline bool* get_address_of_isSessionStarted_4() { return &___isSessionStarted_4; }
	inline void set_isSessionStarted_4(bool value)
	{
		___isSessionStarted_4 = value;
	}

	inline static int32_t get_offset_of_session_5() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___session_5)); }
	inline CloudSpatialAnchorSession_t2439BFFD20A25281552D4CA34438271EAE72AAC7 * get_session_5() const { return ___session_5; }
	inline CloudSpatialAnchorSession_t2439BFFD20A25281552D4CA34438271EAE72AAC7 ** get_address_of_session_5() { return &___session_5; }
	inline void set_session_5(CloudSpatialAnchorSession_t2439BFFD20A25281552D4CA34438271EAE72AAC7 * value)
	{
		___session_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___session_5), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStatus_6() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___sessionStatus_6)); }
	inline SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * get_sessionStatus_6() const { return ___sessionStatus_6; }
	inline SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 ** get_address_of_sessionStatus_6() { return &___sessionStatus_6; }
	inline void set_sessionStatus_6(SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * value)
	{
		___sessionStatus_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStatus_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastFrameProcessedTimeStamp_7() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___lastFrameProcessedTimeStamp_7)); }
	inline int64_t get_lastFrameProcessedTimeStamp_7() const { return ___lastFrameProcessedTimeStamp_7; }
	inline int64_t* get_address_of_lastFrameProcessedTimeStamp_7() { return &___lastFrameProcessedTimeStamp_7; }
	inline void set_lastFrameProcessedTimeStamp_7(int64_t value)
	{
		___lastFrameProcessedTimeStamp_7 = value;
	}

	inline static int32_t get_offset_of_pendingEventArgs_9() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___pendingEventArgs_9)); }
	inline List_1_t22D3D10F7EBB4A2C41F8A5DEF30C81BA26EB660F * get_pendingEventArgs_9() const { return ___pendingEventArgs_9; }
	inline List_1_t22D3D10F7EBB4A2C41F8A5DEF30C81BA26EB660F ** get_address_of_pendingEventArgs_9() { return &___pendingEventArgs_9; }
	inline void set_pendingEventArgs_9(List_1_t22D3D10F7EBB4A2C41F8A5DEF30C81BA26EB660F * value)
	{
		___pendingEventArgs_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingEventArgs_9), (void*)value);
	}

	inline static int32_t get_offset_of_arCameraManager_11() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___arCameraManager_11)); }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * get_arCameraManager_11() const { return ___arCameraManager_11; }
	inline ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 ** get_address_of_arCameraManager_11() { return &___arCameraManager_11; }
	inline void set_arCameraManager_11(ARCameraManager_tD802D88B523419FD1AC898539EE734DA20903874 * value)
	{
		___arCameraManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arCameraManager_11), (void*)value);
	}

	inline static int32_t get_offset_of_arSession_12() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___arSession_12)); }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * get_arSession_12() const { return ___arSession_12; }
	inline ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B ** get_address_of_arSession_12() { return &___arSession_12; }
	inline void set_arSession_12(ARSession_t0ECAFEF41CF9183D33E40174F849B07943DC5D3B * value)
	{
		___arSession_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arSession_12), (void*)value);
	}

	inline static int32_t get_offset_of_mainCamera_13() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___mainCamera_13)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_13() const { return ___mainCamera_13; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_13() { return &___mainCamera_13; }
	inline void set_mainCamera_13(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_13), (void*)value);
	}

	inline static int32_t get_offset_of_ARSessionInitialized_14() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___ARSessionInitialized_14)); }
	inline bool get_ARSessionInitialized_14() const { return ___ARSessionInitialized_14; }
	inline bool* get_address_of_ARSessionInitialized_14() { return &___ARSessionInitialized_14; }
	inline void set_ARSessionInitialized_14(bool value)
	{
		___ARSessionInitialized_14 = value;
	}

	inline static int32_t get_offset_of_authenticationMode_15() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___authenticationMode_15)); }
	inline int32_t get_authenticationMode_15() const { return ___authenticationMode_15; }
	inline int32_t* get_address_of_authenticationMode_15() { return &___authenticationMode_15; }
	inline void set_authenticationMode_15(int32_t value)
	{
		___authenticationMode_15 = value;
	}

	inline static int32_t get_offset_of_spatialAnchorsAccountId_16() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___spatialAnchorsAccountId_16)); }
	inline String_t* get_spatialAnchorsAccountId_16() const { return ___spatialAnchorsAccountId_16; }
	inline String_t** get_address_of_spatialAnchorsAccountId_16() { return &___spatialAnchorsAccountId_16; }
	inline void set_spatialAnchorsAccountId_16(String_t* value)
	{
		___spatialAnchorsAccountId_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAnchorsAccountId_16), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAnchorsAccountKey_17() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___spatialAnchorsAccountKey_17)); }
	inline String_t* get_spatialAnchorsAccountKey_17() const { return ___spatialAnchorsAccountKey_17; }
	inline String_t** get_address_of_spatialAnchorsAccountKey_17() { return &___spatialAnchorsAccountKey_17; }
	inline void set_spatialAnchorsAccountKey_17(String_t* value)
	{
		___spatialAnchorsAccountKey_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAnchorsAccountKey_17), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAnchorsAccountDomain_18() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___spatialAnchorsAccountDomain_18)); }
	inline String_t* get_spatialAnchorsAccountDomain_18() const { return ___spatialAnchorsAccountDomain_18; }
	inline String_t** get_address_of_spatialAnchorsAccountDomain_18() { return &___spatialAnchorsAccountDomain_18; }
	inline void set_spatialAnchorsAccountDomain_18(String_t* value)
	{
		___spatialAnchorsAccountDomain_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAnchorsAccountDomain_18), (void*)value);
	}

	inline static int32_t get_offset_of_clientId_19() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___clientId_19)); }
	inline String_t* get_clientId_19() const { return ___clientId_19; }
	inline String_t** get_address_of_clientId_19() { return &___clientId_19; }
	inline void set_clientId_19(String_t* value)
	{
		___clientId_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientId_19), (void*)value);
	}

	inline static int32_t get_offset_of_tenantId_20() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___tenantId_20)); }
	inline String_t* get_tenantId_20() const { return ___tenantId_20; }
	inline String_t** get_address_of_tenantId_20() { return &___tenantId_20; }
	inline void set_tenantId_20(String_t* value)
	{
		___tenantId_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tenantId_20), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_21() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___logLevel_21)); }
	inline int32_t get_logLevel_21() const { return ___logLevel_21; }
	inline int32_t* get_address_of_logLevel_21() { return &___logLevel_21; }
	inline void set_logLevel_21(int32_t value)
	{
		___logLevel_21 = value;
	}

	inline static int32_t get_offset_of_AnchorLocated_22() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___AnchorLocated_22)); }
	inline AnchorLocatedDelegate_t63F80C2ABA2971622D19629B36B15A39E02157BF * get_AnchorLocated_22() const { return ___AnchorLocated_22; }
	inline AnchorLocatedDelegate_t63F80C2ABA2971622D19629B36B15A39E02157BF ** get_address_of_AnchorLocated_22() { return &___AnchorLocated_22; }
	inline void set_AnchorLocated_22(AnchorLocatedDelegate_t63F80C2ABA2971622D19629B36B15A39E02157BF * value)
	{
		___AnchorLocated_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnchorLocated_22), (void*)value);
	}

	inline static int32_t get_offset_of_LocateAnchorsCompleted_23() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___LocateAnchorsCompleted_23)); }
	inline LocateAnchorsCompletedDelegate_tED43F1F51EE49684CC6702034FA282ABD8468E9F * get_LocateAnchorsCompleted_23() const { return ___LocateAnchorsCompleted_23; }
	inline LocateAnchorsCompletedDelegate_tED43F1F51EE49684CC6702034FA282ABD8468E9F ** get_address_of_LocateAnchorsCompleted_23() { return &___LocateAnchorsCompleted_23; }
	inline void set_LocateAnchorsCompleted_23(LocateAnchorsCompletedDelegate_tED43F1F51EE49684CC6702034FA282ABD8468E9F * value)
	{
		___LocateAnchorsCompleted_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocateAnchorsCompleted_23), (void*)value);
	}

	inline static int32_t get_offset_of_Error_24() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___Error_24)); }
	inline SessionErrorDelegate_t5845C9DBCAEFD9192CB394FD672E8D743E96E1EF * get_Error_24() const { return ___Error_24; }
	inline SessionErrorDelegate_t5845C9DBCAEFD9192CB394FD672E8D743E96E1EF ** get_address_of_Error_24() { return &___Error_24; }
	inline void set_Error_24(SessionErrorDelegate_t5845C9DBCAEFD9192CB394FD672E8D743E96E1EF * value)
	{
		___Error_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_24), (void*)value);
	}

	inline static int32_t get_offset_of_SessionChanged_25() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___SessionChanged_25)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_SessionChanged_25() const { return ___SessionChanged_25; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_SessionChanged_25() { return &___SessionChanged_25; }
	inline void set_SessionChanged_25(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___SessionChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_SessionCreated_26() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___SessionCreated_26)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_SessionCreated_26() const { return ___SessionCreated_26; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_SessionCreated_26() { return &___SessionCreated_26; }
	inline void set_SessionCreated_26(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___SessionCreated_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionCreated_26), (void*)value);
	}

	inline static int32_t get_offset_of_SessionDestroyed_27() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___SessionDestroyed_27)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_SessionDestroyed_27() const { return ___SessionDestroyed_27; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_SessionDestroyed_27() { return &___SessionDestroyed_27; }
	inline void set_SessionDestroyed_27(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___SessionDestroyed_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionDestroyed_27), (void*)value);
	}

	inline static int32_t get_offset_of_SessionStarted_28() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___SessionStarted_28)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_SessionStarted_28() const { return ___SessionStarted_28; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_SessionStarted_28() { return &___SessionStarted_28; }
	inline void set_SessionStarted_28(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___SessionStarted_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionStarted_28), (void*)value);
	}

	inline static int32_t get_offset_of_SessionStopped_29() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___SessionStopped_29)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_SessionStopped_29() const { return ___SessionStopped_29; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_SessionStopped_29() { return &___SessionStopped_29; }
	inline void set_SessionStopped_29(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___SessionStopped_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionStopped_29), (void*)value);
	}

	inline static int32_t get_offset_of_SessionUpdated_30() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___SessionUpdated_30)); }
	inline SessionUpdatedDelegate_t94467A4FBED6FF18BCC6F078549145A0C022F611 * get_SessionUpdated_30() const { return ___SessionUpdated_30; }
	inline SessionUpdatedDelegate_t94467A4FBED6FF18BCC6F078549145A0C022F611 ** get_address_of_SessionUpdated_30() { return &___SessionUpdated_30; }
	inline void set_SessionUpdated_30(SessionUpdatedDelegate_t94467A4FBED6FF18BCC6F078549145A0C022F611 * value)
	{
		___SessionUpdated_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SessionUpdated_30), (void*)value);
	}

	inline static int32_t get_offset_of_LogDebug_31() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0, ___LogDebug_31)); }
	inline OnLogDebugDelegate_t0BC357FDC2C118751B436AACBD47CA02C5467E9D * get_LogDebug_31() const { return ___LogDebug_31; }
	inline OnLogDebugDelegate_t0BC357FDC2C118751B436AACBD47CA02C5467E9D ** get_address_of_LogDebug_31() { return &___LogDebug_31; }
	inline void set_LogDebug_31(OnLogDebugDelegate_t0BC357FDC2C118751B436AACBD47CA02C5467E9D * value)
	{
		___LogDebug_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LogDebug_31), (void*)value);
	}
};

struct SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.ARFoundation.ARAnchor> Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::pointerToAnchors
	Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * ___pointerToAnchors_8;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::arAnchorManager
	ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * ___arAnchorManager_10;

public:
	inline static int32_t get_offset_of_pointerToAnchors_8() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0_StaticFields, ___pointerToAnchors_8)); }
	inline Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * get_pointerToAnchors_8() const { return ___pointerToAnchors_8; }
	inline Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 ** get_address_of_pointerToAnchors_8() { return &___pointerToAnchors_8; }
	inline void set_pointerToAnchors_8(Dictionary_2_t566E87F07FCE06B851C52DF5F689DBDCA9EFA743 * value)
	{
		___pointerToAnchors_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerToAnchors_8), (void*)value);
	}

	inline static int32_t get_offset_of_arAnchorManager_10() { return static_cast<int32_t>(offsetof(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0_StaticFields, ___arAnchorManager_10)); }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * get_arAnchorManager_10() const { return ___arAnchorManager_10; }
	inline ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F ** get_address_of_arAnchorManager_10() { return &___arAnchorManager_10; }
	inline void set_arAnchorManager_10(ARAnchorManager_t969330AB785F0DC41EF9F4390D77F7ABA30F7D0F * value)
	{
		___arAnchorManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arAnchorManager_10), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker
struct XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker::HoloLensUXTree
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HoloLensUXTree_5;
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker::MobileAndEditorUXTree
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MobileAndEditorUXTree_6;

public:
	inline static int32_t get_offset_of_HoloLensUXTree_5() { return static_cast<int32_t>(offsetof(XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7, ___HoloLensUXTree_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HoloLensUXTree_5() const { return ___HoloLensUXTree_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HoloLensUXTree_5() { return &___HoloLensUXTree_5; }
	inline void set_HoloLensUXTree_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HoloLensUXTree_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoloLensUXTree_5), (void*)value);
	}

	inline static int32_t get_offset_of_MobileAndEditorUXTree_6() { return static_cast<int32_t>(offsetof(XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7, ___MobileAndEditorUXTree_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MobileAndEditorUXTree_6() const { return ___MobileAndEditorUXTree_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MobileAndEditorUXTree_6() { return &___MobileAndEditorUXTree_6; }
	inline void set_MobileAndEditorUXTree_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MobileAndEditorUXTree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MobileAndEditorUXTree_6), (void*)value);
	}
};

struct XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPicker::_Instance
	XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7 * ____Instance_4;

public:
	inline static int32_t get_offset_of__Instance_4() { return static_cast<int32_t>(offsetof(XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7_StaticFields, ____Instance_4)); }
	inline XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7 * get__Instance_4() const { return ____Instance_4; }
	inline XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7 ** get_address_of__Instance_4() { return &____Instance_4; }
	inline void set__Instance_4(XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7 * value)
	{
		____Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Instance_4), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase
struct DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9  : public InputInteractionBase_t280C7A4FD89FF9EB4DCEAC53F962D9242CDFBAA8
{
public:
	// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::advanceDemoTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___advanceDemoTask_5;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::isErrorActive
	bool ___isErrorActive_6;
	// UnityEngine.UI.Text Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::feedbackBox
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___feedbackBox_7;
	// System.Collections.Generic.List`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::anchorIdsToLocate
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___anchorIdsToLocate_8;
	// Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::anchorLocateCriteria
	AnchorLocateCriteria_t3788FB0C80EFC40BBDEE07407BD4B517D9A1D62A * ___anchorLocateCriteria_9;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::currentCloudAnchor
	CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * ___currentCloudAnchor_10;
	// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::currentWatcher
	CloudSpatialAnchorWatcher_t64C96F5E1128208ACE41657C6B480622E8E0ED14 * ___currentWatcher_11;
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::spawnedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnedObject_12;
	// UnityEngine.Material Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::spawnedObjectMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___spawnedObjectMat_13;
	// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::enableAdvancingOnSelect
	bool ___enableAdvancingOnSelect_14;
	// UnityEngine.GameObject Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::anchoredObjectPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___anchoredObjectPrefab_15;
	// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::cloudManager
	SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * ___cloudManager_16;

public:
	inline static int32_t get_offset_of_advanceDemoTask_5() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___advanceDemoTask_5)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_advanceDemoTask_5() const { return ___advanceDemoTask_5; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_advanceDemoTask_5() { return &___advanceDemoTask_5; }
	inline void set_advanceDemoTask_5(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___advanceDemoTask_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___advanceDemoTask_5), (void*)value);
	}

	inline static int32_t get_offset_of_isErrorActive_6() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___isErrorActive_6)); }
	inline bool get_isErrorActive_6() const { return ___isErrorActive_6; }
	inline bool* get_address_of_isErrorActive_6() { return &___isErrorActive_6; }
	inline void set_isErrorActive_6(bool value)
	{
		___isErrorActive_6 = value;
	}

	inline static int32_t get_offset_of_feedbackBox_7() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___feedbackBox_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_feedbackBox_7() const { return ___feedbackBox_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_feedbackBox_7() { return &___feedbackBox_7; }
	inline void set_feedbackBox_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___feedbackBox_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedbackBox_7), (void*)value);
	}

	inline static int32_t get_offset_of_anchorIdsToLocate_8() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___anchorIdsToLocate_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_anchorIdsToLocate_8() const { return ___anchorIdsToLocate_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_anchorIdsToLocate_8() { return &___anchorIdsToLocate_8; }
	inline void set_anchorIdsToLocate_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___anchorIdsToLocate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorIdsToLocate_8), (void*)value);
	}

	inline static int32_t get_offset_of_anchorLocateCriteria_9() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___anchorLocateCriteria_9)); }
	inline AnchorLocateCriteria_t3788FB0C80EFC40BBDEE07407BD4B517D9A1D62A * get_anchorLocateCriteria_9() const { return ___anchorLocateCriteria_9; }
	inline AnchorLocateCriteria_t3788FB0C80EFC40BBDEE07407BD4B517D9A1D62A ** get_address_of_anchorLocateCriteria_9() { return &___anchorLocateCriteria_9; }
	inline void set_anchorLocateCriteria_9(AnchorLocateCriteria_t3788FB0C80EFC40BBDEE07407BD4B517D9A1D62A * value)
	{
		___anchorLocateCriteria_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorLocateCriteria_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentCloudAnchor_10() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___currentCloudAnchor_10)); }
	inline CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * get_currentCloudAnchor_10() const { return ___currentCloudAnchor_10; }
	inline CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 ** get_address_of_currentCloudAnchor_10() { return &___currentCloudAnchor_10; }
	inline void set_currentCloudAnchor_10(CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * value)
	{
		___currentCloudAnchor_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentCloudAnchor_10), (void*)value);
	}

	inline static int32_t get_offset_of_currentWatcher_11() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___currentWatcher_11)); }
	inline CloudSpatialAnchorWatcher_t64C96F5E1128208ACE41657C6B480622E8E0ED14 * get_currentWatcher_11() const { return ___currentWatcher_11; }
	inline CloudSpatialAnchorWatcher_t64C96F5E1128208ACE41657C6B480622E8E0ED14 ** get_address_of_currentWatcher_11() { return &___currentWatcher_11; }
	inline void set_currentWatcher_11(CloudSpatialAnchorWatcher_t64C96F5E1128208ACE41657C6B480622E8E0ED14 * value)
	{
		___currentWatcher_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentWatcher_11), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedObject_12() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___spawnedObject_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnedObject_12() const { return ___spawnedObject_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnedObject_12() { return &___spawnedObject_12; }
	inline void set_spawnedObject_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnedObject_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedObject_12), (void*)value);
	}

	inline static int32_t get_offset_of_spawnedObjectMat_13() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___spawnedObjectMat_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_spawnedObjectMat_13() const { return ___spawnedObjectMat_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_spawnedObjectMat_13() { return &___spawnedObjectMat_13; }
	inline void set_spawnedObjectMat_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___spawnedObjectMat_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnedObjectMat_13), (void*)value);
	}

	inline static int32_t get_offset_of_enableAdvancingOnSelect_14() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___enableAdvancingOnSelect_14)); }
	inline bool get_enableAdvancingOnSelect_14() const { return ___enableAdvancingOnSelect_14; }
	inline bool* get_address_of_enableAdvancingOnSelect_14() { return &___enableAdvancingOnSelect_14; }
	inline void set_enableAdvancingOnSelect_14(bool value)
	{
		___enableAdvancingOnSelect_14 = value;
	}

	inline static int32_t get_offset_of_anchoredObjectPrefab_15() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___anchoredObjectPrefab_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_anchoredObjectPrefab_15() const { return ___anchoredObjectPrefab_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_anchoredObjectPrefab_15() { return &___anchoredObjectPrefab_15; }
	inline void set_anchoredObjectPrefab_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___anchoredObjectPrefab_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchoredObjectPrefab_15), (void*)value);
	}

	inline static int32_t get_offset_of_cloudManager_16() { return static_cast<int32_t>(offsetof(DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9, ___cloudManager_16)); }
	inline SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * get_cloudManager_16() const { return ___cloudManager_16; }
	inline SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 ** get_address_of_cloudManager_16() { return &___cloudManager_16; }
	inline void set_cloudManager_16(SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * value)
	{
		___cloudManager_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudManager_16), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo
struct XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2  : public XRUXPicker_tD8581F66CCF92FF46A648AD460FD9947A6CCADA7
{
public:

public:
};

struct XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2_StaticFields
{
public:
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo::_Instance
	XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * ____Instance_7;

public:
	inline static int32_t get_offset_of__Instance_7() { return static_cast<int32_t>(offsetof(XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2_StaticFields, ____Instance_7)); }
	inline XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * get__Instance_7() const { return ____Instance_7; }
	inline XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 ** get_address_of__Instance_7() { return &____Instance_7; }
	inline void set__Instance_7(XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * value)
	{
		____Instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Instance_7), (void*)value);
	}
};


// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript
struct AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332  : public DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9
{
public:
	// System.Collections.Generic.Dictionary`2<Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams> Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::stateParams
	Dictionary_2_tD05C5DECAC7B7C022F8BCFFC30A66A50C64189C2 * ___stateParams_17;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::anchorExchanger
	AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * ___anchorExchanger_18;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::_currentAppState
	int32_t ____currentAppState_19;
	// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/DemoFlow Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::_currentDemoFlow
	int32_t ____currentDemoFlow_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::otherSpawnedObjects
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___otherSpawnedObjects_21;
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::anchorsLocated
	int32_t ___anchorsLocated_22;
	// System.Int32 Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::anchorsExpected
	int32_t ___anchorsExpected_23;
	// System.Collections.Generic.List`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::localAnchorIds
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___localAnchorIds_24;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::_anchorKeyToFind
	String_t* ____anchorKeyToFind_25;
	// System.Nullable`1<System.Int64> Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::_anchorNumberToFind
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ____anchorNumberToFind_26;
	// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::baseSharingUrl
	String_t* ___baseSharingUrl_27;

public:
	inline static int32_t get_offset_of_stateParams_17() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___stateParams_17)); }
	inline Dictionary_2_tD05C5DECAC7B7C022F8BCFFC30A66A50C64189C2 * get_stateParams_17() const { return ___stateParams_17; }
	inline Dictionary_2_tD05C5DECAC7B7C022F8BCFFC30A66A50C64189C2 ** get_address_of_stateParams_17() { return &___stateParams_17; }
	inline void set_stateParams_17(Dictionary_2_tD05C5DECAC7B7C022F8BCFFC30A66A50C64189C2 * value)
	{
		___stateParams_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateParams_17), (void*)value);
	}

	inline static int32_t get_offset_of_anchorExchanger_18() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___anchorExchanger_18)); }
	inline AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * get_anchorExchanger_18() const { return ___anchorExchanger_18; }
	inline AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F ** get_address_of_anchorExchanger_18() { return &___anchorExchanger_18; }
	inline void set_anchorExchanger_18(AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * value)
	{
		___anchorExchanger_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorExchanger_18), (void*)value);
	}

	inline static int32_t get_offset_of__currentAppState_19() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ____currentAppState_19)); }
	inline int32_t get__currentAppState_19() const { return ____currentAppState_19; }
	inline int32_t* get_address_of__currentAppState_19() { return &____currentAppState_19; }
	inline void set__currentAppState_19(int32_t value)
	{
		____currentAppState_19 = value;
	}

	inline static int32_t get_offset_of__currentDemoFlow_20() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ____currentDemoFlow_20)); }
	inline int32_t get__currentDemoFlow_20() const { return ____currentDemoFlow_20; }
	inline int32_t* get_address_of__currentDemoFlow_20() { return &____currentDemoFlow_20; }
	inline void set__currentDemoFlow_20(int32_t value)
	{
		____currentDemoFlow_20 = value;
	}

	inline static int32_t get_offset_of_otherSpawnedObjects_21() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___otherSpawnedObjects_21)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_otherSpawnedObjects_21() const { return ___otherSpawnedObjects_21; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_otherSpawnedObjects_21() { return &___otherSpawnedObjects_21; }
	inline void set_otherSpawnedObjects_21(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___otherSpawnedObjects_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___otherSpawnedObjects_21), (void*)value);
	}

	inline static int32_t get_offset_of_anchorsLocated_22() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___anchorsLocated_22)); }
	inline int32_t get_anchorsLocated_22() const { return ___anchorsLocated_22; }
	inline int32_t* get_address_of_anchorsLocated_22() { return &___anchorsLocated_22; }
	inline void set_anchorsLocated_22(int32_t value)
	{
		___anchorsLocated_22 = value;
	}

	inline static int32_t get_offset_of_anchorsExpected_23() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___anchorsExpected_23)); }
	inline int32_t get_anchorsExpected_23() const { return ___anchorsExpected_23; }
	inline int32_t* get_address_of_anchorsExpected_23() { return &___anchorsExpected_23; }
	inline void set_anchorsExpected_23(int32_t value)
	{
		___anchorsExpected_23 = value;
	}

	inline static int32_t get_offset_of_localAnchorIds_24() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___localAnchorIds_24)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_localAnchorIds_24() const { return ___localAnchorIds_24; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_localAnchorIds_24() { return &___localAnchorIds_24; }
	inline void set_localAnchorIds_24(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___localAnchorIds_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localAnchorIds_24), (void*)value);
	}

	inline static int32_t get_offset_of__anchorKeyToFind_25() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ____anchorKeyToFind_25)); }
	inline String_t* get__anchorKeyToFind_25() const { return ____anchorKeyToFind_25; }
	inline String_t** get_address_of__anchorKeyToFind_25() { return &____anchorKeyToFind_25; }
	inline void set__anchorKeyToFind_25(String_t* value)
	{
		____anchorKeyToFind_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anchorKeyToFind_25), (void*)value);
	}

	inline static int32_t get_offset_of__anchorNumberToFind_26() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ____anchorNumberToFind_26)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get__anchorNumberToFind_26() const { return ____anchorNumberToFind_26; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of__anchorNumberToFind_26() { return &____anchorNumberToFind_26; }
	inline void set__anchorNumberToFind_26(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		____anchorNumberToFind_26 = value;
	}

	inline static int32_t get_offset_of_baseSharingUrl_27() { return static_cast<int32_t>(offsetof(AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332, ___baseSharingUrl_27)); }
	inline String_t* get_baseSharingUrl_27() const { return ___baseSharingUrl_27; }
	inline String_t** get_address_of_baseSharingUrl_27() { return &___baseSharingUrl_27; }
	inline void set_baseSharingUrl_27(String_t* value)
	{
		___baseSharingUrl_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseSharingUrl_27), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_gshared (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_m782136A4DBCF5D7BCCEEC31733306D42E3821E6A_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int64>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27_gshared (Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6_gshared (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * ___awaiter0, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B_gshared (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * ___stateMachine1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * ___stateMachine1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);

// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::InitializeCreateFlowDemoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AzureSpatialAnchorsSharedAnchorDemoScript_InitializeCreateFlowDemoAsync_m78E2FD362F169374C2D7CBAF1C7271B700982F38 (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26_MoveNext_m6F9B8257C896597923B780B1A50C91B3A276F11E (U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26_SetStateMachine_m11A15D41FB42F3CC0558EB08535143D40885918D (U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::get_currentAppState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AzureSpatialAnchorsSharedAnchorDemoScript_get_currentAppState_m2590953C83AAD3C10B7023879CE394176476677B_inline (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::set_currentAppState(Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/AppState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AzureSpatialAnchorsSharedAnchorDemoScript_set_currentAppState_m33C724A9BA0F8D228434092F7D5875A98EF90C4B (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25_MoveNext_m995D167E49F9236C5243C1437B3A941D35F66392 (U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25_SetStateMachine_m47444223AFAC50664B242C6C04F623DF92B3FA36 (U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::InitializeLocateFlowDemoAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AzureSpatialAnchorsSharedAnchorDemoScript_InitializeLocateFlowDemoAsync_mC212A019404CCA47730869F20027F7A4544EBC35 (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28_MoveNext_m2030F82BDC1DD452FF5798945BB45DCD027E154E (U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28_SetStateMachine_mA4A482DB27362AE91F5433D21ABE71F16880855F (U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * XRUXPickerForSharedAnchorDemo_get_Instance_m7D98BF37B42E16E6A1A961627DFD1139404AA68E (const RuntimeMethod* method);
// UnityEngine.UI.InputField Microsoft.Azure.SpatialAnchors.Unity.Examples.XRUXPickerForSharedAnchorDemo::GetDemoInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * XRUXPickerForSharedAnchorDemo_GetDemoInputField_mAF2202793A32FFAC7FCBE6AFB18AE87AF8FF3ADA (XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int64>::.ctor(!0)
inline void Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, int64_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, int64_t, const RuntimeMethod*))Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *, const RuntimeMethod*))Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::RetrieveAnchorKey(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * AnchorExchanger_RetrieveAnchorKey_m9FF706BD95CB95E73517A735B3073D979CA58AFC (AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * __this, int64_t ___anchorNumber0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mC4D7CAFB4EB10AF2EF40FDD6A7B8C0AB6018059B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_m782136A4DBCF5D7BCCEEC31733306D42E3821E6A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27_MoveNext_mBBB3AD1135BB5DE5D9A87067EE6CCF6F0B85402F (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27_SetStateMachine_m151F66E79DE01DFBCA18B146973E464EFE98B75C (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AzureSpatialAnchorsSharedAnchorDemoScript_U3CU3En__0_mF2F111F6C65BD5CB8FA69BEDC1270168C4A80EEF (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CloudSpatialAnchor_get_Identifier_mC087493D4EC6B4350BF4F38C5CE0235220D74F36 (CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Threading.Tasks.Task`1<System.Int64> Microsoft.Azure.SpatialAnchors.Unity.Examples.AnchorExchanger::StoreAnchorKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * AnchorExchanger_StoreAnchorKey_mFEAD65D34BCF7C9AE45D70B135D76CCA14EC461E (AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * __this, String_t* ___anchorKey0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int64>::GetAwaiter()
inline TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27 (Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  (*) (Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 *, const RuntimeMethod*))Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6 (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>,Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * ___awaiter0, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 *, U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int64>::GetResult()
inline int64_t TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B_gshared)(__this, method);
}
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF (const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorExtensions::GetPose(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  SpatialAnchorExtensions_GetPose_m0BDD9F4D1420E2B9654C81B4B8542BFE176DC0DF (CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * ___cloudAnchor0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript::AttachTextMesh(UnityEngine.GameObject,System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AzureSpatialAnchorsSharedAnchorDemoScript_AttachTextMesh_m19A4D3EBFB656E322A8FA2D3B5ABE1B5DC5C82A8 (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___parentObject0, Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___dataToAttach1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_MoveNext_m3E3D44773A2ACB2836B7B437FDE7B7EAD0F2BCB9 (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_SetStateMachine_mA9F848699B488DB7BE7A500B58E16473684DF5B2 (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAA82003C2912253A840231D84EB2620752718AA1 (U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.String Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionErrorEventArgs_get_ErrorMessage_m48B005AD287009EF5B6A50E9E54D1B295B11D641 (SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoU3Ed__16_MoveNext_m31D476A0CF079B68CF2F519B971E89485EA2F9FD (U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoU3Ed__16_SetStateMachine_m172301D9B53F9320C170438682A87D7BCB7D40F0 (U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Exception_GetType_mC5B8B5C944B326B751282AB0E8C25A7F85457D9F (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAllNearbyAnchorsU3Ed__18_MoveNext_m3F3B8501F8F84C63A77DE25341940D06ED5C1504 (U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAllNearbyAnchorsU3Ed__18_SetStateMachine_m458E400D42BB1C9EF10B95EBD9223E5B38F44F4F (U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.UnityDispatcher::InvokeOnAppThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityDispatcher_InvokeOnAppThread_m2B83C8B547A0F006D635F8EA00813391FA07B20E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnToLauncherU3Ed__19_MoveNext_m0979C5C64D5527247F482124762FC4AC74869EA6 (U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnToLauncherU3Ed__19_SetStateMachine_mC798F653323EDC02CCB0EE7082628AC2B874F06F (U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor>()
inline CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * GameObject_GetComponent_TisCloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9_mA5C775BC9B522ED83699998930275E2CDCA697BC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor::get_CloudAnchor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * CloudNativeAnchor_get_CloudAnchor_m84BC3F7D1E2D83BA6D7AB0357848A8535FA68DBA_inline (CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.CloudNativeAnchor::NativeToCloud()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * CloudNativeAnchor_NativeToCloud_m816FE9568AB55F0C3C2636D44888F75650661C36 (CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_AddDays_m0B84FA4DF82A5A20E5DF67B004FC65BE2FF180EC (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, double ___days0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor::set_Expiration(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudSpatialAnchor_set_Expiration_m56B8A430717F546E7EBBCAC5C473B1138998EE3C (CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::get_CloudManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * DemoScriptBase_get_CloudManager_m6D281AFD5E932D8A13CAFD090E9F5B4EC4A3D453_inline (DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * __this, const RuntimeMethod* method);
// Microsoft.Azure.SpatialAnchors.SessionStatus Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::get_SessionStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * SpatialAnchorManager_get_SessionStatus_m33DEB22F29B8C9C648C2E730169E8368F479A6AA_inline (SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * __this, const RuntimeMethod* method);
// System.Single Microsoft.Azure.SpatialAnchors.SessionStatus::get_RecommendedForCreateProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SessionStatus_get_RecommendedForCreateProgress_m7927B46B161F7373DF879EA4111AE601B0CDB30A (SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::get_IsReadyForCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialAnchorManager_get_IsReadyForCreate_mE2C13B748E3C03F68738A53A014AED63A2074D92 (SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager::CreateAnchorAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpatialAnchorManager_CreateAnchorAsync_m8AEABF7A31FCA85E0F028AFEAD856400B1079676 (SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * __this, CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * ___anchor0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_MoveNext_m92747CB1B5BBE421DAB87248189DA585A21DF074 (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_SetStateMachine_m55A94C5BC4D6096CEC0EBBCC3B0753F152016CC3 (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::get_StepColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  DemoStepParams_get_StepColor_mEBBD917E73848A6D0800A093A0E2FA73DE8E05FD_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::set_StepColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoStepParams_set_StepColor_mD9088D3C0CF89FAB1A47C13C8A93040FA6DAE795_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::get_StepMessage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DemoStepParams_get_StepMessage_mE92A0D5811233BF6414A44C0CD51471C8C4B8B41_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::set_StepMessage(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoStepParams_set_StepMessage_m425D0A01E6C8A4A552070B270CEB82E57FF54CED_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController::SetPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851 (PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector::GetScenes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelector_GetScenes_mFDE4EF37CA475BDCC143EF798C655F93D276E050 (SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector::set_SceneIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSelector_set_SceneIndex_mC6A691316F4CA46A0320E815FB8E74265F2E5CA1 (SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_MoveNext_mD1CC99FFB57F0A8031574CB27AF40C9E811F89EC (U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC * __this, const RuntimeMethod* method);
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_SetStateMachine_m407CF756744F12AFBD52E3F71C192B93D0884A38 (U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26_MoveNext_m6F9B8257C896597923B780B1A50C91B3A276F11E (U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0049;
				}
			}

IL_0014:
			{
				// await InitializeCreateFlowDemoAsync();
				AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_4 = V_1;
				NullCheck(L_4);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
				L_5 = AzureSpatialAnchorsSharedAnchorDemoScript_InitializeCreateFlowDemoAsync_m78E2FD362F169374C2D7CBAF1C7271B700982F38(L_4, /*hidden argument*/NULL);
				NullCheck(L_5);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
				L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
				V_2 = L_6;
				bool L_7;
				L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_7)
				{
					goto IL_0065;
				}
			}

IL_0029:
			{
				int32_t L_8 = 0;
				V_0 = L_8;
				__this->set_U3CU3E1__state_0(L_8);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
				__this->set_U3CU3Eu__1_3(L_9);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047_m98368546FEB046028C0B4EBB14054FF3582EAFB6_RuntimeMethod_var);
				goto IL_00b4;
			}

IL_0049:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
				V_2 = L_11;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_13 = (-1);
				V_0 = L_13;
				__this->set_U3CU3E1__state_0(L_13);
			}

IL_0065:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_0086;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006e;
			}
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"{nameof(AzureSpatialAnchorsSharedAnchorDemoScript)} - Error in {nameof(InitializeCreateFlowDemo)}: {ex.Message}");
			Exception_t * L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			String_t* L_16;
			L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E159244F7F58072D4E3CE9FCBE498AD4112187A)), L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0086;
		} // end catch (depth: 2)

IL_0086:
		{
			goto IL_00a1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0088;
		}
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b4;
	} // end catch (depth: 1)

IL_00a1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeCreateFlowDemoU3Ed__26_MoveNext_m6F9B8257C896597923B780B1A50C91B3A276F11E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * _thisAdjusted = reinterpret_cast<U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 *>(__this + _offset);
	U3CInitializeCreateFlowDemoU3Ed__26_MoveNext_m6F9B8257C896597923B780B1A50C91B3A276F11E(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemo>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoU3Ed__26_SetStateMachine_m11A15D41FB42F3CC0558EB08535143D40885918D (U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeCreateFlowDemoU3Ed__26_SetStateMachine_m11A15D41FB42F3CC0558EB08535143D40885918D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 * _thisAdjusted = reinterpret_cast<U3CInitializeCreateFlowDemoU3Ed__26_t3806EA7863985D8F9881BF8007B54741503BB047 *>(__this + _offset);
	U3CInitializeCreateFlowDemoU3Ed__26_SetStateMachine_m11A15D41FB42F3CC0558EB08535143D40885918D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25_MoveNext_m995D167E49F9236C5243C1437B3A941D35F66392 (U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005e;
			}
		}

IL_0011:
		{
			// if (currentAppState == AppState.DemoStepChooseFlow)
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_3 = V_1;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = AzureSpatialAnchorsSharedAnchorDemoScript_get_currentAppState_m2590953C83AAD3C10B7023879CE394176476677B_inline(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0019:
		{
			// _currentDemoFlow = DemoFlow.CreateFlow;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_5 = V_1;
			NullCheck(L_5);
			L_5->set__currentDemoFlow_20(0);
			// currentAppState = AppState.DemoStepCreateSession;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_6 = V_1;
			NullCheck(L_6);
			AzureSpatialAnchorsSharedAnchorDemoScript_set_currentAppState_m33C724A9BA0F8D228434092F7D5875A98EF90C4B(L_6, 2, /*hidden argument*/NULL);
			// }
			goto IL_0081;
		}

IL_0029:
		{
			// await AdvanceDemoAsync();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_7 = V_1;
			NullCheck(L_7);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(14 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::AdvanceDemoAsync() */, L_7);
			NullCheck(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9;
			L_9 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_007a;
			}
		}

IL_003e:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = V_2;
			__this->set_U3CU3Eu__1_3(L_12);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_13, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216_mCA8A3E4C98BCAAB2599222275DFAFD27C5065863_RuntimeMethod_var);
			goto IL_00ad;
		}

IL_005e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = __this->get_U3CU3Eu__1_3();
			V_2 = L_14;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_15 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_007a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_0081:
		{
			goto IL_009a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ad;
	} // end catch (depth: 1)

IL_009a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeCreateFlowDemoAsyncU3Ed__25_MoveNext_m995D167E49F9236C5243C1437B3A941D35F66392_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * _thisAdjusted = reinterpret_cast<U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 *>(__this + _offset);
	U3CInitializeCreateFlowDemoAsyncU3Ed__25_MoveNext_m995D167E49F9236C5243C1437B3A941D35F66392(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeCreateFlowDemoAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeCreateFlowDemoAsyncU3Ed__25_SetStateMachine_m47444223AFAC50664B242C6C04F623DF92B3FA36 (U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeCreateFlowDemoAsyncU3Ed__25_SetStateMachine_m47444223AFAC50664B242C6C04F623DF92B3FA36_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 * _thisAdjusted = reinterpret_cast<U3CInitializeCreateFlowDemoAsyncU3Ed__25_t726670535DF24B30FCFC55EBD0642275052AA216 *>(__this + _offset);
	U3CInitializeCreateFlowDemoAsyncU3Ed__25_SetStateMachine_m47444223AFAC50664B242C6C04F623DF92B3FA36(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28_MoveNext_m2030F82BDC1DD452FF5798945BB45DCD027E154E (U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0049;
				}
			}

IL_0014:
			{
				// await InitializeLocateFlowDemoAsync();
				AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_4 = V_1;
				NullCheck(L_4);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
				L_5 = AzureSpatialAnchorsSharedAnchorDemoScript_InitializeLocateFlowDemoAsync_mC212A019404CCA47730869F20027F7A4544EBC35(L_4, /*hidden argument*/NULL);
				NullCheck(L_5);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
				L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
				V_2 = L_6;
				bool L_7;
				L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_7)
				{
					goto IL_0065;
				}
			}

IL_0029:
			{
				int32_t L_8 = 0;
				V_0 = L_8;
				__this->set_U3CU3E1__state_0(L_8);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
				__this->set_U3CU3Eu__1_3(L_9);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752_m522A49BBF9ABB0A48F7027AD6236CCF04F9AC0E0_RuntimeMethod_var);
				goto IL_00b4;
			}

IL_0049:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
				V_2 = L_11;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_13 = (-1);
				V_0 = L_13;
				__this->set_U3CU3E1__state_0(L_13);
			}

IL_0065:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_0086;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_006e;
			}
			throw e;
		}

CATCH_006e:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"{nameof(AzureSpatialAnchorsSharedAnchorDemoScript)} - Error in {nameof(InitializeLocateFlowDemo)}: {ex.Message}");
			Exception_t * L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
			String_t* L_16;
			L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F1C76F631EAD6B679D4A037FAD043B5B0B7FB32)), L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_16, /*hidden argument*/NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0086;
		} // end catch (depth: 2)

IL_0086:
		{
			goto IL_00a1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0088;
		}
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b4;
	} // end catch (depth: 1)

IL_00a1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeLocateFlowDemoU3Ed__28_MoveNext_m2030F82BDC1DD452FF5798945BB45DCD027E154E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * _thisAdjusted = reinterpret_cast<U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 *>(__this + _offset);
	U3CInitializeLocateFlowDemoU3Ed__28_MoveNext_m2030F82BDC1DD452FF5798945BB45DCD027E154E(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemo>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoU3Ed__28_SetStateMachine_mA4A482DB27362AE91F5433D21ABE71F16880855F (U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeLocateFlowDemoU3Ed__28_SetStateMachine_mA4A482DB27362AE91F5433D21ABE71F16880855F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 * _thisAdjusted = reinterpret_cast<U3CInitializeLocateFlowDemoU3Ed__28_t1E720754AC1DB6E7E1635668AE89F63C174DA752 *>(__this + _offset);
	U3CInitializeLocateFlowDemoU3Ed__28_SetStateMachine_mA4A482DB27362AE91F5433D21ABE71F16880855F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27_MoveNext_mBBB3AD1135BB5DE5D9A87067EE6CCF6F0B85402F (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mC4D7CAFB4EB10AF2EF40FDD6A7B8C0AB6018059B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365439334A80ECFF830D5AC2817A973FAA812795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAB6EF21FD63A5FA41DDA76CD9FF277FD18513A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * V_1 = NULL;
	int64_t V_2 = 0;
	String_t* V_3 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00be;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_015f;
			}
		}

IL_001b:
		{
			// if (currentAppState == AppState.DemoStepChooseFlow)
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = AzureSpatialAnchorsSharedAnchorDemoScript_get_currentAppState_m2590953C83AAD3C10B7023879CE394176476677B_inline(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002f;
			}
		}

IL_0023:
		{
			// currentAppState = AppState.DemoStepInputAnchorNumber;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_6 = V_1;
			NullCheck(L_6);
			AzureSpatialAnchorsSharedAnchorDemoScript_set_currentAppState_m33C724A9BA0F8D228434092F7D5875A98EF90C4B(L_6, 1, /*hidden argument*/NULL);
			// }
			goto IL_0183;
		}

IL_002f:
		{
			// else if (currentAppState == AppState.DemoStepInputAnchorNumber)
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = AzureSpatialAnchorsSharedAnchorDemoScript_get_currentAppState_m2590953C83AAD3C10B7023879CE394176476677B_inline(L_7, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_8) == ((uint32_t)1))))
			{
				goto IL_0128;
			}
		}

IL_003b:
		{
			// string inputText = XRUXPickerForSharedAnchorDemo.Instance.GetDemoInputField().text;
			XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * L_9;
			L_9 = XRUXPickerForSharedAnchorDemo_get_Instance_m7D98BF37B42E16E6A1A961627DFD1139404AA68E(/*hidden argument*/NULL);
			NullCheck(L_9);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_10;
			L_10 = XRUXPickerForSharedAnchorDemo_GetDemoInputField_mAF2202793A32FFAC7FCBE6AFB18AE87AF8FF3ADA(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_11;
			L_11 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_10, /*hidden argument*/NULL);
			// if (!long.TryParse(inputText, out anchorNumber))
			bool L_12;
			L_12 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_11, (int64_t*)(&V_2), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0068;
			}
		}

IL_0053:
		{
			// feedbackBox.text = "Invalid Anchor Number!";
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_13 = V_1;
			NullCheck(L_13);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_13)->get_feedbackBox_7();
			NullCheck(L_14);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral365439334A80ECFF830D5AC2817A973FAA812795);
			// }
			goto IL_0183;
		}

IL_0068:
		{
			// _anchorNumberToFind = anchorNumber;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_15 = V_1;
			int64_t L_16 = V_2;
			Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_17;
			memset((&L_17), 0, sizeof(L_17));
			Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
			NullCheck(L_15);
			L_15->set__anchorNumberToFind_26(L_17);
			// _anchorKeyToFind = await anchorExchanger.RetrieveAnchorKey(_anchorNumberToFind.Value);
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_18 = V_1;
			NullCheck(L_18);
			AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * L_19 = L_18->get_anchorExchanger_18();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_20 = V_1;
			NullCheck(L_20);
			Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * L_21 = L_20->get_address_of__anchorNumberToFind_26();
			int64_t L_22;
			L_22 = Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA((Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F *)L_21, /*hidden argument*/Nullable_1_get_Value_m50AA4ABD548771EE5E0C30724C9847B16C44F3DA_RuntimeMethod_var);
			NullCheck(L_19);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_23;
			L_23 = AnchorExchanger_RetrieveAnchorKey_m9FF706BD95CB95E73517A735B3073D979CA58AFC(L_19, L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_24;
			L_24 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_23, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_4 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00db;
			}
		}

IL_009a:
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_27 = V_4;
			__this->set_U3CU3Eu__1_3(L_27);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mC4D7CAFB4EB10AF2EF40FDD6A7B8C0AB6018059B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mC4D7CAFB4EB10AF2EF40FDD6A7B8C0AB6018059B_RuntimeMethod_var);
			goto IL_01b1;
		}

IL_00be:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_29 = __this->get_U3CU3Eu__1_3();
			V_4 = L_29;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_30 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
		}

IL_00db:
		{
			String_t* L_32;
			L_32 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			V_3 = L_32;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_33 = V_1;
			String_t* L_34 = V_3;
			NullCheck(L_33);
			L_33->set__anchorKeyToFind_25(L_34);
			// if (_anchorKeyToFind == null)
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_35 = V_1;
			NullCheck(L_35);
			String_t* L_36 = L_35->get__anchorKeyToFind_25();
			if (L_36)
			{
				goto IL_0104;
			}
		}

IL_00f2:
		{
			// feedbackBox.text = "Anchor Number Not Found!";
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_37 = V_1;
			NullCheck(L_37);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_37)->get_feedbackBox_7();
			NullCheck(L_38);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteralBAAB6EF21FD63A5FA41DDA76CD9FF277FD18513A);
			// }
			goto IL_0183;
		}

IL_0104:
		{
			// _currentDemoFlow = DemoFlow.LocateFlow;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_39 = V_1;
			NullCheck(L_39);
			L_39->set__currentDemoFlow_20(1);
			// currentAppState = AppState.DemoStepCreateSession;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_40 = V_1;
			NullCheck(L_40);
			AzureSpatialAnchorsSharedAnchorDemoScript_set_currentAppState_m33C724A9BA0F8D228434092F7D5875A98EF90C4B(L_40, 2, /*hidden argument*/NULL);
			// XRUXPickerForSharedAnchorDemo.Instance.GetDemoInputField().text = "";
			XRUXPickerForSharedAnchorDemo_tE8D6784410855F704F254081710A1997C9A9D4C2 * L_41;
			L_41 = XRUXPickerForSharedAnchorDemo_get_Instance_m7D98BF37B42E16E6A1A961627DFD1139404AA68E(/*hidden argument*/NULL);
			NullCheck(L_41);
			InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_42;
			L_42 = XRUXPickerForSharedAnchorDemo_GetDemoInputField_mAF2202793A32FFAC7FCBE6AFB18AE87AF8FF3ADA(L_41, /*hidden argument*/NULL);
			NullCheck(L_42);
			InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_42, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			// }
			goto IL_0183;
		}

IL_0128:
		{
			// await AdvanceDemoAsync();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_43 = V_1;
			NullCheck(L_43);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_44;
			L_44 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(14 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::AdvanceDemoAsync() */, L_43);
			NullCheck(L_44);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_45;
			L_45 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_44, /*hidden argument*/NULL);
			V_5 = L_45;
			bool L_46;
			L_46 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
			if (L_46)
			{
				goto IL_017c;
			}
		}

IL_013e:
		{
			int32_t L_47 = 1;
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_48 = V_5;
			__this->set_U3CU3Eu__2_4(L_48);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114_mF1205CFE63928CB77874518724EC7E11063E679B_RuntimeMethod_var);
			goto IL_01b1;
		}

IL_015f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_50 = __this->get_U3CU3Eu__2_4();
			V_5 = L_50;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_51 = __this->get_address_of_U3CU3Eu__2_4();
			il2cpp_codegen_initobj(L_51, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->set_U3CU3E1__state_0(L_52);
		}

IL_017c:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_5), /*hidden argument*/NULL);
		}

IL_0183:
		{
			goto IL_019e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0185;
		}
		throw e;
	}

CATCH_0185:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_53 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_54 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b1;
	} // end catch (depth: 1)

IL_019e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_55, /*hidden argument*/NULL);
	}

IL_01b1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeLocateFlowDemoAsyncU3Ed__27_MoveNext_mBBB3AD1135BB5DE5D9A87067EE6CCF6F0B85402F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * _thisAdjusted = reinterpret_cast<U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 *>(__this + _offset);
	U3CInitializeLocateFlowDemoAsyncU3Ed__27_MoveNext_mBBB3AD1135BB5DE5D9A87067EE6CCF6F0B85402F(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<InitializeLocateFlowDemoAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeLocateFlowDemoAsyncU3Ed__27_SetStateMachine_m151F66E79DE01DFBCA18B146973E464EFE98B75C (U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeLocateFlowDemoAsyncU3Ed__27_SetStateMachine_m151F66E79DE01DFBCA18B146973E464EFE98B75C_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 * _thisAdjusted = reinterpret_cast<U3CInitializeLocateFlowDemoAsyncU3Ed__27_tAA974FF0E9C277D6F54C196899EBFC93203EB114 *>(__this + _offset);
	U3CInitializeLocateFlowDemoAsyncU3Ed__27_SetStateMachine_m151F66E79DE01DFBCA18B146973E464EFE98B75C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_MoveNext_m3E3D44773A2ACB2836B7B437FDE7B7EAD0F2BCB9 (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54B11C37F44999682BFFB7D441A533E5BFFBD219);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * V_1 = NULL;
	int64_t V_2 = 0;
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0052;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d9;
			}
		}

IL_0018:
		{
			// await base.OnSaveCloudAnchorSuccessfulAsync();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_4 = V_1;
			NullCheck(L_4);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = AzureSpatialAnchorsSharedAnchorDemoScript_U3CU3En__0_mF2F111F6C65BD5CB8FA69BEDC1270168C4A80EEF(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_4 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006f;
			}
		}

IL_002e:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_4;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m28C7F8FB1C98715DB6C452AB98C1D5BA29D568B3_RuntimeMethod_var);
			goto IL_0184;
		}

IL_0052:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
			V_4 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006f:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_4), /*hidden argument*/NULL);
			// long anchorNumber = -1;
			V_2 = ((int64_t)((int64_t)(-1)));
			// localAnchorIds.Add(currentCloudAnchor.Identifier);
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_14 = V_1;
			NullCheck(L_14);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = L_14->get_localAnchorIds_24();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_16 = V_1;
			NullCheck(L_16);
			CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_17 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_16)->get_currentCloudAnchor_10();
			NullCheck(L_17);
			String_t* L_18;
			L_18 = CloudSpatialAnchor_get_Identifier_mC087493D4EC6B4350BF4F38C5CE0235220D74F36(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_15, L_18, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// anchorNumber = (await anchorExchanger.StoreAnchorKey(currentCloudAnchor.Identifier));
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_19 = V_1;
			NullCheck(L_19);
			AnchorExchanger_t617B5F725FBA604F65F52D748B2949E9EC77999F * L_20 = L_19->get_anchorExchanger_18();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_21 = V_1;
			NullCheck(L_21);
			CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_22 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_21)->get_currentCloudAnchor_10();
			NullCheck(L_22);
			String_t* L_23;
			L_23 = CloudSpatialAnchor_get_Identifier_mC087493D4EC6B4350BF4F38C5CE0235220D74F36(L_22, /*hidden argument*/NULL);
			NullCheck(L_20);
			Task_1_t72DF138AF44B06D7C22776A5C5F8F6C6824C0675 * L_24;
			L_24 = AnchorExchanger_StoreAnchorKey_mFEAD65D34BCF7C9AE45D70B135D76CCA14EC461E(L_20, L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  L_25;
			L_25 = Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27(L_24, /*hidden argument*/Task_1_GetAwaiter_m0B889B9D3EF028CD2AAAE446B7CC34D39E150A27_RuntimeMethod_var);
			V_5 = L_25;
			bool L_26;
			L_26 = TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6((TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m0FB5F3F196B132180D77FF5E1655490F46041DC6_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_00f6;
			}
		}

IL_00b5:
		{
			int32_t L_27 = 1;
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
			TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  L_28 = V_5;
			__this->set_U3CU3Eu__2_4(L_28);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_29 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_29, (TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 *)(&V_5), (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77_TisU3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D_m6DD3916FFAF30E1FBFA3AF69A8AE745BB97A89A4_RuntimeMethod_var);
			goto IL_0184;
		}

IL_00d9:
		{
			TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77  L_30 = __this->get_U3CU3Eu__2_4();
			V_5 = L_30;
			TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 * L_31 = __this->get_address_of_U3CU3Eu__2_4();
			il2cpp_codegen_initobj(L_31, sizeof(TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 ));
			int32_t L_32 = (-1);
			V_0 = L_32;
			__this->set_U3CU3E1__state_0(L_32);
		}

IL_00f6:
		{
			int64_t L_33;
			L_33 = TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B((TaskAwaiter_1_t5FC6822952C1B1695164DD230846959E45E1BA77 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m2C5D5DF95A92F6BF83999B5290507A8514D8A19B_RuntimeMethod_var);
			V_2 = L_33;
			// Pose anchorPose = Pose.identity;
			IL2CPP_RUNTIME_CLASS_INIT(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_il2cpp_TypeInfo_var);
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_34;
			L_34 = Pose_get_identity_m334B16AC3024785914BCC5A2B949750A010878BF(/*hidden argument*/NULL);
			V_3 = L_34;
			// anchorPose = currentCloudAnchor.GetPose();
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_35 = V_1;
			NullCheck(L_35);
			CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_36 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_35)->get_currentCloudAnchor_10();
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_37;
			L_37 = SpatialAnchorExtensions_GetPose_m0BDD9F4D1420E2B9654C81B4B8542BFE176DC0DF(L_36, /*hidden argument*/NULL);
			V_3 = L_37;
			// SpawnOrMoveCurrentAnchoredObject(anchorPose.position, anchorPose.rotation);
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_38 = V_1;
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_39 = V_3;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = L_39.get_position_0();
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_41 = V_3;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42 = L_41.get_rotation_1();
			NullCheck(L_38);
			VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(28 /* System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::SpawnOrMoveCurrentAnchoredObject(UnityEngine.Vector3,UnityEngine.Quaternion) */, L_38, L_40, L_42);
			// AttachTextMesh(spawnedObject, anchorNumber);
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_43 = V_1;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_44 = V_1;
			NullCheck(L_44);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_44)->get_spawnedObject_12();
			int64_t L_46 = V_2;
			Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  L_47;
			memset((&L_47), 0, sizeof(L_47));
			Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D((&L_47), L_46, /*hidden argument*/Nullable_1__ctor_m93C961E02CCABD26523FC0F655AE9FC0E151626D_RuntimeMethod_var);
			NullCheck(L_43);
			AzureSpatialAnchorsSharedAnchorDemoScript_AttachTextMesh_m19A4D3EBFB656E322A8FA2D3B5ABE1B5DC5C82A8(L_43, L_45, L_47, /*hidden argument*/NULL);
			// currentAppState = AppState.DemoStepStopSession;
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_48 = V_1;
			NullCheck(L_48);
			AzureSpatialAnchorsSharedAnchorDemoScript_set_currentAppState_m33C724A9BA0F8D228434092F7D5875A98EF90C4B(L_48, 8, /*hidden argument*/NULL);
			// feedbackBox.text = $"Created anchor {anchorNumber}. Next: Stop cloud anchor session";
			AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * L_49 = V_1;
			NullCheck(L_49);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_50 = ((DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 *)L_49)->get_feedbackBox_7();
			int64_t L_51 = V_2;
			int64_t L_52 = L_51;
			RuntimeObject * L_53 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_52);
			String_t* L_54;
			L_54 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral54B11C37F44999682BFFB7D441A533E5BFFBD219, L_53, /*hidden argument*/NULL);
			NullCheck(L_50);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_54);
			goto IL_0171;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0158;
		}
		throw e;
	}

CATCH_0158:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_55 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_56 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_55, L_56, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0184;
	} // end catch (depth: 1)

IL_0171:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_57, /*hidden argument*/NULL);
	}

IL_0184:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_MoveNext_m3E3D44773A2ACB2836B7B437FDE7B7EAD0F2BCB9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * _thisAdjusted = reinterpret_cast<U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D *>(__this + _offset);
	U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_MoveNext_m3E3D44773A2ACB2836B7B437FDE7B7EAD0F2BCB9(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.AzureSpatialAnchorsSharedAnchorDemoScript/<OnSaveCloudAnchorSuccessfulAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_SetStateMachine_mA9F848699B488DB7BE7A500B58E16473684DF5B2 (U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_SetStateMachine_mA9F848699B488DB7BE7A500B58E16473684DF5B2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D * _thisAdjusted = reinterpret_cast<U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_tA3EACCBD83E035E33145A2C1085D1B1A591B603D *>(__this + _offset);
	U3COnSaveCloudAnchorSuccessfulAsyncU3Ed__22_SetStateMachine_mA9F848699B488DB7BE7A500B58E16473684DF5B2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBE9EDE7110609B6BCAD107EC00EB62C36E7D58D8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * L_0 = (U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 *)il2cpp_codegen_object_new(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAA82003C2912253A840231D84EB2620752718AA1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAA82003C2912253A840231D84EB2620752718AA1 (U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c::<ReturnToLauncher>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CReturnToLauncherU3Eb__19_0_m22E305F7F64AD0C8F2291D8A64B1EEFFBC67F6E9 (U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_m92019EC9F09F175CF31CDEF61F131ED786D1C749 (U3CU3Ec__DisplayClass36_0_t73BA75EA4BDEF160EFD775353BEDCF993636C19D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass36_0::<OnSaveCloudAnchorFailed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0_U3COnSaveCloudAnchorFailedU3Eb__0_mE37A4C7840FA9ABAFF470F946277A62A2452A120 (U3CU3Ec__DisplayClass36_0_t73BA75EA4BDEF160EFD775353BEDCF993636C19D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityDispatcher.InvokeOnAppThread(() => this.feedbackBox.text = string.Format("Error: {0}", exception.ToString()));
		DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_feedbackBox_7();
		Exception_t * L_2 = __this->get_exception_1();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m4C88FB15CE27E7F6A73AE3B170FD69EBD65780B9 (U3CU3Ec__DisplayClass48_0_t28BAE31EF3E5401B0BF17C47139480860D9A3D83 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<>c__DisplayClass48_0::<CloudManager_Error>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CCloudManager_ErrorU3Eb__0_mEA311184DAFCE8B17C59BB6029BDC77EC4B91488 (U3CU3Ec__DisplayClass48_0_t28BAE31EF3E5401B0BF17C47139480860D9A3D83 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityDispatcher.InvokeOnAppThread(() => this.feedbackBox.text = string.Format("Error: {0}", args.ErrorMessage));
		DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_feedbackBox_7();
		SessionErrorEventArgs_tB6B0BE9C48731E2EB6BB7AFE6A69810F52071E06 * L_2 = __this->get_args_1();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SessionErrorEventArgs_get_ErrorMessage_m48B005AD287009EF5B6A50E9E54D1B295B11D641(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral87A82C68D0F9886C428DE9E07B5524F3E6A08970, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoU3Ed__16_MoveNext_m31D476A0CF079B68CF2F519B971E89485EA2F9FD (U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0058;
				}
			}

IL_0014:
			{
				// advanceDemoTask = AdvanceDemoAsync();
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_4 = V_1;
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_5 = V_1;
				NullCheck(L_5);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
				L_6 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(14 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::AdvanceDemoAsync() */, L_5);
				NullCheck(L_4);
				L_4->set_advanceDemoTask_5(L_6);
				// await advanceDemoTask;
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_7 = V_1;
				NullCheck(L_7);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8 = L_7->get_advanceDemoTask_5();
				NullCheck(L_8);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9;
				L_9 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_8, /*hidden argument*/NULL);
				V_2 = L_9;
				bool L_10;
				L_10 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_10)
				{
					goto IL_0074;
				}
			}

IL_0035:
			{
				int32_t L_11 = 0;
				V_0 = L_11;
				__this->set_U3CU3E1__state_0(L_11);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = V_2;
				__this->set_U3CU3Eu__1_3(L_12);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67_m1928FFE92FFACBDC89823DCDE8B3CF66C02CE5D8_RuntimeMethod_var);
				goto IL_00de;
			}

IL_0058:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_14 = __this->get_U3CU3Eu__1_3();
				V_2 = L_14;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_15 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_16 = (-1);
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
			}

IL_0074:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_00b0;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007d;
			}
			throw e;
		}

CATCH_007d:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"{nameof(DemoScriptBase)} - Error in {nameof(AdvanceDemo)}: {ex.Message} {ex.StackTrace}");
			Exception_t * L_17 = V_3;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_17);
			Exception_t * L_19 = V_3;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_19);
			String_t* L_21;
			L_21 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral942BF559927F44C154B17447EC464655613A4B70)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_21, /*hidden argument*/NULL);
			// feedbackBox.text = $"Demo failed, check debugger output for more information";
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_22 = V_1;
			NullCheck(L_22);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = L_22->get_feedbackBox_7();
			NullCheck(L_23);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral524067D5CA3C6345B2101F415A3489EEE3360B11)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00b0;
		} // end catch (depth: 2)

IL_00b0:
		{
			goto IL_00cb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b2;
		}
		throw e;
	}

CATCH_00b2:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_25 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00de;
	} // end catch (depth: 1)

IL_00cb:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_26, /*hidden argument*/NULL);
	}

IL_00de:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAdvanceDemoU3Ed__16_MoveNext_m31D476A0CF079B68CF2F519B971E89485EA2F9FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * _thisAdjusted = reinterpret_cast<U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 *>(__this + _offset);
	U3CAdvanceDemoU3Ed__16_MoveNext_m31D476A0CF079B68CF2F519B971E89485EA2F9FD(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<AdvanceDemo>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdvanceDemoU3Ed__16_SetStateMachine_m172301D9B53F9320C170438682A87D7BCB7D40F0 (U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAdvanceDemoU3Ed__16_SetStateMachine_m172301D9B53F9320C170438682A87D7BCB7D40F0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 * _thisAdjusted = reinterpret_cast<U3CAdvanceDemoU3Ed__16_tB947CFEA46027F3694114914E6540DAC88F96C67 *>(__this + _offset);
	U3CAdvanceDemoU3Ed__16_SetStateMachine_m172301D9B53F9320C170438682A87D7BCB7D40F0(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAllNearbyAnchorsU3Ed__18_MoveNext_m3F3B8501F8F84C63A77DE25341940D06ED5C1504 (U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_004c;
				}
			}

IL_0014:
			{
				// await EnumerateAllNearbyAnchorsAsync();
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_4 = V_1;
				NullCheck(L_4);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
				L_5 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(15 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::EnumerateAllNearbyAnchorsAsync() */, L_4);
				NullCheck(L_5);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
				L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
				V_2 = L_6;
				bool L_7;
				L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_7)
				{
					goto IL_0068;
				}
			}

IL_0029:
			{
				int32_t L_8 = 0;
				V_0 = L_8;
				__this->set_U3CU3E1__state_0(L_8);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
				__this->set_U3CU3Eu__1_3(L_9);
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7_m5313D24ECF9CE8165BC143F7CFB53FC1C1A043E3_RuntimeMethod_var);
				goto IL_011e;
			}

IL_004c:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_3();
				V_2 = L_11;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_13 = (-1);
				V_0 = L_13;
				__this->set_U3CU3E1__state_0(L_13);
			}

IL_0068:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_00f0;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0071;
			}
			throw e;
		}

CATCH_0071:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// Debug.LogError($"{nameof(DemoScriptBase)} - Error in {nameof(EnumerateAllNearbyAnchors)}: === {ex.GetType().Name} === {ex.ToString()} === {ex.Source} === {ex.Message} {ex.StackTrace}");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)((int32_t)10));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53C1D57DC44BD3FDBDE905511300952CB7C3260D)));
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53C1D57DC44BD3FDBDE905511300952CB7C3260D)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
			Exception_t * L_17 = V_3;
			NullCheck(L_17);
			Type_t * L_18;
			L_18 = Exception_GetType_mC5B8B5C944B326B751282AB0E8C25A7F85457D9F(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19;
			L_19 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_19);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_16;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A)));
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
			Exception_t * L_22 = V_3;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, L_23);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_21;
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A)));
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
			Exception_t * L_26 = V_3;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_Source() */, L_26);
			NullCheck(L_25);
			ArrayElementTypeCheck (L_25, L_27);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_25;
			NullCheck(L_28);
			ArrayElementTypeCheck (L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A)));
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral147841827A133FD3E1B761687A3C5BC05684B62A)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
			Exception_t * L_30 = V_3;
			NullCheck(L_30);
			String_t* L_31;
			L_31 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_30);
			NullCheck(L_29);
			ArrayElementTypeCheck (L_29, L_31);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_31);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_29;
			NullCheck(L_32);
			ArrayElementTypeCheck (L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
			Exception_t * L_34 = V_3;
			NullCheck(L_34);
			String_t* L_35;
			L_35 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_34);
			NullCheck(L_33);
			ArrayElementTypeCheck (L_33, L_35);
			(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_35);
			String_t* L_36;
			L_36 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_33, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_36, /*hidden argument*/NULL);
			// feedbackBox.text = $"Enumeration failed, check debugger output for more information";
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_37 = V_1;
			NullCheck(L_37);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = L_37->get_feedbackBox_7();
			NullCheck(L_38);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B5B38AFB8D573F768D552840A9142729293ACE5)));
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00f0;
		} // end catch (depth: 2)

IL_00f0:
		{
			goto IL_010b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f2;
		}
		throw e;
	}

CATCH_00f2:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_39 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_40 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_39, L_40, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011e;
	} // end catch (depth: 1)

IL_010b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_41, /*hidden argument*/NULL);
	}

IL_011e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnumerateAllNearbyAnchorsU3Ed__18_MoveNext_m3F3B8501F8F84C63A77DE25341940D06ED5C1504_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * _thisAdjusted = reinterpret_cast<U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 *>(__this + _offset);
	U3CEnumerateAllNearbyAnchorsU3Ed__18_MoveNext_m3F3B8501F8F84C63A77DE25341940D06ED5C1504(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<EnumerateAllNearbyAnchors>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAllNearbyAnchorsU3Ed__18_SetStateMachine_m458E400D42BB1C9EF10B95EBD9223E5B38F44F4F (U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnumerateAllNearbyAnchorsU3Ed__18_SetStateMachine_m458E400D42BB1C9EF10B95EBD9223E5B38F44F4F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 * _thisAdjusted = reinterpret_cast<U3CEnumerateAllNearbyAnchorsU3Ed__18_t19FDE745BFB5B10A6B62B19E4E11671E50ECDBF7 *>(__this + _offset);
	U3CEnumerateAllNearbyAnchorsU3Ed__18_SetStateMachine_m458E400D42BB1C9EF10B95EBD9223E5B38F44F4F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnToLauncherU3Ed__19_MoveNext_m0979C5C64D5527247F482124762FC4AC74869EA6 (U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CReturnToLauncherU3Eb__19_0_m22E305F7F64AD0C8F2291D8A64B1EEFFBC67F6E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityDispatcher_t7149A6870953BBC3017D311981B8478FB7E380F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004e;
			}
		}

IL_0011:
		{
			// if (advanceDemoTask != null) { await advanceDemoTask; }
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_3 = V_1;
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = L_3->get_advanceDemoTask_5();
			if (!L_4)
			{
				goto IL_0071;
			}
		}

IL_0019:
		{
			// if (advanceDemoTask != null) { await advanceDemoTask; }
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_5 = V_1;
			NullCheck(L_5);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6 = L_5->get_advanceDemoTask_5();
			NullCheck(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7;
			L_7 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006a;
			}
		}

IL_002e:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B_m266DF50F49CEA242A7F015356531E7C63A84A44E_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_004e:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_006a:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_0071:
		{
			// UnityDispatcher.InvokeOnAppThread(() =>
			// {
			//     SceneManager.LoadScene(0);
			// });
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = ((U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var))->get_U3CU3E9__19_0_1();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15;
			G_B8_0 = L_16;
			if (L_16)
			{
				G_B9_0 = L_16;
				goto IL_0090;
			}
		}

IL_0079:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var);
			U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511 * L_17 = ((U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CReturnToLauncherU3Eb__19_0_m22E305F7F64AD0C8F2291D8A64B1EEFFBC67F6E9_RuntimeMethod_var), /*hidden argument*/NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = L_18;
			((U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t334DDD90AC19BA4904FFA14FB304045A60A1F511_il2cpp_TypeInfo_var))->set_U3CU3E9__19_0_1(L_19);
			G_B9_0 = L_19;
		}

IL_0090:
		{
			IL2CPP_RUNTIME_CLASS_INIT(UnityDispatcher_t7149A6870953BBC3017D311981B8478FB7E380F9_il2cpp_TypeInfo_var);
			UnityDispatcher_InvokeOnAppThread_m2B83C8B547A0F006D635F8EA00813391FA07B20E(G_B9_0, /*hidden argument*/NULL);
			goto IL_00ae;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_22, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReturnToLauncherU3Ed__19_MoveNext_m0979C5C64D5527247F482124762FC4AC74869EA6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * _thisAdjusted = reinterpret_cast<U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B *>(__this + _offset);
	U3CReturnToLauncherU3Ed__19_MoveNext_m0979C5C64D5527247F482124762FC4AC74869EA6(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<ReturnToLauncher>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReturnToLauncherU3Ed__19_SetStateMachine_mC798F653323EDC02CCB0EE7082628AC2B874F06F (U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReturnToLauncherU3Ed__19_SetStateMachine_mC798F653323EDC02CCB0EE7082628AC2B874F06F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B * _thisAdjusted = reinterpret_cast<U3CReturnToLauncherU3Ed__19_tDB633C5AAD3F1F14CE5ABDBE3F2A00411464285B *>(__this + _offset);
	U3CReturnToLauncherU3Ed__19_SetStateMachine_mC798F653323EDC02CCB0EE7082628AC2B874F06F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_MoveNext_m92747CB1B5BBE421DAB87248189DA585A21DF074 (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9_mA5C775BC9B522ED83699998930275E2CDCA697BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27615B845F6E2B65B574ABF6B2D147F1CE7A1A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1164CE08722FB8C6EEF375B61462D3D107CE6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BBDCC66485B3AB9E12433A13B5BF8E90C304F0B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Exception_t * V_5 = NULL;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			switch (L_2)
			{
				case 0:
				{
					goto IL_007f;
				}
				case 1:
				{
					goto IL_0115;
				}
				case 2:
				{
					goto IL_0186;
				}
				case 3:
				{
					goto IL_0186;
				}
			}
		}

IL_0024:
		{
			// CloudNativeAnchor cna = spawnedObject.GetComponent<CloudNativeAnchor>();
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_3 = V_1;
			NullCheck(L_3);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_spawnedObject_12();
			NullCheck(L_4);
			CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * L_5;
			L_5 = GameObject_GetComponent_TisCloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9_mA5C775BC9B522ED83699998930275E2CDCA697BC(L_4, /*hidden argument*/GameObject_GetComponent_TisCloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9_mA5C775BC9B522ED83699998930275E2CDCA697BC_RuntimeMethod_var);
			__this->set_U3CcnaU3E5__2_3(L_5);
			// if (cna.CloudAnchor == null)
			CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * L_6 = __this->get_U3CcnaU3E5__2_3();
			NullCheck(L_6);
			CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_7;
			L_7 = CloudNativeAnchor_get_CloudAnchor_m84BC3F7D1E2D83BA6D7AB0357848A8535FA68DBA_inline(L_6, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_00a2;
			}
		}

IL_0042:
		{
			// await cna.NativeToCloud();
			CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * L_8 = __this->get_U3CcnaU3E5__2_3();
			NullCheck(L_8);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = CloudNativeAnchor_NativeToCloud_m816FE9568AB55F0C3C2636D44888F75650661C36(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
			L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_009b;
			}
		}

IL_005c:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_2;
			__this->set_U3CU3Eu__1_5(L_13);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_RuntimeMethod_var);
			goto IL_02dc;
		}

IL_007f:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_5();
			V_2 = L_15;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_009b:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
		}

IL_00a2:
		{
			// CloudSpatialAnchor cloudAnchor = cna.CloudAnchor;
			CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * L_18 = __this->get_U3CcnaU3E5__2_3();
			NullCheck(L_18);
			CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_19;
			L_19 = CloudNativeAnchor_get_CloudAnchor_m84BC3F7D1E2D83BA6D7AB0357848A8535FA68DBA_inline(L_18, /*hidden argument*/NULL);
			__this->set_U3CcloudAnchorU3E5__3_4(L_19);
			// cloudAnchor.Expiration = DateTimeOffset.Now.AddDays(7);
			CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_20 = __this->get_U3CcloudAnchorU3E5__3_4();
			IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
			DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_21;
			L_21 = DateTimeOffset_get_Now_m61B7689A79EE921AFDBCE65FA65A942A3DA0DC6E(/*hidden argument*/NULL);
			V_3 = L_21;
			DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_22;
			L_22 = DateTimeOffset_AddDays_m0B84FA4DF82A5A20E5DF67B004FC65BE2FF180EC((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_3), (7.0), /*hidden argument*/NULL);
			NullCheck(L_20);
			CloudSpatialAnchor_set_Expiration_m56B8A430717F546E7EBBCAC5C473B1138998EE3C(L_20, L_22, /*hidden argument*/NULL);
			goto IL_0166;
		}

IL_00d9:
		{
			// await Task.Delay(330);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_23;
			L_23 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(((int32_t)330), /*hidden argument*/NULL);
			NullCheck(L_23);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_24;
			L_24 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_23, /*hidden argument*/NULL);
			V_2 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_0131;
			}
		}

IL_00f2:
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_27 = V_2;
			__this->set_U3CU3Eu__1_5(L_27);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_RuntimeMethod_var);
			goto IL_02dc;
		}

IL_0115:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_29 = __this->get_U3CU3Eu__1_5();
			V_2 = L_29;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_30 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
		}

IL_0131:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// float createProgress = CloudManager.SessionStatus.RecommendedForCreateProgress;
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_32 = V_1;
			NullCheck(L_32);
			SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * L_33;
			L_33 = DemoScriptBase_get_CloudManager_m6D281AFD5E932D8A13CAFD090E9F5B4EC4A3D453_inline(L_32, /*hidden argument*/NULL);
			NullCheck(L_33);
			SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * L_34;
			L_34 = SpatialAnchorManager_get_SessionStatus_m33DEB22F29B8C9C648C2E730169E8368F479A6AA_inline(L_33, /*hidden argument*/NULL);
			NullCheck(L_34);
			float L_35;
			L_35 = SessionStatus_get_RecommendedForCreateProgress_m7927B46B161F7373DF879EA4111AE601B0CDB30A(L_34, /*hidden argument*/NULL);
			V_4 = L_35;
			// feedbackBox.text = $"Move your device to capture more environment data: {createProgress:0%}";
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_36 = V_1;
			NullCheck(L_36);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = L_36->get_feedbackBox_7();
			float L_38 = V_4;
			float L_39 = L_38;
			RuntimeObject * L_40 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_39);
			String_t* L_41;
			L_41 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7BBDCC66485B3AB9E12433A13B5BF8E90C304F0B, L_40, /*hidden argument*/NULL);
			NullCheck(L_37);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_41);
		}

IL_0166:
		{
			// while (!CloudManager.IsReadyForCreate)
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_42 = V_1;
			NullCheck(L_42);
			SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * L_43;
			L_43 = DemoScriptBase_get_CloudManager_m6D281AFD5E932D8A13CAFD090E9F5B4EC4A3D453_inline(L_42, /*hidden argument*/NULL);
			NullCheck(L_43);
			bool L_44;
			L_44 = SpatialAnchorManager_get_IsReadyForCreate_mE2C13B748E3C03F68738A53A014AED63A2074D92(L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_00d9;
			}
		}

IL_0176:
		{
			// feedbackBox.text = "Saving...";
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_45 = V_1;
			NullCheck(L_45);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_46 = L_45->get_feedbackBox_7();
			NullCheck(L_46);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, _stringLiteral27615B845F6E2B65B574ABF6B2D147F1CE7A1A53);
		}

IL_0186:
		{
		}

IL_0187:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_47 = V_0;
				if ((((int32_t)L_47) == ((int32_t)2)))
				{
					goto IL_01d5;
				}
			}

IL_018b:
			{
				int32_t L_48 = V_0;
				if ((((int32_t)L_48) == ((int32_t)3)))
				{
					goto IL_024f;
				}
			}

IL_0192:
			{
				// await CloudManager.CreateAnchorAsync(cloudAnchor);
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_49 = V_1;
				NullCheck(L_49);
				SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * L_50;
				L_50 = DemoScriptBase_get_CloudManager_m6D281AFD5E932D8A13CAFD090E9F5B4EC4A3D453_inline(L_49, /*hidden argument*/NULL);
				CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_51 = __this->get_U3CcloudAnchorU3E5__3_4();
				NullCheck(L_50);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_52;
				L_52 = SpatialAnchorManager_CreateAnchorAsync_m8AEABF7A31FCA85E0F028AFEAD856400B1079676(L_50, L_51, /*hidden argument*/NULL);
				NullCheck(L_52);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_53;
				L_53 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_52, /*hidden argument*/NULL);
				V_2 = L_53;
				bool L_54;
				L_54 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_54)
				{
					goto IL_01f1;
				}
			}

IL_01b2:
			{
				int32_t L_55 = 2;
				V_0 = L_55;
				__this->set_U3CU3E1__state_0(L_55);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_56 = V_2;
				__this->set_U3CU3Eu__1_5(L_56);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_57 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_57, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_RuntimeMethod_var);
				goto IL_02dc;
			}

IL_01d5:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_58 = __this->get_U3CU3Eu__1_5();
				V_2 = L_58;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_59 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_59, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_60 = (-1);
				V_0 = L_60;
				__this->set_U3CU3E1__state_0(L_60);
			}

IL_01f1:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// currentCloudAnchor = cloudAnchor;
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_61 = V_1;
				CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_62 = __this->get_U3CcloudAnchorU3E5__3_4();
				NullCheck(L_61);
				L_61->set_currentCloudAnchor_10(L_62);
				// success = currentCloudAnchor != null;
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_63 = V_1;
				NullCheck(L_63);
				CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_64 = L_63->get_currentCloudAnchor_10();
				// if (success && !isErrorActive)
				if (!((!(((RuntimeObject*)(CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 *)L_64) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0))
				{
					goto IL_0274;
				}
			}

IL_020f:
			{
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_65 = V_1;
				NullCheck(L_65);
				bool L_66 = L_65->get_isErrorActive_6();
				if (L_66)
				{
					goto IL_0274;
				}
			}

IL_0217:
			{
				// await OnSaveCloudAnchorSuccessfulAsync();
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_67 = V_1;
				NullCheck(L_67);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_68;
				L_68 = VirtFuncInvoker0< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * >::Invoke(24 /* System.Threading.Tasks.Task Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::OnSaveCloudAnchorSuccessfulAsync() */, L_67);
				NullCheck(L_68);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_69;
				L_69 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_68, /*hidden argument*/NULL);
				V_2 = L_69;
				bool L_70;
				L_70 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_70)
				{
					goto IL_026b;
				}
			}

IL_022c:
			{
				int32_t L_71 = 3;
				V_0 = L_71;
				__this->set_U3CU3E1__state_0(L_71);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_72 = V_2;
				__this->set_U3CU3Eu__1_5(L_72);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_73 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_73, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231_mACD7FF4FC54CFE94C236DBF3A5A830098BF23C54_RuntimeMethod_var);
				goto IL_02dc;
			}

IL_024f:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_74 = __this->get_U3CU3Eu__1_5();
				V_2 = L_74;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_75 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_75, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_76 = (-1);
				V_0 = L_76;
				__this->set_U3CU3E1__state_0(L_76);
			}

IL_026b:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				// }
				goto IL_0284;
			}

IL_0274:
			{
				// OnSaveCloudAnchorFailed(new Exception("Failed to save, but no exception was thrown."));
				DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_77 = V_1;
				Exception_t * L_78 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
				Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_78, _stringLiteral2D1164CE08722FB8C6EEF375B61462D3D107CE6D, /*hidden argument*/NULL);
				NullCheck(L_77);
				VirtActionInvoker1< Exception_t * >::Invoke(23 /* System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::OnSaveCloudAnchorFailed(System.Exception) */, L_77, L_78);
			}

IL_0284:
			{
				// }
				goto IL_0292;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0286;
			}
			throw e;
		}

CATCH_0286:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			// OnSaveCloudAnchorFailed(ex);
			DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * L_79 = V_1;
			Exception_t * L_80 = V_5;
			NullCheck(L_79);
			VirtActionInvoker1< Exception_t * >::Invoke(23 /* System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase::OnSaveCloudAnchorFailed(System.Exception) */, L_79, L_80);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0292;
		} // end catch (depth: 2)

IL_0292:
		{
			goto IL_02bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0294;
		}
		throw e;
	}

CATCH_0294:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CcnaU3E5__2_3((CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 *)NULL);
		__this->set_U3CcloudAnchorU3E5__3_4((CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 *)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_81 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_82 = V_6;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_81, L_82, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02dc;
	} // end catch (depth: 1)

IL_02bb:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CcnaU3E5__2_3((CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 *)NULL);
		__this->set_U3CcloudAnchorU3E5__3_4((CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 *)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_83 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_83, /*hidden argument*/NULL);
	}

IL_02dc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_MoveNext_m92747CB1B5BBE421DAB87248189DA585A21DF074_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * _thisAdjusted = reinterpret_cast<U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *>(__this + _offset);
	U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_MoveNext_m92747CB1B5BBE421DAB87248189DA585A21DF074(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/<SaveCurrentObjectAnchorToCloudAsync>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_SetStateMachine_m55A94C5BC4D6096CEC0EBBCC3B0753F152016CC3 (U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_SetStateMachine_m55A94C5BC4D6096CEC0EBBCC3B0753F152016CC3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 * _thisAdjusted = reinterpret_cast<U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_t7B8ACA4909669FF4E4EF5030C6D6909342AD3231 *>(__this + _offset);
	U3CSaveCurrentObjectAnchorToCloudAsyncU3Ed__41_SetStateMachine_m55A94C5BC4D6096CEC0EBBCC3B0753F152016CC3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
IL2CPP_EXTERN_C void DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshal_pinvoke(const DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435& unmarshaled, DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CStepColorU3Ek__BackingField_0 = unmarshaled.get_U3CStepColorU3Ek__BackingField_0();
	marshaled.___U3CStepMessageU3Ek__BackingField_1 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CStepMessageU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshal_pinvoke_back(const DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_pinvoke& marshaled, DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435& unmarshaled)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_U3CStepColorU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CStepColorU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CStepColorU3Ek__BackingField_temp_0));
	unmarshaled_U3CStepColorU3Ek__BackingField_temp_0 = marshaled.___U3CStepColorU3Ek__BackingField_0;
	unmarshaled.set_U3CStepColorU3Ek__BackingField_0(unmarshaled_U3CStepColorU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CStepMessageU3Ek__BackingField_1(il2cpp_codegen_marshal_string_result(marshaled.___U3CStepMessageU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
IL2CPP_EXTERN_C void DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshal_pinvoke_cleanup(DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CStepMessageU3Ek__BackingField_1);
	marshaled.___U3CStepMessageU3Ek__BackingField_1 = NULL;
}
// Conversion methods for marshalling of: Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
IL2CPP_EXTERN_C void DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshal_com(const DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435& unmarshaled, DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_com& marshaled)
{
	marshaled.___U3CStepColorU3Ek__BackingField_0 = unmarshaled.get_U3CStepColorU3Ek__BackingField_0();
	marshaled.___U3CStepMessageU3Ek__BackingField_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CStepMessageU3Ek__BackingField_1());
}
IL2CPP_EXTERN_C void DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshal_com_back(const DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_com& marshaled, DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435& unmarshaled)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  unmarshaled_U3CStepColorU3Ek__BackingField_temp_0;
	memset((&unmarshaled_U3CStepColorU3Ek__BackingField_temp_0), 0, sizeof(unmarshaled_U3CStepColorU3Ek__BackingField_temp_0));
	unmarshaled_U3CStepColorU3Ek__BackingField_temp_0 = marshaled.___U3CStepColorU3Ek__BackingField_0;
	unmarshaled.set_U3CStepColorU3Ek__BackingField_0(unmarshaled_U3CStepColorU3Ek__BackingField_temp_0);
	unmarshaled.set_U3CStepMessageU3Ek__BackingField_1(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CStepMessageU3Ek__BackingField_1));
}
// Conversion method for clean up from marshalling of: Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams
IL2CPP_EXTERN_C void DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshal_com_cleanup(DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CStepMessageU3Ek__BackingField_1);
	marshaled.___U3CStepMessageU3Ek__BackingField_1 = NULL;
}
// UnityEngine.Color Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::get_StepColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  DemoStepParams_get_StepColor_mEBBD917E73848A6D0800A093A0E2FA73DE8E05FD (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, const RuntimeMethod* method)
{
	{
		// public Color StepColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CStepColorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  DemoStepParams_get_StepColor_mEBBD917E73848A6D0800A093A0E2FA73DE8E05FD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * _thisAdjusted = reinterpret_cast<DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 *>(__this + _offset);
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  _returnValue;
	_returnValue = DemoStepParams_get_StepColor_mEBBD917E73848A6D0800A093A0E2FA73DE8E05FD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::set_StepColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoStepParams_set_StepColor_mD9088D3C0CF89FAB1A47C13C8A93040FA6DAE795 (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color StepColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_U3CStepColorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DemoStepParams_set_StepColor_mD9088D3C0CF89FAB1A47C13C8A93040FA6DAE795_AdjustorThunk (RuntimeObject * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * _thisAdjusted = reinterpret_cast<DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 *>(__this + _offset);
	DemoStepParams_set_StepColor_mD9088D3C0CF89FAB1A47C13C8A93040FA6DAE795_inline(_thisAdjusted, ___value0, method);
}
// System.String Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::get_StepMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DemoStepParams_get_StepMessage_mE92A0D5811233BF6414A44C0CD51471C8C4B8B41 (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, const RuntimeMethod* method)
{
	{
		// public string StepMessage { get; set; }
		String_t* L_0 = __this->get_U3CStepMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* DemoStepParams_get_StepMessage_mE92A0D5811233BF6414A44C0CD51471C8C4B8B41_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * _thisAdjusted = reinterpret_cast<DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = DemoStepParams_get_StepMessage_mE92A0D5811233BF6414A44C0CD51471C8C4B8B41_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.DemoScriptBase/DemoStepParams::set_StepMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoStepParams_set_StepMessage_m425D0A01E6C8A4A552070B270CEB82E57FF54CED (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string StepMessage { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CStepMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void DemoStepParams_set_StepMessage_m425D0A01E6C8A4A552070B270CEB82E57FF54CED_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * _thisAdjusted = reinterpret_cast<DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 *>(__this + _offset);
	DemoStepParams_set_StepMessage_m425D0A01E6C8A4A552070B270CEB82E57FF54CED_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate__ctor_m6DFCEE099C96781241186B1537B313641CC3A8AB (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_Invoke_mEC016D4928ADCA613702B28C1E3378F7EC29B58C (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExplodeViewControllerDelegate_BeginInvoke_m458C786F225088793798F9A79882A606822BD0B9 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.ExplodeViewController/ExplodeViewControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExplodeViewControllerDelegate_EndInvoke_m1190D2F43012408A716B9FC790DEB913A85D9476 (ExplodeViewControllerDelegate_t2A8817BBA114CB1BACBDD57F603A535EE9E25856 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25__ctor_m1AE9DAAD6457E2BA3C8AF018FC38B348AEEAFD35 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_IDisposable_Dispose_m5F0CAD7B8EEB902CEC60BA6283E5D2176899ECD0 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckPlacementU3Ed__25_MoveNext_mDF7F144AFC4007613EFED9BAC836382AE491AD0A (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(0.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!isPlaced)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = L_5->get_isPlaced_19();
		if (L_6)
		{
			goto IL_0092;
		}
	}
	{
		// if (Vector3.Distance(transform.position, locationToPlace.position) > MinDistance &&
		//     Vector3.Distance(transform.position, locationToPlace.position) < MaxDistance)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_locationToPlace_4();
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_9, L_12, /*hidden argument*/NULL);
		if ((!(((float)L_13) > ((float)(0.00100000005f)))))
		{
			goto IL_001e;
		}
	}
	{
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_14 = V_1;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = L_17->get_locationToPlace_4();
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20;
		L_20 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_16, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)(0.100000001f)))))
		{
			goto IL_001e;
		}
	}
	{
		// SetPlacement();
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_21 = V_1;
		NullCheck(L_21);
		PartAssemblyController_SetPlacement_mB6BDE1A16F74DF3B4950483F7C58E3201B0A0851(L_21, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_0092:
	{
		// else if (isPlaced)
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_22 = V_1;
		NullCheck(L_22);
		bool L_23 = L_22->get_isPlaced_19();
		if (!L_23)
		{
			goto IL_00eb;
		}
	}
	{
		// if (!(Vector3.Distance(transform.position, locationToPlace.position) > MinDistance)) continue;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_24 = V_1;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28 = L_27->get_locationToPlace_4();
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		float L_30;
		L_30 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_26, L_29, /*hidden argument*/NULL);
		if ((!(((float)L_30) > ((float)(0.00100000005f)))))
		{
			goto IL_001e;
		}
	}
	{
		// var trans = transform;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_31 = V_1;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_31, /*hidden argument*/NULL);
		// trans.position = locationToPlace.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = L_32;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_34 = V_1;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = L_34->get_locationToPlace_4();
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_33, L_36, /*hidden argument*/NULL);
		// trans.rotation = locationToPlace.rotation;
		PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * L_37 = V_1;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = L_37->get_locationToPlace_4();
		NullCheck(L_38);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_33, L_39, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_00eb:
	{
		// }
		return (bool)0;
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckPlacementU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2770AE4D2AC80980A1982783D11A2A481D1F5AD (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_Reset_m3B06BF13F7C5A5FD0544E0A77EF07BF84BEB6237_RuntimeMethod_var)));
	}
}
// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckPlacementU3Ed__25_System_Collections_IEnumerator_get_Current_mF23A2B08C5CAD169D0663319DCDF005B7BF30371 (U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate__ctor_m1B455F877BBF4D8B34BAA0778ABFA1B0C8FB3C87 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_Invoke_m35EC047435BEF3AC833FE7F6FDED12C1D2FAF2F9 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PartAssemblyControllerDelegate_BeginInvoke_mE2B0F86102E0D5E6BCD5ADDF6FE25CC9FC8A06D2 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.PartAssemblyController/PartAssemblyControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartAssemblyControllerDelegate_EndInvoke_m3BC4B8B7B165CE27C98FCB26D91E4E7004F5DA92 (PartAssemblyControllerDelegate_t645F711A79641A3C4F9328CCC25A0678AA556155 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate__ctor_mC6033B0A83C28817C35AC67DB8440C7B75CA605B (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_Invoke_mD8415531C38108E1B7B41AB3C5BE9ED938DE5BAA (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlacementHintsControllerDelegate_BeginInvoke_m729BAD5B777CAC07017B397546C8485D026C1672 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void MRTK.Tutorials.GettingStarted.PlacementHintsController/PlacementHintsControllerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlacementHintsControllerDelegate_EndInvoke_m5245DC13168B9F203E7495622C99EA9C6EC60327 (PlacementHintsControllerDelegate_tA8097CCD8F1D1CEFDF484D7D9E4CFFB5E6083F87 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_MoveNext_mD1CC99FFB57F0A8031574CB27AF40C9E811F89EC (U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral272298C555A55DB344383F15E2CC5414E2554E8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC6BE263333BF3C804BDBC3B7D234237A991D04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA5B4838089D19C21A5321528CF32839A8B4D8C1);
		s_Il2CppMethodInitialized = true;
	}
	SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * L_0 = __this->get_U3CU3E4__this_2();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			// if (SelectedSceneNameText == null)
			SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * L_1 = V_0;
			NullCheck(L_1);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = L_1->get_SelectedSceneNameText_4();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0021;
			}
		}

IL_0015:
		{
			// Debug.Log("Missing text field");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral272298C555A55DB344383F15E2CC5414E2554E8F, /*hidden argument*/NULL);
			// return;
			goto IL_0070;
		}

IL_0021:
		{
			// GetScenes();
			SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * L_4 = V_0;
			NullCheck(L_4);
			SceneSelector_GetScenes_mFDE4EF37CA475BDCC143EF798C655F93D276E050(L_4, /*hidden argument*/NULL);
			// if (SceneBuildIndices.Count == 0)
			SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * L_5 = V_0;
			NullCheck(L_5);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = L_5->get_SceneBuildIndices_5();
			NullCheck(L_6);
			int32_t L_7;
			L_7 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_6, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0050;
			}
		}

IL_0034:
		{
			// SelectedSceneNameText.text = "No scenes";
			SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * L_8 = V_0;
			NullCheck(L_8);
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_SelectedSceneNameText_4();
			NullCheck(L_9);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral2BC6BE263333BF3C804BDBC3B7D234237A991D04);
			// Debug.Log("Not enough scenes in the build");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBA5B4838089D19C21A5321528CF32839A8B4D8C1, /*hidden argument*/NULL);
			// return;
			goto IL_0070;
		}

IL_0050:
		{
			// SceneIndex = 0;
			SceneSelector_tB6E9F9B683F367A84BD2EE4DD84D189BC333754B * L_10 = V_0;
			NullCheck(L_10);
			SceneSelector_set_SceneIndex_mC6A691316F4CA46A0320E815FB8E74265F2E5CA1(L_10, 0, /*hidden argument*/NULL);
			goto IL_0070;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0059;
		}
		throw e;
	}

CATCH_0059:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_12 = V_1;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, L_12, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	} // end catch (depth: 1)

IL_0070:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, /*hidden argument*/NULL);
	}

IL_0083:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__6_MoveNext_mD1CC99FFB57F0A8031574CB27AF40C9E811F89EC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC *>(__this + _offset);
	U3CStartU3Ed__6_MoveNext_mD1CC99FFB57F0A8031574CB27AF40C9E811F89EC(_thisAdjusted, method);
}
// System.Void Microsoft.Azure.SpatialAnchors.Unity.Examples.SceneSelector/<Start>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__6_SetStateMachine_m407CF756744F12AFBD52E3F71C192B93D0884A38 (U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__6_SetStateMachine_m407CF756744F12AFBD52E3F71C192B93D0884A38_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__6_t8F01DA4F9589D06FCB4D269706EC35E1519583EC *>(__this + _offset);
	U3CStartU3Ed__6_SetStateMachine_m407CF756744F12AFBD52E3F71C192B93D0884A38(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AzureSpatialAnchorsSharedAnchorDemoScript_get_currentAppState_m2590953C83AAD3C10B7023879CE394176476677B_inline (AzureSpatialAnchorsSharedAnchorDemoScript_t294D15429C85E91768F2760E0E014D875CC2C332 * __this, const RuntimeMethod* method)
{
	{
		// return _currentAppState;
		int32_t L_0 = __this->get__currentAppState_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * CloudNativeAnchor_get_CloudAnchor_m84BC3F7D1E2D83BA6D7AB0357848A8535FA68DBA_inline (CloudNativeAnchor_t72BB9F460E69F41DC133B927F8E72735C4111AE9 * __this, const RuntimeMethod* method)
{
	{
		// public CloudSpatialAnchor CloudAnchor { get { return cloudAnchor; } }
		CloudSpatialAnchor_t93440F1D5697474C9EF56E8FFB89AF8900D13877 * L_0 = __this->get_cloudAnchor_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * DemoScriptBase_get_CloudManager_m6D281AFD5E932D8A13CAFD090E9F5B4EC4A3D453_inline (DemoScriptBase_t9B4657937300352289E4E86DBC524309F9BA12D9 * __this, const RuntimeMethod* method)
{
	{
		// public SpatialAnchorManager CloudManager { get { return cloudManager; } }
		SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * L_0 = __this->get_cloudManager_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * SpatialAnchorManager_get_SessionStatus_m33DEB22F29B8C9C648C2E730169E8368F479A6AA_inline (SpatialAnchorManager_t1156F8BE3B95187830DC5E8DD1181380E86C2EC0 * __this, const RuntimeMethod* method)
{
	{
		// public SessionStatus SessionStatus { get { return sessionStatus; } }
		SessionStatus_t69972DBA5EFF592D65F0E3A96C1915EC34A67329 * L_0 = __this->get_sessionStatus_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  DemoStepParams_get_StepColor_mEBBD917E73848A6D0800A093A0E2FA73DE8E05FD_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, const RuntimeMethod* method)
{
	{
		// public Color StepColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_U3CStepColorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoStepParams_set_StepColor_mD9088D3C0CF89FAB1A47C13C8A93040FA6DAE795_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	{
		// public Color StepColor { get; set; }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = ___value0;
		__this->set_U3CStepColorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DemoStepParams_get_StepMessage_mE92A0D5811233BF6414A44C0CD51471C8C4B8B41_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, const RuntimeMethod* method)
{
	{
		// public string StepMessage { get; set; }
		String_t* L_0 = __this->get_U3CStepMessageU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DemoStepParams_set_StepMessage_m425D0A01E6C8A4A552070B270CEB82E57FF54CED_inline (DemoStepParams_t5AC7C373223E6B10FA08E99ABDF8CB772FC6D435 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string StepMessage { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CStepMessageU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
