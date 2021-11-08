#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Type>
struct Action_1_t87684BD53C55B58E136F9DA7668485600A621945;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String[]>>
struct Func_2_tD6A0EC613C3BE7C360DC94227B4525DD6B670887;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<UnityEngine.Vector2,System.Single>
struct Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0;
// System.Func`2<UnityEngine.Vector3,System.Single>
struct Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// System.Threading.Tasks.TaskCompletionSource`1<System.String[]>
struct TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult>
struct TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F;
// System.Threading.Tasks.TaskFactory`1<System.String[]>
struct TaskFactory_1_tCCBC5EBEC2D5C751DEDEFF77E47524A4E170C593;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult>
struct Task_1_t5EFD263CF4AD07E7B1665E1AA4462C2E82DDA7FF;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Diagnostics.DataReceivedEventHandler
struct DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t95FF063A5295003D96C3C680EDF773DDF830DBF9;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
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
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A;
// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData
struct MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData
struct QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782;
// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14;
// Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009;
// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c
struct U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m6E5A0CDF553104E330C362D75511DB72C9027D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m2D4FF7FB34C4AC061B85D9442B3D2402430691FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mB3F161DC4F3BF612ED6AD50457DC763F92395F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_1_U3CStartProcessAsyncU3Eb__4_mE1E6BA411CF298C69508EDFD4B78F4830E12DA7B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____items_1)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__items_1() const { return ____items_1; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7_StaticFields, ____emptyArray_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____array_0)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.String[]>
struct TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0, ___m_task_0)); }
	inline Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult>
struct TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t5EFD263CF4AD07E7B1665E1AA4462C2E82DDA7FF * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F, ___m_task_0)); }
	inline Task_1_t5EFD263CF4AD07E7B1665E1AA4462C2E82DDA7FF * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t5EFD263CF4AD07E7B1665E1AA4462C2E82DDA7FF ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t5EFD263CF4AD07E7B1665E1AA4462C2E82DDA7FF * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_1
struct U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384  : public RuntimeObject
{
public:
	// System.Diagnostics.Process Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_1::_process
	Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * ____process_0;
	// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0 Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of__process_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384, ____process_0)); }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * get__process_0() const { return ____process_0; }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 ** get_address_of__process_0() { return &____process_0; }
	inline void set__process_0(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * value)
	{
		____process_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData
struct MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Indices>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CIndicesU3Ek__BackingField_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<Vertices>k__BackingField
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CVerticesU3Ek__BackingField_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<UVs>k__BackingField
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3CUVsU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F, ___U3CIndicesU3Ek__BackingField_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CIndicesU3Ek__BackingField_1() const { return ___U3CIndicesU3Ek__BackingField_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CIndicesU3Ek__BackingField_1() { return &___U3CIndicesU3Ek__BackingField_1; }
	inline void set_U3CIndicesU3Ek__BackingField_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CIndicesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIndicesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVerticesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F, ___U3CVerticesU3Ek__BackingField_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CVerticesU3Ek__BackingField_2() const { return ___U3CVerticesU3Ek__BackingField_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CVerticesU3Ek__BackingField_2() { return &___U3CVerticesU3Ek__BackingField_2; }
	inline void set_U3CVerticesU3Ek__BackingField_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CVerticesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVerticesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUVsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F, ___U3CUVsU3Ek__BackingField_3)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3CUVsU3Ek__BackingField_3() const { return ___U3CUVsU3Ek__BackingField_3; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3CUVsU3Ek__BackingField_3() { return &___U3CUVsU3Ek__BackingField_3; }
	inline void set_U3CUVsU3Ek__BackingField_3(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3CUVsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUVsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F, ___U3CGameObjectU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_4() const { return ___U3CGameObjectU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_4() { return &___U3CGameObjectU3Ek__BackingField_4; }
	inline void set_U3CGameObjectU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8
struct U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::startTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___startTransform_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<>3__startTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::<transform>5__2
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtransformU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_includeSelf_3() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___includeSelf_3)); }
	inline bool get_includeSelf_3() const { return ___includeSelf_3; }
	inline bool* get_address_of_includeSelf_3() { return &___includeSelf_3; }
	inline void set_includeSelf_3(bool value)
	{
		___includeSelf_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_4() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___U3CU3E3__includeSelf_4)); }
	inline bool get_U3CU3E3__includeSelf_4() const { return ___U3CU3E3__includeSelf_4; }
	inline bool* get_address_of_U3CU3E3__includeSelf_4() { return &___U3CU3E3__includeSelf_4; }
	inline void set_U3CU3E3__includeSelf_4(bool value)
	{
		___U3CU3E3__includeSelf_4 = value;
	}

	inline static int32_t get_offset_of_startTransform_5() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___startTransform_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_startTransform_5() const { return ___startTransform_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_startTransform_5() { return &___startTransform_5; }
	inline void set_startTransform_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___startTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__startTransform_6() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___U3CU3E3__startTransform_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__startTransform_6() const { return ___U3CU3E3__startTransform_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__startTransform_6() { return &___U3CU3E3__startTransform_6; }
	inline void set_U3CU3E3__startTransform_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__startTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__startTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782, ___U3CtransformU3E5__2_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtransformU3E5__2_7() const { return ___U3CtransformU3E5__2_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtransformU3E5__2_7() { return &___U3CtransformU3E5__2_7; }
	inline void set_U3CtransformU3E5__2_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtransformU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * ___U3CtransformQueueU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___root_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_root_3() const { return ___root_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___U3CU3E3__root_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___ignore_5)); }
	inline RuntimeObject* get_ignore_5() const { return ___ignore_5; }
	inline RuntimeObject** get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(RuntimeObject* value)
	{
		___ignore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignore_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ignore_6() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___U3CU3E3__ignore_6)); }
	inline RuntimeObject* get_U3CU3E3__ignore_6() const { return ___U3CU3E3__ignore_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__ignore_6() { return &___U3CU3E3__ignore_6; }
	inline void set_U3CU3E3__ignore_6(RuntimeObject* value)
	{
		___U3CU3E3__ignore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__ignore_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformQueueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14, ___U3CtransformQueueU3E5__2_7)); }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * get_U3CtransformQueueU3E5__2_7() const { return ___U3CtransformQueueU3E5__2_7; }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 ** get_address_of_U3CtransformQueueU3E5__2_7() { return &___U3CtransformQueueU3E5__2_7; }
	inline void set_U3CtransformQueueU3E5__2_7(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * value)
	{
		___U3CtransformQueueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformQueueU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009  : public RuntimeObject
{
public:
	// System.Type Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::rootType
	Type_t * ___rootType_0;
	// System.Collections.Generic.List`1<System.Type> Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::results
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___results_1;
	// System.Action`1<System.Type> Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<>9__1
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * ___U3CU3E9__1_2;

public:
	inline static int32_t get_offset_of_rootType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009, ___rootType_0)); }
	inline Type_t * get_rootType_0() const { return ___rootType_0; }
	inline Type_t ** get_address_of_rootType_0() { return &___rootType_0; }
	inline void set_rootType_0(Type_t * value)
	{
		___rootType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootType_0), (void*)value);
	}

	inline static int32_t get_offset_of_results_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009, ___results_1)); }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * get_results_1() const { return ___results_1; }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 ** get_address_of_results_1() { return &___results_1; }
	inline void set_results_1(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * value)
	{
		___results_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009, ___U3CU3E9__1_2)); }
	inline Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Action_1_t87684BD53C55B58E136F9DA7668485600A621945 ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c
struct U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.VectorExtensions/<>c Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9
	U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__12_0
	Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * ___U3CU3E9__12_0_1;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__13_0
	Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * ___U3CU3E9__13_0_2;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__14_0
	Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * ___U3CU3E9__14_0_3;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<>9__15_0
	Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * ___U3CU3E9__15_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields, ___U3CU3E9__13_0_2)); }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * get_U3CU3E9__13_0_2() const { return ___U3CU3E9__13_0_2; }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 ** get_address_of_U3CU3E9__13_0_2() { return &___U3CU3E9__13_0_2; }
	inline void set_U3CU3E9__13_0_2(Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * value)
	{
		___U3CU3E9__13_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields, ___U3CU3E9__14_0_3)); }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * get_U3CU3E9__14_0_3() const { return ___U3CU3E9__14_0_3; }
	inline Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 ** get_address_of_U3CU3E9__14_0_3() { return &___U3CU3E9__14_0_3; }
	inline void set_U3CU3E9__14_0_3(Func_2_t88FD73BC154754D1A5E182FE53893B7A87DE89B0 * value)
	{
		___U3CU3E9__14_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields, ___U3CU3E9__15_0_4)); }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * get_U3CU3E9__15_0_4() const { return ___U3CU3E9__15_0_4; }
	inline Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 ** get_address_of_U3CU3E9__15_0_4() { return &___U3CU3E9__15_0_4; }
	inline void set_U3CU3E9__15_0_4(Func_2_tA7E42B5C52A626BFD82AA10BB059EFA95FB034D5 * value)
	{
		___U3CU3E9__15_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_4), (void*)value);
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


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>
struct TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983, ___m_task_0)); }
	inline Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * value)
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Utilities.ProcessResult
struct ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ProcessResult::<ExitCode>k__BackingField
	int32_t ___U3CExitCodeU3Ek__BackingField_0;
	// System.String[] Microsoft.MixedReality.Toolkit.Utilities.ProcessResult::<Errors>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CErrorsU3Ek__BackingField_1;
	// System.String[] Microsoft.MixedReality.Toolkit.Utilities.ProcessResult::<Output>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3COutputU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CExitCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4, ___U3CExitCodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CExitCodeU3Ek__BackingField_0() const { return ___U3CExitCodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CExitCodeU3Ek__BackingField_0() { return &___U3CExitCodeU3Ek__BackingField_0; }
	inline void set_U3CExitCodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CExitCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4, ___U3CErrorsU3Ek__BackingField_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CErrorsU3Ek__BackingField_1() const { return ___U3CErrorsU3Ek__BackingField_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CErrorsU3Ek__BackingField_1() { return &___U3CErrorsU3Ek__BackingField_1; }
	inline void set_U3CErrorsU3Ek__BackingField_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CErrorsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COutputU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4, ___U3COutputU3Ek__BackingField_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3COutputU3Ek__BackingField_2() const { return ___U3COutputU3Ek__BackingField_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3COutputU3Ek__BackingField_2() { return &___U3COutputU3Ek__BackingField_2; }
	inline void set_U3COutputU3Ek__BackingField_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3COutputU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.ProcessResult
struct ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4_marshaled_pinvoke
{
	int32_t ___U3CExitCodeU3Ek__BackingField_0;
	char** ___U3CErrorsU3Ek__BackingField_1;
	char** ___U3COutputU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.ProcessResult
struct ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4_marshaled_com
{
	int32_t ___U3CExitCodeU3Ek__BackingField_0;
	Il2CppChar** ___U3CErrorsU3Ek__BackingField_1;
	Il2CppChar** ___U3COutputU3Ek__BackingField_2;
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

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
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


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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

// System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3 
{
public:
	// System.Boolean System.Threading.Tasks.ParallelLoopResult::m_completed
	bool ___m_completed_0;
	// System.Nullable`1<System.Int64> System.Threading.Tasks.ParallelLoopResult::m_lowestBreakIteration
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;

public:
	inline static int32_t get_offset_of_m_completed_0() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_completed_0)); }
	inline bool get_m_completed_0() const { return ___m_completed_0; }
	inline bool* get_address_of_m_completed_0() { return &___m_completed_0; }
	inline void set_m_completed_0(bool value)
	{
		___m_completed_0 = value;
	}

	inline static int32_t get_offset_of_m_lowestBreakIteration_1() { return static_cast<int32_t>(offsetof(ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3, ___m_lowestBreakIteration_1)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get_m_lowestBreakIteration_1() const { return ___m_lowestBreakIteration_1; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of_m_lowestBreakIteration_1() { return &___m_lowestBreakIteration_1; }
	inline void set_m_lowestBreakIteration_1(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		___m_lowestBreakIteration_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_pinvoke
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
};
// Native definition for COM marshalling of System.Threading.Tasks.ParallelLoopResult
struct ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3_marshaled_com
{
	int32_t ___m_completed_0;
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ___m_lowestBreakIteration_1;
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


// System.Diagnostics.Process/StreamReadMode
struct StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A 
{
public:
	// System.Int32 System.Diagnostics.Process/StreamReadMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::processResult
	TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * ___processResult_0;
	// System.Diagnostics.Process Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::process
	Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * ___process_1;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String[]> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::errorCodeResult
	TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * ___errorCodeResult_2;
	// System.Threading.Tasks.TaskCompletionSource`1<System.String[]> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::outputCodeResult
	TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * ___outputCodeResult_3;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::errorList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___errorList_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::showDebug
	bool ___showDebug_5;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::outputList
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___outputList_6;
	// System.Threading.CancellationToken Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_7;

public:
	inline static int32_t get_offset_of_processResult_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___processResult_0)); }
	inline TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * get_processResult_0() const { return ___processResult_0; }
	inline TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F ** get_address_of_processResult_0() { return &___processResult_0; }
	inline void set_processResult_0(TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * value)
	{
		___processResult_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processResult_0), (void*)value);
	}

	inline static int32_t get_offset_of_process_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___process_1)); }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * get_process_1() const { return ___process_1; }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 ** get_address_of_process_1() { return &___process_1; }
	inline void set_process_1(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * value)
	{
		___process_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_1), (void*)value);
	}

	inline static int32_t get_offset_of_errorCodeResult_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___errorCodeResult_2)); }
	inline TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * get_errorCodeResult_2() const { return ___errorCodeResult_2; }
	inline TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 ** get_address_of_errorCodeResult_2() { return &___errorCodeResult_2; }
	inline void set_errorCodeResult_2(TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * value)
	{
		___errorCodeResult_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorCodeResult_2), (void*)value);
	}

	inline static int32_t get_offset_of_outputCodeResult_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___outputCodeResult_3)); }
	inline TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * get_outputCodeResult_3() const { return ___outputCodeResult_3; }
	inline TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 ** get_address_of_outputCodeResult_3() { return &___outputCodeResult_3; }
	inline void set_outputCodeResult_3(TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * value)
	{
		___outputCodeResult_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputCodeResult_3), (void*)value);
	}

	inline static int32_t get_offset_of_errorList_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___errorList_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_errorList_4() const { return ___errorList_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_errorList_4() { return &___errorList_4; }
	inline void set_errorList_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___errorList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorList_4), (void*)value);
	}

	inline static int32_t get_offset_of_showDebug_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___showDebug_5)); }
	inline bool get_showDebug_5() const { return ___showDebug_5; }
	inline bool* get_address_of_showDebug_5() { return &___showDebug_5; }
	inline void set_showDebug_5(bool value)
	{
		___showDebug_5 = value;
	}

	inline static int32_t get_offset_of_outputList_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___outputList_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_outputList_6() const { return ___outputList_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_outputList_6() { return &___outputList_6; }
	inline void set_outputList_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___outputList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputList_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A, ___cancellationToken_7)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_7() const { return ___cancellationToken_7; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_7() { return &___cancellationToken_7; }
	inline void set_cancellationToken_7(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_7))->___m_source_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData
struct QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<Extents>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CExtentsU3Ek__BackingField_1;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<OcclusionMask>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3COcclusionMaskU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CExtentsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E, ___U3CExtentsU3Ek__BackingField_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CExtentsU3Ek__BackingField_1() const { return ___U3CExtentsU3Ek__BackingField_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CExtentsU3Ek__BackingField_1() { return &___U3CExtentsU3Ek__BackingField_1; }
	inline void set_U3CExtentsU3Ek__BackingField_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CExtentsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3COcclusionMaskU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E, ___U3COcclusionMaskU3Ek__BackingField_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3COcclusionMaskU3Ek__BackingField_2() const { return ___U3COcclusionMaskU3Ek__BackingField_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3COcclusionMaskU3Ek__BackingField_2() { return &___U3COcclusionMaskU3Ek__BackingField_2; }
	inline void set_U3COcclusionMaskU3Ek__BackingField_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3COcclusionMaskU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COcclusionMaskU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E, ___U3CGameObjectU3Ek__BackingField_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_3() const { return ___U3CGameObjectU3Ek__BackingField_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_3() { return &___U3CGameObjectU3Ek__BackingField_3; }
	inline void set_U3CGameObjectU3Ek__BackingField_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_3), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String[]>
struct Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09, ___m_result_40)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_result_40() const { return ___m_result_40; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCCBC5EBEC2D5C751DEDEFF77E47524A4E170C593 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD6A0EC613C3BE7C360DC94227B4525DD6B670887 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCCBC5EBEC2D5C751DEDEFF77E47524A4E170C593 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCCBC5EBEC2D5C751DEDEFF77E47524A4E170C593 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCCBC5EBEC2D5C751DEDEFF77E47524A4E170C593 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD6A0EC613C3BE7C360DC94227B4525DD6B670887 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD6A0EC613C3BE7C360DC94227B4525DD6B670887 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD6A0EC613C3BE7C360DC94227B4525DD6B670887 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
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

// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_14;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * ___startInfo_15;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_16;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_17;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onExited_18;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_19;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_20;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_21;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_22;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_23;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * ___registeredWaitHandle_24;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * ___waitHandle_25;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_26;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardOutput_27;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___standardInput_28;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardError_29;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_30;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_31;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_32;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_33;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::OutputDataReceived
	DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * ___OutputDataReceived_34;
	// System.Diagnostics.DataReceivedEventHandler System.Diagnostics.Process::ErrorDataReceived
	DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * ___ErrorDataReceived_35;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___output_36;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___error_37;
	// System.Boolean System.Diagnostics.Process::pendingOutputRead
	bool ___pendingOutputRead_38;
	// System.Boolean System.Diagnostics.Process::pendingErrorRead
	bool ___pendingErrorRead_39;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_40;

public:
	inline static int32_t get_offset_of_haveProcessId_4() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessId_4)); }
	inline bool get_haveProcessId_4() const { return ___haveProcessId_4; }
	inline bool* get_address_of_haveProcessId_4() { return &___haveProcessId_4; }
	inline void set_haveProcessId_4(bool value)
	{
		___haveProcessId_4 = value;
	}

	inline static int32_t get_offset_of_processId_5() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___processId_5)); }
	inline int32_t get_processId_5() const { return ___processId_5; }
	inline int32_t* get_address_of_processId_5() { return &___processId_5; }
	inline void set_processId_5(int32_t value)
	{
		___processId_5 = value;
	}

	inline static int32_t get_offset_of_haveProcessHandle_6() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessHandle_6)); }
	inline bool get_haveProcessHandle_6() const { return ___haveProcessHandle_6; }
	inline bool* get_address_of_haveProcessHandle_6() { return &___haveProcessHandle_6; }
	inline void set_haveProcessHandle_6(bool value)
	{
		___haveProcessHandle_6 = value;
	}

	inline static int32_t get_offset_of_m_processHandle_7() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processHandle_7)); }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * get_m_processHandle_7() const { return ___m_processHandle_7; }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C ** get_address_of_m_processHandle_7() { return &___m_processHandle_7; }
	inline void set_m_processHandle_7(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * value)
	{
		___m_processHandle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_processHandle_7), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteMachine_8() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___isRemoteMachine_8)); }
	inline bool get_isRemoteMachine_8() const { return ___isRemoteMachine_8; }
	inline bool* get_address_of_isRemoteMachine_8() { return &___isRemoteMachine_8; }
	inline void set_isRemoteMachine_8(bool value)
	{
		___isRemoteMachine_8 = value;
	}

	inline static int32_t get_offset_of_machineName_9() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___machineName_9)); }
	inline String_t* get_machineName_9() const { return ___machineName_9; }
	inline String_t** get_address_of_machineName_9() { return &___machineName_9; }
	inline void set_machineName_9(String_t* value)
	{
		___machineName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___machineName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_processAccess_10() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processAccess_10)); }
	inline int32_t get_m_processAccess_10() const { return ___m_processAccess_10; }
	inline int32_t* get_address_of_m_processAccess_10() { return &___m_processAccess_10; }
	inline void set_m_processAccess_10(int32_t value)
	{
		___m_processAccess_10 = value;
	}

	inline static int32_t get_offset_of_threads_11() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___threads_11)); }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * get_threads_11() const { return ___threads_11; }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 ** get_address_of_threads_11() { return &___threads_11; }
	inline void set_threads_11(ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * value)
	{
		___threads_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_11), (void*)value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___modules_12)); }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * get_modules_12() const { return ___modules_12; }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 ** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modules_12), (void*)value);
	}

	inline static int32_t get_offset_of_haveWorkingSetLimits_13() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveWorkingSetLimits_13)); }
	inline bool get_haveWorkingSetLimits_13() const { return ___haveWorkingSetLimits_13; }
	inline bool* get_address_of_haveWorkingSetLimits_13() { return &___haveWorkingSetLimits_13; }
	inline void set_haveWorkingSetLimits_13(bool value)
	{
		___haveWorkingSetLimits_13 = value;
	}

	inline static int32_t get_offset_of_havePriorityClass_14() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___havePriorityClass_14)); }
	inline bool get_havePriorityClass_14() const { return ___havePriorityClass_14; }
	inline bool* get_address_of_havePriorityClass_14() { return &___havePriorityClass_14; }
	inline void set_havePriorityClass_14(bool value)
	{
		___havePriorityClass_14 = value;
	}

	inline static int32_t get_offset_of_startInfo_15() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___startInfo_15)); }
	inline ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * get_startInfo_15() const { return ___startInfo_15; }
	inline ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 ** get_address_of_startInfo_15() { return &___startInfo_15; }
	inline void set_startInfo_15(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * value)
	{
		___startInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_watchForExit_16() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchForExit_16)); }
	inline bool get_watchForExit_16() const { return ___watchForExit_16; }
	inline bool* get_address_of_watchForExit_16() { return &___watchForExit_16; }
	inline void set_watchForExit_16(bool value)
	{
		___watchForExit_16 = value;
	}

	inline static int32_t get_offset_of_watchingForExit_17() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchingForExit_17)); }
	inline bool get_watchingForExit_17() const { return ___watchingForExit_17; }
	inline bool* get_address_of_watchingForExit_17() { return &___watchingForExit_17; }
	inline void set_watchingForExit_17(bool value)
	{
		___watchingForExit_17 = value;
	}

	inline static int32_t get_offset_of_onExited_18() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___onExited_18)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onExited_18() const { return ___onExited_18; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onExited_18() { return &___onExited_18; }
	inline void set_onExited_18(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onExited_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_18), (void*)value);
	}

	inline static int32_t get_offset_of_exited_19() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exited_19)); }
	inline bool get_exited_19() const { return ___exited_19; }
	inline bool* get_address_of_exited_19() { return &___exited_19; }
	inline void set_exited_19(bool value)
	{
		___exited_19 = value;
	}

	inline static int32_t get_offset_of_exitCode_20() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exitCode_20)); }
	inline int32_t get_exitCode_20() const { return ___exitCode_20; }
	inline int32_t* get_address_of_exitCode_20() { return &___exitCode_20; }
	inline void set_exitCode_20(int32_t value)
	{
		___exitCode_20 = value;
	}

	inline static int32_t get_offset_of_signaled_21() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___signaled_21)); }
	inline bool get_signaled_21() const { return ___signaled_21; }
	inline bool* get_address_of_signaled_21() { return &___signaled_21; }
	inline void set_signaled_21(bool value)
	{
		___signaled_21 = value;
	}

	inline static int32_t get_offset_of_haveExitTime_22() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveExitTime_22)); }
	inline bool get_haveExitTime_22() const { return ___haveExitTime_22; }
	inline bool* get_address_of_haveExitTime_22() { return &___haveExitTime_22; }
	inline void set_haveExitTime_22(bool value)
	{
		___haveExitTime_22 = value;
	}

	inline static int32_t get_offset_of_raisedOnExited_23() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___raisedOnExited_23)); }
	inline bool get_raisedOnExited_23() const { return ___raisedOnExited_23; }
	inline bool* get_address_of_raisedOnExited_23() { return &___raisedOnExited_23; }
	inline void set_raisedOnExited_23(bool value)
	{
		___raisedOnExited_23 = value;
	}

	inline static int32_t get_offset_of_registeredWaitHandle_24() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___registeredWaitHandle_24)); }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * get_registeredWaitHandle_24() const { return ___registeredWaitHandle_24; }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F ** get_address_of_registeredWaitHandle_24() { return &___registeredWaitHandle_24; }
	inline void set_registeredWaitHandle_24(RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * value)
	{
		___registeredWaitHandle_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredWaitHandle_24), (void*)value);
	}

	inline static int32_t get_offset_of_waitHandle_25() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___waitHandle_25)); }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * get_waitHandle_25() const { return ___waitHandle_25; }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 ** get_address_of_waitHandle_25() { return &___waitHandle_25; }
	inline void set_waitHandle_25(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * value)
	{
		___waitHandle_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitHandle_25), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizingObject_26() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___synchronizingObject_26)); }
	inline RuntimeObject* get_synchronizingObject_26() const { return ___synchronizingObject_26; }
	inline RuntimeObject** get_address_of_synchronizingObject_26() { return &___synchronizingObject_26; }
	inline void set_synchronizingObject_26(RuntimeObject* value)
	{
		___synchronizingObject_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_26), (void*)value);
	}

	inline static int32_t get_offset_of_standardOutput_27() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardOutput_27)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardOutput_27() const { return ___standardOutput_27; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardOutput_27() { return &___standardOutput_27; }
	inline void set_standardOutput_27(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardOutput_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutput_27), (void*)value);
	}

	inline static int32_t get_offset_of_standardInput_28() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardInput_28)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_standardInput_28() const { return ___standardInput_28; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_standardInput_28() { return &___standardInput_28; }
	inline void set_standardInput_28(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___standardInput_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardInput_28), (void*)value);
	}

	inline static int32_t get_offset_of_standardError_29() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardError_29)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardError_29() const { return ___standardError_29; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardError_29() { return &___standardError_29; }
	inline void set_standardError_29(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardError_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardError_29), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_30() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___disposed_30)); }
	inline bool get_disposed_30() const { return ___disposed_30; }
	inline bool* get_address_of_disposed_30() { return &___disposed_30; }
	inline void set_disposed_30(bool value)
	{
		___disposed_30 = value;
	}

	inline static int32_t get_offset_of_outputStreamReadMode_31() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___outputStreamReadMode_31)); }
	inline int32_t get_outputStreamReadMode_31() const { return ___outputStreamReadMode_31; }
	inline int32_t* get_address_of_outputStreamReadMode_31() { return &___outputStreamReadMode_31; }
	inline void set_outputStreamReadMode_31(int32_t value)
	{
		___outputStreamReadMode_31 = value;
	}

	inline static int32_t get_offset_of_errorStreamReadMode_32() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___errorStreamReadMode_32)); }
	inline int32_t get_errorStreamReadMode_32() const { return ___errorStreamReadMode_32; }
	inline int32_t* get_address_of_errorStreamReadMode_32() { return &___errorStreamReadMode_32; }
	inline void set_errorStreamReadMode_32(int32_t value)
	{
		___errorStreamReadMode_32 = value;
	}

	inline static int32_t get_offset_of_inputStreamReadMode_33() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___inputStreamReadMode_33)); }
	inline int32_t get_inputStreamReadMode_33() const { return ___inputStreamReadMode_33; }
	inline int32_t* get_address_of_inputStreamReadMode_33() { return &___inputStreamReadMode_33; }
	inline void set_inputStreamReadMode_33(int32_t value)
	{
		___inputStreamReadMode_33 = value;
	}

	inline static int32_t get_offset_of_OutputDataReceived_34() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___OutputDataReceived_34)); }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * get_OutputDataReceived_34() const { return ___OutputDataReceived_34; }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D ** get_address_of_OutputDataReceived_34() { return &___OutputDataReceived_34; }
	inline void set_OutputDataReceived_34(DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * value)
	{
		___OutputDataReceived_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputDataReceived_34), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorDataReceived_35() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___ErrorDataReceived_35)); }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * get_ErrorDataReceived_35() const { return ___ErrorDataReceived_35; }
	inline DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D ** get_address_of_ErrorDataReceived_35() { return &___ErrorDataReceived_35; }
	inline void set_ErrorDataReceived_35(DataReceivedEventHandler_t3C1484AEA71F4033CDA39BBA740EA3688518BC4D * value)
	{
		___ErrorDataReceived_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorDataReceived_35), (void*)value);
	}

	inline static int32_t get_offset_of_output_36() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___output_36)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_output_36() const { return ___output_36; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_output_36() { return &___output_36; }
	inline void set_output_36(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___output_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_36), (void*)value);
	}

	inline static int32_t get_offset_of_error_37() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___error_37)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_error_37() const { return ___error_37; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_error_37() { return &___error_37; }
	inline void set_error_37(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___error_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_37), (void*)value);
	}

	inline static int32_t get_offset_of_pendingOutputRead_38() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___pendingOutputRead_38)); }
	inline bool get_pendingOutputRead_38() const { return ___pendingOutputRead_38; }
	inline bool* get_address_of_pendingOutputRead_38() { return &___pendingOutputRead_38; }
	inline void set_pendingOutputRead_38(bool value)
	{
		___pendingOutputRead_38 = value;
	}

	inline static int32_t get_offset_of_pendingErrorRead_39() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___pendingErrorRead_39)); }
	inline bool get_pendingErrorRead_39() const { return ___pendingErrorRead_39; }
	inline bool* get_address_of_pendingErrorRead_39() { return &___pendingErrorRead_39; }
	inline void set_pendingErrorRead_39(bool value)
	{
		___pendingErrorRead_39 = value;
	}

	inline static int32_t get_offset_of_process_name_40() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___process_name_40)); }
	inline String_t* get_process_name_40() const { return ___process_name_40; }
	inline String_t** get_address_of_process_name_40() { return &___process_name_40; }
	inline void set_process_name_40(String_t* value)
	{
		___process_name_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_name_40), (void*)value);
	}
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


// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d
struct U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0 Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::<>4__this
	U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * ___U3CU3E4__this_2;
	// System.Diagnostics.Process Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::_process
	Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * ____process_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of__process_3() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E, ____process_3)); }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * get__process_3() const { return ____process_3; }
	inline Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 ** get_address_of__process_3() { return &____process_3; }
	inline void set__process_3(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * value)
	{
		____process_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d
struct U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0 Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>4__this
	U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * ___U3CU3E4__this_2;
	// System.Threading.Tasks.TaskCompletionSource`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>7__wrap1
	TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * ___U3CU3E7__wrap1_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;
	// System.String[] Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>7__wrap3
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CU3E7__wrap3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::<>u__1
	TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3E7__wrap1_3)); }
	inline TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F ** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_4() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3E7__wrap2_4)); }
	inline int32_t get_U3CU3E7__wrap2_4() const { return ___U3CU3E7__wrap2_4; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_4() { return &___U3CU3E7__wrap2_4; }
	inline void set_U3CU3E7__wrap2_4(int32_t value)
	{
		___U3CU3E7__wrap2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_5() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3E7__wrap3_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CU3E7__wrap3_5() const { return ___U3CU3E7__wrap3_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CU3E7__wrap3_5() { return &___U3CU3E7__wrap3_5; }
	inline void set_U3CU3E7__wrap3_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CU3E7__wrap3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Type>
struct Action_1_t87684BD53C55B58E136F9DA7668485600A621945  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::ForEach<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Action`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_ForEach_TisRuntimeObject_m6AC482A667FC3B700BAE052C1F6F4948484F596F_gshared (RuntimeObject* ___source0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___body1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * ___stateMachine1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m4A1131181118107C649B1CEDFDDDAF6B02FB60B8_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult>::TrySetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F_gshared (TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * __this, ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4  ___result0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8__ctor_mF11D0F464D0B631EA63FDDA64395F0EA555380AD (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m1A9E9C8EED9078616565170062285842E6BBC5E8 (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::.ctor()
inline void Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Transform>::Enqueue(!0)
inline void Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.Transform>::Dequeue()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812 (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Transform>::get_Count()
inline int32_t Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_m0B0CB16FBEF1E4CBB1C7385628E6A983B0BA876B (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mA7F9FD8082E5288700E403D1E93E79C728E93398 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> Microsoft.MixedReality.Toolkit.AssemblyExtensions::GetLoadableTypes(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssemblyExtensions_GetLoadableTypes_m469923380C89831ACB98BE57FB050429FBCDA4B0 (Assembly_t * ___this0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Type>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5 (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.ParallelLoopResult System.Threading.Tasks.Parallel::ForEach<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Action`1<!!0>)
inline ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B (RuntimeObject* ___source0, Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * ___body1, const RuntimeMethod* method)
{
	return ((  ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  (*) (RuntimeObject*, Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *, const RuntimeMethod*))Parallel_ForEach_TisRuntimeObject_m6AC482A667FC3B700BAE052C1F6F4948484F596F_gshared)(___source0, ___body1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Type>::Add(!0)
inline void List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 *, Type_t *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEB18D8E6771D6455983E7248F70860EBCD55E63E (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_1__ctor_m801AAC9F36AC05C392DA02181A6BA12CB10856D9 (U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_MoveNext_m987EBF0712DDFC942CFC8A6195EAAE6FF20DBEB8 (U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_SetStateMachine_m295AF137E0296888CE64BE76CB0BBB061DDF2857 (U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Int32 System.Diagnostics.Process::get_ExitCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Process_get_ExitCode_m87C978FF82C478033857D5F18114F35924B3CBAA (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.String[]>::get_Task()
inline Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_inline (TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * (*) (TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String[]>::GetAwaiter()
inline TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8 (Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  (*) (Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28 (TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>,Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 * ___awaiter0, U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *, U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m4A1131181118107C649B1CEDFDDDAF6B02FB60B8_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]>::GetResult()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147 (TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ProcessResult::.ctor(System.Int32,System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessResult__ctor_m0722CAC1C4E2C7EC2E3095FA9875C1C3562D8D09 (ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4 * __this, int32_t ___exitCode0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___errors1, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___output2, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Microsoft.MixedReality.Toolkit.Utilities.ProcessResult>::TrySetResult(!0)
inline bool TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F (TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * __this, ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4  ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F *, ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4 , const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F_gshared)(__this, ___result0, method);
}
// System.Void System.Diagnostics.Process::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Process_Close_mAEA629C172A2F879046D2B5CC79F69350D7CFE68 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593 (Component_t015539CFEAEEBFD7619041FE006475373E0D71DF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_MoveNext_mE0FF85BE02E1C992D970239A603FBC593DAE78C3 (U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_SetStateMachine_m4FB5691957E77D58B121634C75FCC507AE9546BE (U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_Id_mE32E322044F87B46F6CC8F776C1904F46482F53A (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Id_m465BA19485A5B85F253E8E40B9D28512DF44BBAB (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Indices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* MeshData_get_Indices_m84630F25C78A791E345BEB3DE5CC621E6CF85FB1 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, const RuntimeMethod* method)
{
	{
		// public int[] Indices { get; set; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_U3CIndicesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Indices(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Indices_m9041A839A9755DCD617C956BEAD1ECA6E2C284B2 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// public int[] Indices { get; set; }
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_U3CIndicesU3Ek__BackingField_1(L_0);
		return;
	}
}
// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* MeshData_get_Vertices_m52C13827DEFD1BDC347F7E279DBA043C277FEF6E (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3[] Vertices { get; set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_U3CVerticesU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_Vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_Vertices_mD895D0BDA5811E0D102F5B9203670584E6604A16 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3[] Vertices { get; set; }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = ___value0;
		__this->set_U3CVerticesU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_UVs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* MeshData_get_UVs_m3A12E35968BF11B41384FEC5C39FFD0876BDFA51 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, const RuntimeMethod* method)
{
	{
		// public Vector2[] UVs { get; set; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = __this->get_U3CUVsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_UVs(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_UVs_m06515E1B4B2C467B2ACB0BABFD664C5D12CFEBF9 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2[] UVs { get; set; }
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = ___value0;
		__this->set_U3CUVsU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * MeshData_get_GameObject_m494EB9CCC58738CF9B3D7B1A5DBF1B336BB43F97 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData_set_GameObject_m0224A93A80A74159958C437D16BDA6233C67DED5 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/MeshData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshData__ctor_mF8DDC63317BC7AD2F81464DE1FCB259FDDE009E6 (MeshData_tBA0B83F212A20C291E8BD1ED24AC3F98BA77673F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuadData_get_Id_mA65BF7AEAB97743125760095DE1EF9CB2A83309B (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_Id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_Id_mBB3D1B3A6F43A18AEC8809578A8ADB4542A3ADDF (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Id { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_Extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  QuadData_get_Extents_mCA8C5D13DC9D05BB2C3216D560FEEB59F5AC797F (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Extents { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CExtentsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_Extents(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_Extents_m27C55AEFC52EF3FB3C352E433DD03D2D6CEFC4F7 (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 Extents { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CExtentsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Byte[] Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_OcclusionMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* QuadData_get_OcclusionMask_m693C7E315C18239D65C0DA3BE091C2CDD2DEF23E (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, const RuntimeMethod* method)
{
	{
		// public byte[] OcclusionMask { get; set; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_U3COcclusionMaskU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_OcclusionMask(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_OcclusionMask_m61D4846A0B16A4801FFA5A0FB115D21DE34648BE (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		// public byte[] OcclusionMask { get; set; }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___value0;
		__this->set_U3COcclusionMaskU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::get_GameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * QuadData_get_GameObject_mC9196E3A09AC5A452AC54BD5DEE14565E8486D93 (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::set_GameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData_set_GameObject_m99229FEC0B613F017C51C6058C7CA09B9A3D03C1 (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CGameObjectU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SpatialAwarenessSceneObject/QuadData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuadData__ctor_mCEA81B8E497860A089F600D337DD9471E5BEC67C (QuadData_t31FE3D5BAC395084E1DBBE733CE4BF6DF22D789E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8__ctor_mF11D0F464D0B631EA63FDDA64395F0EA555380AD (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8_System_IDisposable_Dispose_m13AC49184A6F92A366C36C6F51E9031DA623679B (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateAncestorsU3Ed__8_MoveNext_m7710EA11EFAA9041E5096DF995C47CA21AB82C94 (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!includeSelf)
		bool L_3 = __this->get_includeSelf_3();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// startTransform = startTransform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_startTransform_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		__this->set_startTransform_5(L_5);
	}

IL_0030:
	{
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_startTransform_5();
		__this->set_U3CtransformU3E5__2_7(L_6);
		goto IL_006b;
	}

IL_003e:
	{
		// yield return transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_U3CtransformU3E5__2_7();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_U3CtransformU3E5__2_7();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		__this->set_U3CtransformU3E5__2_7(L_9);
	}

IL_006b:
	{
		// for (Transform transform = startTransform; transform != null; transform = transform.parent)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_U3CtransformU3E5__2_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_003e;
		}
	}
	{
		__this->set_U3CtransformU3E5__2_7((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_m5276EBEED46F5B4CB31CF2DCEAC481B168786DD0 (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m6E5A0CDF553104E330C362D75511DB72C9027D52 (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_Reset_m6E5A0CDF553104E330C362D75511DB72C9027D52_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerator_get_Current_m9459013443DF3ECFD70157221FB931111558A602 (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m1A9E9C8EED9078616565170062285842E6BBC5E8 (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * L_3 = (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 *)il2cpp_codegen_object_new(U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782_il2cpp_TypeInfo_var);
		U3CEnumerateAncestorsU3Ed__8__ctor_mF11D0F464D0B631EA63FDDA64395F0EA555380AD(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_U3CU3E3__startTransform_6();
		NullCheck(L_4);
		L_4->set_startTransform_5(L_5);
		U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__includeSelf_4();
		NullCheck(L_6);
		L_6->set_includeSelf_3(L_7);
		U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateAncestors>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateAncestorsU3Ed__8_System_Collections_IEnumerable_GetEnumerator_mD053A84F09284B5915CC93380ABE713DAC83265C (U3CEnumerateAncestorsU3Ed__8_t05EEBE331D79495639C0CECA54A14A43CF9BF782 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateAncestorsU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_m1A9E9C8EED9078616565170062285842E6BBC5E8(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4__ctor_m0B0CB16FBEF1E4CBB1C7385628E6A983B0BA876B (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_IDisposable_Dispose_mBEFBFB6738792A49C69B143BAA7E6DD6A49A2B68 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateHierarchyCoreU3Ed__4_MoveNext_mDCFAA58A86EC28C1F8623ECBD64332ACF0DECF31 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_008a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var transformQueue = new Queue<Transform>();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_3 = (Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 *)il2cpp_codegen_object_new(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177_il2cpp_TypeInfo_var);
		Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B(L_3, /*hidden argument*/Queue_1__ctor_mA0338FD7CCC05D92DE06FB933502F90C3420B78B_RuntimeMethod_var);
		__this->set_U3CtransformQueueU3E5__2_7(L_3);
		// transformQueue.Enqueue(root);
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_4 = __this->get_U3CtransformQueueU3E5__2_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_root_3();
		NullCheck(L_4);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_4, L_5, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		goto IL_0091;
	}

IL_0035:
	{
		// var parentTransform = transformQueue.Dequeue();
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_6 = __this->get_U3CtransformQueueU3E5__2_7();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812(L_6, /*hidden argument*/Queue_1_Dequeue_mDAEEC4B9916560EEC844B655D3E6E2BE20D91812_RuntimeMethod_var);
		V_1 = L_7;
		// if (!parentTransform || ignore.Contains(parentTransform)) { continue; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_10 = __this->get_ignore_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Transform>::Contains(!0) */, ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F_il2cpp_TypeInfo_var, L_10, L_11);
		if (L_12)
		{
			goto IL_0091;
		}
	}
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		V_2 = 0;
		goto IL_0071;
	}

IL_005b:
	{
		// transformQueue.Enqueue(parentTransform.GetChild(i));
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_13 = __this->get_U3CtransformQueueU3E5__2_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB(L_13, L_16, /*hidden argument*/Queue_1_Enqueue_mFF54572C8717A7CFE90F925376E9D6BD9E74FADB_RuntimeMethod_var);
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0071:
	{
		// for (var i = 0; i < parentTransform.childCount; i++)
		int32_t L_18 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_005b;
		}
	}
	{
		// yield return parentTransform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = V_1;
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0091:
	{
		// while (transformQueue.Count > 0)
		Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * L_22 = __this->get_U3CtransformQueueU3E5__2_7();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_inline(L_22, /*hidden argument*/Queue_1_get_Count_m69913970BDC0D766ABCABA9E63B260328EDFE031_RuntimeMethod_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumeratorU3CUnityEngine_TransformU3E_get_Current_mB5F3D6A5B012F2019A5072EBBE6AB18952894502 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m2D4FF7FB34C4AC061B85D9442B3D2402430691FB (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_Reset_m2D4FF7FB34C4AC061B85D9442B3D2402430691FB_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerator_get_Current_mEC30C0B5F2330C39A7525AAF4FF62747AC933EB9 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mA7F9FD8082E5288700E403D1E93E79C728E93398 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * L_3 = (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 *)il2cpp_codegen_object_new(U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14_il2cpp_TypeInfo_var);
		U3CEnumerateHierarchyCoreU3Ed__4__ctor_m0B0CB16FBEF1E4CBB1C7385628E6A983B0BA876B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_U3CU3E3__root_4();
		NullCheck(L_4);
		L_4->set_root_3(L_5);
		U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__ignore_6();
		NullCheck(L_6);
		L_6->set_ignore_5(L_7);
		U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_IEnumerable_GetEnumerator_m181457B95D61245DD817842194E42E8BE8F51359 (U3CEnumerateHierarchyCoreU3Ed__4_t8EF410D1C3B2D1E4C4F4F38399C01AC1B3708E14 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateHierarchyCoreU3Ed__4_System_Collections_Generic_IEnumerableU3CUnityEngine_TransformU3E_GetEnumerator_mA7F9FD8082E5288700E403D1E93E79C728E93398(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mA4AFC7DBF79D2F30913D04B7EC8F4A7C7C91B97C (U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<GetAllSubClassesOf>b__0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__0_m2A42CB454A08847B48C4C1B8CF33D38E423B340E (U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009 * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mB3F161DC4F3BF612ED6AD50457DC763F92395F15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * V_0 = NULL;
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// Parallel.ForEach(assembly.GetLoadableTypes(), (type) =>
		// {
		//     if (type != null && type.IsClass && !type.IsAbstract && type.IsSubclassOf(rootType))
		//     {
		//         results.Add(type);
		//     }
		// });
		Assembly_t * L_0 = ___assembly0;
		RuntimeObject* L_1;
		L_1 = AssemblyExtensions_GetLoadableTypes_m469923380C89831ACB98BE57FB050429FBCDA4B0(L_0, /*hidden argument*/NULL);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_2 = __this->get_U3CU3E9__1_2();
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_4 = (Action_1_t87684BD53C55B58E136F9DA7668485600A621945 *)il2cpp_codegen_object_new(Action_1_t87684BD53C55B58E136F9DA7668485600A621945_il2cpp_TypeInfo_var);
		Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5(L_4, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mB3F161DC4F3BF612ED6AD50457DC763F92395F15_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8DF724CCDF9D7623173D6297F5FD8AC9648D03F5_RuntimeMethod_var);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_5 = L_4;
		V_0 = L_5;
		__this->set_U3CU3E9__1_2(L_5);
		Action_1_t87684BD53C55B58E136F9DA7668485600A621945 * L_6 = V_0;
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Parallel_tB59282E278156AA32B2BACBD33B31FD4C9922646_il2cpp_TypeInfo_var);
		ParallelLoopResult_t23A783309EEC5F5EE29FFA083DD242DF6E2613D3  L_7;
		L_7 = Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B(G_B2_1, G_B2_0, /*hidden argument*/Parallel_ForEach_TisType_t_mAD806C6560EB5B77607555FC5E34DEB4ACE5D46B_RuntimeMethod_var);
		// });
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.TypeExtensions/<>c__DisplayClass0_0::<GetAllSubClassesOf>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0_U3CGetAllSubClassesOfU3Eb__1_mB3F161DC4F3BF612ED6AD50457DC763F92395F15 (U3CU3Ec__DisplayClass0_0_t44F58ED560D539FC66645B89738AABA3C675D009 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type != null && type.IsClass && !type.IsAbstract && type.IsSubclassOf(rootType))
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = ___type0;
		Type_t * L_7 = __this->get_rootType_0();
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, Type_t * >::Invoke(107 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// results.Add(type);
		List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * L_9 = __this->get_results_1();
		Type_t * L_10 = ___type0;
		NullCheck(L_9);
		List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D(L_9, L_10, /*hidden argument*/List_1_Add_m56E267FE82DC48AD1690E87B576550B72754E89D_RuntimeMethod_var);
	}

IL_0033:
	{
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
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m23292B6DDCA006B4CC143CF47D71C91AF9B1DA99 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * L_0 = (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 *)il2cpp_codegen_object_new(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEB18D8E6771D6455983E7248F70860EBCD55E63E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEB18D8E6771D6455983E7248F70860EBCD55E63E (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__12_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__12_0_mCA4ED30342DA4F9741B7D683490A64E6078E1991 (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector2.zero : enumerable.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__13_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__13_0_m6F3176D7CECE297DDB347C19BB78DE32B629BD9C (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector3.zero : enumerable.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__14_0(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__14_0_mC2809DDCEC3D25B0E7E55EACCA0AD3BCD5C50E99 (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector2.zero : vectors.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___v0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.VectorExtensions/<>c::<Median>b__15_0(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMedianU3Eb__15_0_m66C5EB06615D7441522BD9C38F06D79706083BA6 (U3CU3Ec_t90E4822C538285B7254B49553AA03D6C8C657183 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	{
		// return count == 0 ? Vector3.zero : vectors.OrderBy(v => v.sqrMagnitude).ElementAt(count / 2);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___v0), /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_MoveNext_m987EBF0712DDFC942CFC8A6195EAAE6FF20DBEB8 (U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_U3CStartProcessAsyncU3Eb__4_mE1E6BA411CF298C69508EDFD4B78F4830E12DA7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0068;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384 * L_3 = (U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass1_1__ctor_m801AAC9F36AC05C392DA02181A6BA12CB10856D9(L_3, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384 * L_4 = L_3;
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_5 = V_1;
			NullCheck(L_4);
			L_4->set_CSU24U3CU3E8__locals1_1(L_5);
			U3CU3Ec__DisplayClass1_1_t38E21378F667E3785F4F306879BEA423220E8384 * L_6 = L_4;
			Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_7 = __this->get__process_3();
			NullCheck(L_6);
			L_6->set__process_0(L_7);
			// await Task.Run(() =>
			// {
			//     try
			//     {
			//         while (!_process.HasExited)
			//         {
			//             if (cancellationToken.IsCancellationRequested)
			//             {
			//                 _process.Kill();
			//             }
			//         }
			//     }
			//     catch
			//     {
			//         // ignored
			//     }
			// });
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
			Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_1_U3CStartProcessAsyncU3Eb__4_mE1E6BA411CF298C69508EDFD4B78F4830E12DA7B_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = Task_Run_m77F41B8D89AFD69BE94888BC2CAD5E3183A79B8D(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
			L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0084;
			}
		}

IL_0048:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_2;
			__this->set_U3CU3Eu__1_4(L_13);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E_m01229304D59516573D7B6455AA6F371A5D659640_RuntimeMethod_var);
			goto IL_00b7;
		}

IL_0068:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_4();
			V_2 = L_15;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_0084:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			goto IL_00a4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008d;
		}
		throw e;
	}

CATCH_008d:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b7;
	} // end catch (depth: 1)

IL_00a4:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_20, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_MoveNext_m987EBF0712DDFC942CFC8A6195EAAE6FF20DBEB8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * _thisAdjusted = reinterpret_cast<U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E *>(__this + _offset);
	U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_MoveNext_m987EBF0712DDFC942CFC8A6195EAAE6FF20DBEB8(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__CancellationWatcher|3>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_SetStateMachine_m295AF137E0296888CE64BE76CB0BBB061DDF2857 (U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_SetStateMachine_m295AF137E0296888CE64BE76CB0BBB061DDF2857_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E * _thisAdjusted = reinterpret_cast<U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_tD2E6607BC997D2DEA144F82B3631A85AE98C7A3E *>(__this + _offset);
	U3CU3CStartProcessAsyncU3Eg__CancellationWatcherU7C3U3Ed_SetStateMachine_m295AF137E0296888CE64BE76CB0BBB061DDF2857(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_MoveNext_mE0FF85BE02E1C992D970239A603FBC593DAE78C3 (U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0072;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d8;
			}
		}

IL_0018:
		{
			// processResult.TrySetResult(new ProcessResult(process.ExitCode, await errorCodeResult.Task, await outputCodeResult.Task));
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_4 = V_1;
			NullCheck(L_4);
			TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * L_5 = L_4->get_processResult_0();
			__this->set_U3CU3E7__wrap1_3(L_5);
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_6 = V_1;
			NullCheck(L_6);
			Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_7 = L_6->get_process_1();
			NullCheck(L_7);
			int32_t L_8;
			L_8 = Process_get_ExitCode_m87C978FF82C478033857D5F18114F35924B3CBAA(L_7, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_4(L_8);
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_9 = V_1;
			NullCheck(L_9);
			TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * L_10 = L_9->get_errorCodeResult_2();
			NullCheck(L_10);
			Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * L_11;
			L_11 = TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_inline(L_10, /*hidden argument*/TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_RuntimeMethod_var);
			NullCheck(L_11);
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  L_12;
			L_12 = Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8(L_11, /*hidden argument*/Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28((TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_008e;
			}
		}

IL_004f:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  L_15 = V_3;
			__this->set_U3CU3Eu__1_6(L_15);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *)(&V_3), (U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C_RuntimeMethod_var);
			goto IL_016c;
		}

IL_0072:
		{
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  L_17 = __this->get_U3CU3Eu__1_6();
			V_3 = L_17;
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 * L_18 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_008e:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20;
			L_20 = TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147((TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_5(L_20);
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_21 = V_1;
			NullCheck(L_21);
			TaskCompletionSource_1_t37306D8BE8F36A01ED5056B6418557BE1CAF3EB0 * L_22 = L_21->get_outputCodeResult_3();
			NullCheck(L_22);
			Task_1_t4B41EF9300C021C2C695B94DCDEAB2F597FA2F09 * L_23;
			L_23 = TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_inline(L_22, /*hidden argument*/TaskCompletionSource_1_get_Task_m1BB4889B466F640AECACDB082373872B6AF6DC8B_RuntimeMethod_var);
			NullCheck(L_23);
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  L_24;
			L_24 = Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8(L_23, /*hidden argument*/Task_1_GetAwaiter_mC7E47D6DA408F607644877C2C2F7CFBB8542DBE8_RuntimeMethod_var);
			V_3 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28((TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC4BB6F6A48215494D78C8C27F2041A24F1372F28_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00f4;
			}
		}

IL_00b5:
		{
			int32_t L_26 = 1;
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  L_27 = V_3;
			__this->set_U3CU3Eu__1_6(L_27);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_28 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_28, (TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *)(&V_3), (U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983_TisU3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C_m6B9F60EDFDC42820CCD94AE300E670B2B7AE714C_RuntimeMethod_var);
			goto IL_016c;
		}

IL_00d8:
		{
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983  L_29 = __this->get_U3CU3Eu__1_6();
			V_3 = L_29;
			TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 * L_30 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 ));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->set_U3CU3E1__state_0(L_31);
		}

IL_00f4:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32;
			L_32 = TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147((TaskAwaiter_1_t76FAB98A539F24541F512A2D647DD478F637F983 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m840E36D12A794440CAA1254E392D0423247FC147_RuntimeMethod_var);
			V_2 = L_32;
			TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F * L_33 = __this->get_U3CU3E7__wrap1_3();
			int32_t L_34 = __this->get_U3CU3E7__wrap2_4();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = __this->get_U3CU3E7__wrap3_5();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = V_2;
			ProcessResult_tD684C1EE2468652BAE1CF1790EE7038899EBDAE4  L_37;
			memset((&L_37), 0, sizeof(L_37));
			ProcessResult__ctor_m0722CAC1C4E2C7EC2E3095FA9875C1C3562D8D09((&L_37), L_34, L_35, L_36, /*hidden argument*/NULL);
			NullCheck(L_33);
			bool L_38;
			L_38 = TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F(L_33, L_37, /*hidden argument*/TaskCompletionSource_1_TrySetResult_mAAFA2E69E0F7BA6EB19805BAF66BE6CAAE36EC1F_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3((TaskCompletionSource_1_t823F4FDD71D71E7196826D2C8D2EE01ABA04963F *)NULL);
			__this->set_U3CU3E7__wrap3_5((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
			// process.Close();
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_39 = V_1;
			NullCheck(L_39);
			Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_40 = L_39->get_process_1();
			NullCheck(L_40);
			Process_Close_mAEA629C172A2F879046D2B5CC79F69350D7CFE68(L_40, /*hidden argument*/NULL);
			// process.Dispose();
			U3CU3Ec__DisplayClass1_0_tABEF0F28A6DA98553DF8348453EE3B46E4B4E58A * L_41 = V_1;
			NullCheck(L_41);
			Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_42 = L_41->get_process_1();
			NullCheck(L_42);
			Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593(L_42, /*hidden argument*/NULL);
			goto IL_0159;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0140;
		}
		throw e;
	}

CATCH_0140:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_44 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_43, L_44, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016c;
	} // end catch (depth: 1)

IL_0159:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_45 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_45, /*hidden argument*/NULL);
	}

IL_016c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_MoveNext_mE0FF85BE02E1C992D970239A603FBC593DAE78C3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * _thisAdjusted = reinterpret_cast<U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C *>(__this + _offset);
	U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_MoveNext_mE0FF85BE02E1C992D970239A603FBC593DAE78C3(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.ProcessExtensions/<>c__DisplayClass1_0/<<StartProcessAsync>g__OnProcessExited|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_SetStateMachine_m4FB5691957E77D58B121634C75FCC507AE9546BE (U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_SetStateMachine_m4FB5691957E77D58B121634C75FCC507AE9546BE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C * _thisAdjusted = reinterpret_cast<U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_t77789D55EB515177B641676F1BF694D724FB205C *>(__this + _offset);
	U3CU3CStartProcessAsyncU3Eg__OnProcessExitedU7C0U3Ed_SetStateMachine_m4FB5691957E77D58B121634C75FCC507AE9546BE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
