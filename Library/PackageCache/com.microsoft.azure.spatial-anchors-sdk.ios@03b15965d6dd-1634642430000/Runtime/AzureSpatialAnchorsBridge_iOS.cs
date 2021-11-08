#if UNITY_IOS
//
// AzureSpatialAnchors
// This file was auto-generated from SscApiModelDirect.cs.
//

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;

namespace Microsoft.Azure.SpatialAnchors
{
    internal enum status
    {
        /// <summary>
        /// Success
        /// </summary>
        OK = 0,
        /// <summary>
        /// Failed
        /// </summary>
        Failed = 1,
        /// <summary>
        /// Cannot access a disposed object.
        /// </summary>
        ObjectDisposed = 2,
        /// <summary>
        /// Out of memory.
        /// </summary>
        OutOfMemory = 12,
        /// <summary>
        /// Invalid argument.
        /// </summary>
        InvalidArgument = 22,
        /// <summary>
        /// The value is out of range.
        /// </summary>
        OutOfRange = 34,
        /// <summary>
        /// Not implemented.
        /// </summary>
        NotImplemented = 38,
        /// <summary>
        /// The key does not exist in the collection.
        /// </summary>
        KeyNotFound = 77,
        /// <summary>
        /// Amount of Metadata exceeded the allowed limit (currently 4k).
        /// </summary>
        MetadataTooLarge = 78,
        /// <summary>
        /// Application did not provide valid credentials and therefore could not authenticate with the Cloud Service.
        /// </summary>
        ApplicationNotAuthenticated = 79,
        /// <summary>
        /// Application did not provide any credentials for authorization with the Cloud Service.
        /// </summary>
        ApplicationNotAuthorized = 80,
        /// <summary>
        /// Multiple stores (on the same device or different devices) made concurrent changes to the same Spatial Entity and so this particular change was rejected.
        /// </summary>
        ConcurrencyViolation = 81,
        /// <summary>
        /// Not enough Neighborhood Spatial Data was available to complete the desired Create operation.
        /// </summary>
        NotEnoughSpatialData = 82,
        /// <summary>
        /// No Spatial Location Hint was available (or it was not specific enough) to support rediscovery from the Cloud at a later time.
        /// </summary>
        NoSpatialLocationHint = 83,
        /// <summary>
        /// Application cannot connect to the Cloud Service.
        /// </summary>
        CannotConnectToServer = 84,
        /// <summary>
        /// Cloud Service returned an unspecified error.
        /// </summary>
        ServerError = 85,
        /// <summary>
        /// The Spatial Entity has already been associated with a different Store object, so cannot be used with this current Store object.
        /// </summary>
        AlreadyAssociatedWithADifferentStore = 86,
        /// <summary>
        /// SpatialEntity already exists in a Store but TryCreateAsync was called.
        /// </summary>
        AlreadyExists = 87,
        /// <summary>
        /// A locate operation was requested, but the criteria does not specify anything to look for.
        /// </summary>
        NoLocateCriteriaSpecified = 88,
        /// <summary>
        /// An access token was required but not specified; handle the TokenRequired event on the session to provide one.
        /// </summary>
        NoAccessTokenSpecified = 89,
        /// <summary>
        /// The session was unable to obtain an access token and so the creation could not proceed.
        /// </summary>
        UnableToObtainAccessToken = 90,
        /// <summary>
        /// There were too many requests made from this Account ID, so it is being throttled.
        /// </summary>
        TooManyRequests = 91,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid because they're missing a required value.
        /// </summary>
        LocateCriteriaMissingRequiredValues = 92,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid because they're in conflict with settings for another mode.
        /// </summary>
        LocateCriteriaInConflict = 93,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid values.
        /// </summary>
        LocateCriteriaInvalid = 94,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid because they're not currently supported.
        /// </summary>
        LocateCriteriaNotSupported = 95,
        /// <summary>
        /// Encountered an unknown error on the session.
        /// </summary>
        Unknown = 96,
        /// <summary>
        /// The Http request timed out.
        /// </summary>
        HttpTimeout = 97,
        /// <summary>
        /// The transform matrix of platform anchor passed in is invalid. It is either not affine, or its rotation matrix is not orthonormal. The second case may be caused due to its containing a non-uniform scale or a uniform scale other than 1, or just some malformed values.
        /// </summary>
        InvalidAnchorTransformRigidity = 98,
    }

    internal static class NativeLibraryHelpers
    {
        internal static string[] IntPtrToStringArray(IntPtr result, int result_length)
        {
            // an empty list is returned as a single null character
            if (result_length == 1)
            {
                return Array.Empty<string>();
            }

            byte[] bytes = new byte[result_length - 1];
            System.Runtime.InteropServices.Marshal.Copy(result, bytes, 0, result_length - 1);
            System.Runtime.InteropServices.Marshal.FreeCoTaskMem(result);
            return System.Text.Encoding.UTF8.GetString(bytes).Split('\0');
        }

        internal static void CheckStatus(IntPtr handle, status value)
        {
            if (value == status.OK)
            {
                return;
            }

            string message;
            string requestCorrelationVector;
            string responseCorrelationVector;

            Microsoft.Azure.SpatialAnchors.status code = Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_get_error_details(handle, out message, out requestCorrelationVector, out responseCorrelationVector);

            string fullMessage;
            if (code == status.Failed)
            {
                throw new InvalidOperationException("Unexpected error in exception handling.");
            }
            else if (code != status.OK)
            {
                fullMessage = "Exception thrown and an unexpected error in exception handling.";
            }
            else
            {
                fullMessage = message + ". Request CV: " + requestCorrelationVector + ". Response CV: " + responseCorrelationVector + ".";
            }

            switch (value)
            {
                case status.OK:
                    return;
                case status.Failed:
                    throw new InvalidOperationException(fullMessage);
                case status.ObjectDisposed:
                    throw new ObjectDisposedException(fullMessage);
                case status.OutOfMemory:
                    throw new OutOfMemoryException(fullMessage);
                case status.InvalidArgument:
                    throw new ArgumentException(fullMessage);
                case status.OutOfRange:
                    throw new ArgumentOutOfRangeException("", fullMessage);
                case status.NotImplemented:
                    throw new NotImplementedException(fullMessage);
                case status.KeyNotFound:
                    throw new KeyNotFoundException(fullMessage);
                case status.MetadataTooLarge:
                    throw new CloudSpatialException(CloudSpatialErrorCode.MetadataTooLarge, message, requestCorrelationVector, responseCorrelationVector);
                case status.ApplicationNotAuthenticated:
                    throw new CloudSpatialException(CloudSpatialErrorCode.ApplicationNotAuthenticated, message, requestCorrelationVector, responseCorrelationVector);
                case status.ApplicationNotAuthorized:
                    throw new CloudSpatialException(CloudSpatialErrorCode.ApplicationNotAuthorized, message, requestCorrelationVector, responseCorrelationVector);
                case status.ConcurrencyViolation:
                    throw new CloudSpatialException(CloudSpatialErrorCode.ConcurrencyViolation, message, requestCorrelationVector, responseCorrelationVector);
                case status.NotEnoughSpatialData:
                    throw new CloudSpatialException(CloudSpatialErrorCode.NotEnoughSpatialData, message, requestCorrelationVector, responseCorrelationVector);
                case status.NoSpatialLocationHint:
                    throw new CloudSpatialException(CloudSpatialErrorCode.NoSpatialLocationHint, message, requestCorrelationVector, responseCorrelationVector);
                case status.CannotConnectToServer:
                    throw new CloudSpatialException(CloudSpatialErrorCode.CannotConnectToServer, message, requestCorrelationVector, responseCorrelationVector);
                case status.ServerError:
                    throw new CloudSpatialException(CloudSpatialErrorCode.ServerError, message, requestCorrelationVector, responseCorrelationVector);
                case status.AlreadyAssociatedWithADifferentStore:
                    throw new CloudSpatialException(CloudSpatialErrorCode.AlreadyAssociatedWithADifferentStore, message, requestCorrelationVector, responseCorrelationVector);
                case status.AlreadyExists:
                    throw new CloudSpatialException(CloudSpatialErrorCode.AlreadyExists, message, requestCorrelationVector, responseCorrelationVector);
                case status.NoLocateCriteriaSpecified:
                    throw new CloudSpatialException(CloudSpatialErrorCode.NoLocateCriteriaSpecified, message, requestCorrelationVector, responseCorrelationVector);
                case status.NoAccessTokenSpecified:
                    throw new CloudSpatialException(CloudSpatialErrorCode.NoAccessTokenSpecified, message, requestCorrelationVector, responseCorrelationVector);
                case status.UnableToObtainAccessToken:
                    throw new CloudSpatialException(CloudSpatialErrorCode.UnableToObtainAccessToken, message, requestCorrelationVector, responseCorrelationVector);
                case status.TooManyRequests:
                    throw new CloudSpatialException(CloudSpatialErrorCode.TooManyRequests, message, requestCorrelationVector, responseCorrelationVector);
                case status.LocateCriteriaMissingRequiredValues:
                    throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaMissingRequiredValues, message, requestCorrelationVector, responseCorrelationVector);
                case status.LocateCriteriaInConflict:
                    throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaInConflict, message, requestCorrelationVector, responseCorrelationVector);
                case status.LocateCriteriaInvalid:
                    throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaInvalid, message, requestCorrelationVector, responseCorrelationVector);
                case status.LocateCriteriaNotSupported:
                    throw new CloudSpatialException(CloudSpatialErrorCode.LocateCriteriaNotSupported, message, requestCorrelationVector, responseCorrelationVector);
                case status.Unknown:
                    throw new CloudSpatialException(CloudSpatialErrorCode.Unknown, message, requestCorrelationVector, responseCorrelationVector);
                case status.HttpTimeout:
                    throw new CloudSpatialException(CloudSpatialErrorCode.HttpTimeout, message, requestCorrelationVector, responseCorrelationVector);
                case status.InvalidAnchorTransformRigidity:
                    throw new CloudSpatialException(CloudSpatialErrorCode.InvalidAnchorTransformRigidity, message, requestCorrelationVector, responseCorrelationVector);
            }
        }
    }

    /// <summary>
    /// This interface is implemented by classes with events to help track callbacks.
    /// </summary>
    internal interface ICookie
    {
        /// <summary>
        /// Unique cookie value for callback identification.
        /// </summary>
        ulong Cookie { get; set; }
    }

    internal static class CookieTracker<T>
        where T : class, ICookie
    {
        private static ulong lastCookie;

        private static Dictionary<ulong, System.WeakReference<T>> tracked = new Dictionary<ulong, System.WeakReference<T>>();

        internal static void Add(T instance)
        {
            lock (tracked)
            {
                instance.Cookie = ++lastCookie;
                tracked[instance.Cookie] = new System.WeakReference<T>(instance);
            }
        }

        internal static T Lookup(ulong cookie)
        {
            T result;
            System.WeakReference<T> reference;
            bool found;

            lock (tracked)
            {
                found = tracked.TryGetValue(cookie, out reference);
            }

            if (!found)
            {
                return null;
            }

            found = reference.TryGetTarget(out result);

            if (!found)
            {
                lock (tracked)
                {
                    tracked.Remove(cookie);
                }
            }

            return result;
        }

        internal static void Remove(T instance)
        {
            lock (tracked)
            {
                tracked.Remove(instance.Cookie);
            }
        }
    }

    /// <summary>
    /// Informs the application that a locate operation has completed.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void LocateAnchorsCompletedDelegateNative(ulong cookie, IntPtr args);

    /// <summary>
    /// Informs the application that a session requires an updated access token or authentication token.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void TokenRequiredDelegateNative(ulong cookie, IntPtr args);

    /// <summary>
    /// Informs the application that a session has located an anchor or discovered that it cannot yet be located.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void AnchorLocatedDelegateNative(ulong cookie, IntPtr args);

    /// <summary>
    /// Informs the application that a session has been updated with new information.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void SessionUpdatedDelegateNative(ulong cookie, IntPtr args);

    /// <summary>
    /// Informs the application that an error occurred in a session.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void SessionErrorDelegateNative(ulong cookie, IntPtr args);

    /// <summary>
    /// Informs the application of a debug log message.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void OnLogDebugDelegateNative(ulong cookie, IntPtr args);

    /// <summary>
    /// Informs the application that a session is requesting an updated sensor fingerprint to help with anchor recall.
    /// </summary>
    /// <param name="cookie">
    /// The callback cookie.
    /// </param>
    /// <param name="args">
    /// The callback handle.
    /// </param>
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    internal delegate void UpdatedSensorFingerprintRequiredDelegateNative(ulong cookie, IntPtr args);

    internal static partial class NativeLibrary
    {
        internal const string DllName = "__Internal";
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_locate_anchors_completed_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_locate_anchors_completed_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_locate_anchors_completed_event_args_get_cancelled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] out bool result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_locate_anchors_completed_event_args_get_watcher(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_watcher_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_watcher_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_watcher_get_identifier(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_watcher_stop(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_get_anchor(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_get_local_anchor(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_set_local_anchor(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_get_expiration(IntPtr handle, out long result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_set_expiration(IntPtr handle, long value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_get_identifier(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_get_app_properties(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_get_count(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_clear(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_get_key(IntPtr handle, int index, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_get_item(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string key, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_set_item(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string key, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_idictionary_string_string_remove_key(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string key);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_get_version_tag(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_get_identifier(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_get_status(IntPtr handle, out Microsoft.Azure.SpatialAnchors.LocateAnchorStatus result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_get_strategy(IntPtr handle, out Microsoft.Azure.SpatialAnchors.LocateStrategy result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_located_event_args_get_watcher(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_get_account_domain(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_set_account_domain(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_get_account_id(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_set_account_id(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_get_authentication_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_set_authentication_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_get_account_key(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_set_account_key(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_get_access_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_configuration_set_access_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_get_geo_location_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] out bool result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_set_geo_location_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] bool value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_get_wifi_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] out bool result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_set_wifi_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] bool value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_get_bluetooth_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] out bool result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_set_bluetooth_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] bool value);
        [DllImport(DllName, EntryPoint="ssc_sensor_capabilities_get_known_beacon_proximity_uuids_flat", CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_get_known_beacon_proximity_uuids(IntPtr handle, out IntPtr result, out int result_count);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_capabilities_set_known_beacon_proximity_uuids(IntPtr handle, [MarshalAs(UnmanagedType.LPArray, ArraySubType=UnmanagedType.LPStr, SizeParamIndex=2)] string[] value, int value_count);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_get_sensors(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_get_geo_location_status(IntPtr handle, out Microsoft.Azure.SpatialAnchors.GeoLocationStatusResult result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_get_wifi_status(IntPtr handle, out Microsoft.Azure.SpatialAnchors.WifiStatusResult result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_get_bluetooth_status(IntPtr handle, out Microsoft.Azure.SpatialAnchors.BluetoothStatusResult result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_get_location_estimate(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_get_latitude(IntPtr handle, out double result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_set_latitude(IntPtr handle, double value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_get_longitude(IntPtr handle, out double result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_set_longitude(IntPtr handle, double value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_get_horizontal_error(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_set_horizontal_error(IntPtr handle, float value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_get_altitude(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_set_altitude(IntPtr handle, float value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_get_vertical_error(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_geo_location_set_vertical_error(IntPtr handle, float value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_start(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_platform_location_provider_stop(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_configuration(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_diagnostics(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_get_log_level(IntPtr handle, out Microsoft.Azure.SpatialAnchors.SessionLogLevel result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_set_log_level(IntPtr handle, Microsoft.Azure.SpatialAnchors.SessionLogLevel value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_get_log_directory(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_set_log_directory(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_get_max_disk_size_in_mb(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_set_max_disk_size_in_mb(IntPtr handle, int value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_get_images_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] out bool result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_set_images_enabled(IntPtr handle, [MarshalAs(UnmanagedType.U1)] bool value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_create_manifest_async(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string description, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_diagnostics_submit_manifest_async(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string manifest_path);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_log_level(IntPtr handle, out Microsoft.Azure.SpatialAnchors.SessionLogLevel result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_log_level(IntPtr handle, Microsoft.Azure.SpatialAnchors.SessionLogLevel value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_session(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_session(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_location_provider(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_location_provider(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_session_id(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_middleware_versions(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_middleware_versions(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_sdk_package_type(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_sdk_package_type(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_token_required(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_get_access_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_set_access_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_get_authentication_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_set_authentication_token(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_token_required_event_args_get_deferral(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_deferral_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_deferral_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_deferral_complete(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_anchor_located(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_locate_anchors_completed(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_session_updated(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_updated_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_updated_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_updated_event_args_get_status(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_get_ready_for_create_progress(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_get_recommended_for_create_progress(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_get_session_create_hash(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_get_session_locate_hash(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_status_get_user_feedback(IntPtr handle, out Microsoft.Azure.SpatialAnchors.SessionUserFeedback result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_error(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_error_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_error_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_error_event_args_get_error_code(IntPtr handle, out Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_error_event_args_get_error_message(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_session_error_event_args_get_watcher(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_on_log_debug(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_on_log_debug_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_on_log_debug_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_on_log_debug_event_args_get_message(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_set_updated_sensor_fingerprint_required(IntPtr handle, ulong value, Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative value_fn);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_fingerprint_event_args_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_fingerprint_event_args_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_fingerprint_event_args_get_geo_position(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_sensor_fingerprint_event_args_set_geo_position(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_dispose(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_access_token_with_authentication_token_async(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string authentication_token, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_access_token_with_account_key_async(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string account_key, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_create_anchor_async(IntPtr handle, IntPtr anchor);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_create_watcher(IntPtr handle, IntPtr criteria, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_get_bypass_cache(IntPtr handle, [MarshalAs(UnmanagedType.U1)] out bool result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_set_bypass_cache(IntPtr handle, [MarshalAs(UnmanagedType.U1)] bool value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_get_requested_categories(IntPtr handle, out Microsoft.Azure.SpatialAnchors.AnchorDataCategory result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_set_requested_categories(IntPtr handle, Microsoft.Azure.SpatialAnchors.AnchorDataCategory value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_get_strategy(IntPtr handle, out Microsoft.Azure.SpatialAnchors.LocateStrategy result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_set_strategy(IntPtr handle, Microsoft.Azure.SpatialAnchors.LocateStrategy value);
        [DllImport(DllName, EntryPoint="ssc_anchor_locate_criteria_get_identifiers_flat", CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_get_identifiers(IntPtr handle, out IntPtr result, out int result_count);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_set_identifiers(IntPtr handle, [MarshalAs(UnmanagedType.LPArray, ArraySubType=UnmanagedType.LPStr, SizeParamIndex=2)] string[] value, int value_count);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_get_near_anchor(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_get_source_anchor(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_set_source_anchor(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_get_distance_in_meters(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_set_distance_in_meters(IntPtr handle, float value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_get_max_result_count(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_anchor_criteria_set_max_result_count(IntPtr handle, int value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_set_near_anchor(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_get_near_device(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_create(out IntPtr instance);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_get_distance_in_meters(IntPtr handle, out float result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_set_distance_in_meters(IntPtr handle, float value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_get_max_result_count(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_near_device_criteria_set_max_result_count(IntPtr handle, int value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_anchor_locate_criteria_set_near_device(IntPtr handle, IntPtr value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_anchor_properties_async(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] string identifier, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_nearby_anchor_ids_async(IntPtr handle, IntPtr criteria, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_ilist_string_release(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_ilist_string_addref(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_ilist_string_get_count(IntPtr handle, out int result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_ilist_string_get_item(IntPtr handle, int index, [MarshalAs(UnmanagedType.LPStr)] out string result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_ilist_string_set_item(IntPtr handle, int index, [MarshalAs(UnmanagedType.LPStr)] string value);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_ilist_string_remove_item(IntPtr handle, int index);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_active_watchers_count(IntPtr handle, out int result_count);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_active_watchers_items(IntPtr handle, [MarshalAs(UnmanagedType.LPArray), In, Out] IntPtr[] result_array, ref Int32 result_count);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_refresh_anchor_properties_async(IntPtr handle, IntPtr anchor);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_update_anchor_properties_async(IntPtr handle, IntPtr anchor);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_delete_anchor_async(IntPtr handle, IntPtr anchor);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_process_frame(IntPtr handle, IntPtr frame);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_get_session_status_async(IntPtr handle, out IntPtr result);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_start(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_stop(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_cloud_spatial_anchor_session_reset(IntPtr handle);
        [DllImport(DllName, CallingConvention=CallingConvention.Cdecl)]
        internal static extern Microsoft.Azure.SpatialAnchors.status ssc_get_error_details(IntPtr handle, [MarshalAs(UnmanagedType.LPStr)] out string result_message, [MarshalAs(UnmanagedType.LPStr)] out string result_requestCorrelationVector, [MarshalAs(UnmanagedType.LPStr)] out string result_responseCorrelationVector);
    }

    // CODE STARTS HERE

    abstract class BasePrivateDictionary<TKey, TValue> : IDictionary<TKey, TValue>
    {
        protected abstract int InternalGetCount();
        protected abstract TKey InternalGetKey(int index);
        protected abstract TValue InternalGetItem(TKey key);
        protected abstract void InternalSetItem(TKey key, TValue value);
        protected abstract void InternalRemoveKey(TKey key);

        public TValue this[TKey key] { get { return InternalGetItem(key); } set { InternalSetItem(key, value); } }

        public ICollection<TKey> Keys { get { return Enumerable.Range(0, InternalGetCount()).Select(n => InternalGetKey(n)).ToList().AsReadOnly(); } }

        public ICollection<TValue> Values { get { return Enumerable.Range(0, InternalGetCount()).Select(n => InternalGetKey(n)).Select(k => InternalGetItem(k)).ToList().AsReadOnly(); } }

        public int Count { get { return InternalGetCount(); } }

        public bool IsReadOnly { get { return false; } }

        public void Add(TKey key, TValue value)
        {
            try
            {
                InternalGetItem(key);
            }
            catch (KeyNotFoundException)
            {
                InternalSetItem(key, value);
                return;
            }
            throw new ArgumentException();
        }

        public void Add(KeyValuePair<TKey, TValue> item)
        {
            Add(item.Key, item.Value);
        }

        public void Clear()
        {
            while (InternalGetCount() > 0)
            {
                TKey key = InternalGetKey(0);
                InternalRemoveKey(key);
            }
        }

        public bool Contains(KeyValuePair<TKey, TValue> item)
        {
            try
            {
                TValue value = InternalGetItem(item.Key);
                if (Comparer<TValue>.Default.Compare(value, item.Value) == 0)
                {
                    return true;
                }
                return false;
            }
            catch (KeyNotFoundException)
            {
                return false;
            }
        }

        public bool ContainsKey(TKey key)
        {
            try
            {
                InternalGetItem(key);
            }
            catch (KeyNotFoundException)
            {
                return false;
            }
            return true;
        }

        public void CopyTo(KeyValuePair<TKey, TValue>[] array, int arrayIndex)
        {
            for (int i = 0; i < InternalGetCount(); ++i)
            {
                TKey key = InternalGetKey(i);
                array[arrayIndex + i] = new KeyValuePair<TKey, TValue>(key, InternalGetItem(key));
            }
        }

        public IEnumerator<KeyValuePair<TKey, TValue>> GetEnumerator()
        {
            for (int i = 0; i < InternalGetCount(); ++i)
            {
                TKey key = InternalGetKey(i);
                yield return new KeyValuePair<TKey, TValue>(key, InternalGetItem(key));
            }
        }

        public bool Remove(TKey key)
        {
            try
            {
                InternalGetItem(key);
            }
            catch (KeyNotFoundException)
            {
                return false;
            }
            InternalRemoveKey(key);
            return true;
        }

        public bool Remove(KeyValuePair<TKey, TValue> item)
        {
            return Remove(item.Key);
        }

        public bool TryGetValue(TKey key, out TValue value)
        {
            try
            {
                value = InternalGetItem(key);
                return true;
            }
            catch (KeyNotFoundException)
            {
                value = default(TValue);
                return false;
            }
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            for (int i = 0; i < InternalGetCount(); ++i)
            {
                TKey key = InternalGetKey(i);
                yield return new KeyValuePair<TKey, TValue>(key, InternalGetItem(key));
            }
        }
    }

    abstract class BasePrivateList<T> : IList<T>
    {
        protected abstract int InternalGetCount();
        protected abstract T InternalGetItem(int index);
        protected abstract void InternalSetItem(int index, T value);
        protected abstract void InternalRemoveItem(int index);

        public int Count { get { return InternalGetCount(); } }

        public bool IsReadOnly { get { return false; } }

        public T this[int index] { get { return InternalGetItem(index); } set { InternalSetItem(index, value); } }

        public int IndexOf(T item)
        {
            int count = InternalGetCount();
            for (int i = 0; i < count; i++)
            {
                if (Comparer<T>.Default.Compare(item, InternalGetItem(i)) == 0)
                {
                    return i;
                }
            }
            return -1;
        }

        public void Insert(int index, T item)
        {
            InternalSetItem(index, item);
        }

        public void RemoveAt(int index)
        {
            InternalRemoveItem(index);
        }

        public void Add(T item)
        {
            InternalSetItem(InternalGetCount(), item);
        }

        public void Clear()
        {
            while (InternalGetCount() > 0)
            {
                InternalRemoveItem(0);
            }
        }

        public bool Contains(T item)
        {
            return IndexOf(item) >= 0;
        }

        public void CopyTo(T[] array, int arrayIndex)
        {
            for (int i = 0; i < Count; ++i)
            {
                array[i + arrayIndex] = this[i];
            }
        }

        public bool Remove(T item)
        {
            int index = IndexOf(item);
            if (index < 0) return false;
            InternalRemoveItem(index);
            return true;
        }

        public IEnumerator<T> GetEnumerator()
        {
            for (int i = 0; i < Count; ++i)
            {
                yield return this[i];
            }
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            for (int i = 0; i < Count; ++i)
            {
                yield return this[i];
            }
        }
    }

    class IDictionary_String_String : BasePrivateDictionary<string, string>
    {
        internal IntPtr handle;
        internal IDictionary_String_String(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_addref(ahandle);
        }
        ~IDictionary_String_String()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_release(this.handle));
            this.handle = IntPtr.Zero;
        }
        protected override int InternalGetCount()
        {
            int result;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_get_count(this.handle, out result));
            return result;
        }
        protected override string InternalGetKey(int index)
        {
            string result;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_get_key(this.handle, index, out result));
            return result;
        }
        protected override string InternalGetItem(string key)
        {
            string result;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_get_item(this.handle, key, out result));
            return result;
        }
        protected override void InternalSetItem(string key, string value)
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_set_item(this.handle, key, value));
        }
        protected override void InternalRemoveKey(string key)
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_idictionary_string_string_remove_key(this.handle, key));
        }
    }

    class IList_String : BasePrivateList<String>
    {
        internal IntPtr handle;
        internal IList_String(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_ilist_string_addref(ahandle);
        }
        ~IList_String()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_ilist_string_release(this.handle));
            this.handle = IntPtr.Zero;
        }
        protected override int InternalGetCount()
        {
            int result;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_ilist_string_get_count(this.handle, out result));
            return result;
        }
        protected override String InternalGetItem(int index)
        {
            string result;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_ilist_string_get_item(this.handle, index, out result));
            return result;
        }
        protected override void InternalSetItem(int index, String value)
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_ilist_string_set_item(this.handle, index, value));
        }
        protected override void InternalRemoveItem(int index)
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_ilist_string_remove_item(this.handle, index));
        }
    }
    /// <summary>
    /// Defines logging severity levels.
    /// </summary>
    public enum SessionLogLevel : int
    {
        /// <summary>
        /// Specifies that logging should not write any messages.
        /// </summary>
        None = 0,
        /// <summary>
        /// Specifies logs that indicate when the current flow of execution stops due to a failure.
        /// </summary>
        Error = 1,
        /// <summary>
        /// Specifies logs that highlight an abnormal or unexpected event, but do not otherwise cause execution to stop.
        /// </summary>
        Warning = 2,
        /// <summary>
        /// Specifies logs that track the general flow.
        /// </summary>
        Information = 3,
        /// <summary>
        /// Specifies logs used for interactive investigation during development.
        /// </summary>
        Debug = 4,
        /// <summary>
        /// Specifies all messages should be logged.
        /// </summary>
        All = 5,
    }

    /// <summary>
    /// Use this enumeration to determine whether an anchor was located, and the reason why it may have failed.
    /// </summary>
    public enum LocateAnchorStatus : int
    {
        /// <summary>
        /// The anchor was already being tracked.
        /// </summary>
        AlreadyTracked = 0,
        /// <summary>
        /// The anchor was found.
        /// </summary>
        Located = 1,
        /// <summary>
        /// The anchor was not found.
        /// </summary>
        NotLocated = 2,
        /// <summary>
        /// The anchor cannot be found - it was deleted or the identifier queried for was incorrect.
        /// </summary>
        NotLocatedAnchorDoesNotExist = 3,
    }

    /// <summary>
    /// Use this enumeration to indicate the method by which anchors can be located.
    /// </summary>
    public enum LocateStrategy : int
    {
        /// <summary>
        /// Indicates that any method is acceptable.
        /// </summary>
        AnyStrategy = 0,
        /// <summary>
        /// Indicates that anchors will be located only by visual information.
        /// </summary>
        VisualInformation = 1,
        /// <summary>
        /// Indicates that anchors will be located primarily by relationship to other anchors.
        /// </summary>
        Relationship = 2,
    }

    /// <summary>
    /// Possible values returned when querying PlatformLocationProvider for GeoLocation capabilities
    /// </summary>
    public enum GeoLocationStatusResult : int
    {
        /// <summary>
        /// GeoLocation data is available.
        /// </summary>
        Available = 0,
        /// <summary>
        /// GeoLocation was disabled in the SensorCapabilities.
        /// </summary>
        DisabledCapability = 1,
        /// <summary>
        /// No sensor fingerprint provider has been created.
        /// </summary>
        MissingSensorFingerprintProvider = 2,
        /// <summary>
        /// No GPS data has been received.
        /// </summary>
        NoGPSData = 3,
    }

    /// <summary>
    /// Possible values returned when querying PlatformLocationProvider for Wifi capabilities
    /// </summary>
    public enum WifiStatusResult : int
    {
        /// <summary>
        /// Wifi data is available.
        /// </summary>
        Available = 0,
        /// <summary>
        /// Wifi was disabled in the SensorCapabilities.
        /// </summary>
        DisabledCapability = 1,
        /// <summary>
        /// No sensor fingerprint provider has been created.
        /// </summary>
        MissingSensorFingerprintProvider = 2,
        /// <summary>
        /// No Wifi access points have been found.
        /// </summary>
        NoAccessPointsFound = 3,
    }

    /// <summary>
    /// Possible values returned when querying PlatformLocationProvider for Bluetooth capabilities
    /// </summary>
    public enum BluetoothStatusResult : int
    {
        /// <summary>
        /// Bluetooth beacons data is available.
        /// </summary>
        Available = 0,
        /// <summary>
        /// Bluetooth was disabled in the SensorCapabilities.
        /// </summary>
        DisabledCapability = 1,
        /// <summary>
        /// No sensor fingerprint provider has been created.
        /// </summary>
        MissingSensorFingerprintProvider = 2,
        /// <summary>
        /// No bluetooth beacons have been found.
        /// </summary>
        NoBeaconsFound = 3,
    }

    /// <summary>
    /// Use this enumeration to describe the kind of feedback that can be provided to the user about data
    /// </summary>
    public enum SessionUserFeedback : int
    {
        /// <summary>
        /// No specific feedback is available.
        /// </summary>
        None = 0,
        /// <summary>
        /// Device is not moving enough to create a neighborhood of key-frames.
        /// </summary>
        NotEnoughMotion = 1,
        /// <summary>
        /// Device is moving too quickly for stable tracking.
        /// </summary>
        MotionTooQuick = 2,
        /// <summary>
        /// The environment doesn't have enough feature points for stable tracking.
        /// </summary>
        NotEnoughFeatures = 4,
    }

    /// <summary>
    /// Identifies the source of an error in a cloud spatial session.
    /// </summary>
    public enum CloudSpatialErrorCode : int
    {
        /// <summary>
        /// Amount of Metadata exceeded the allowed limit (currently 4k).
        /// </summary>
        MetadataTooLarge = 0,
        /// <summary>
        /// Application did not provide valid credentials and therefore could not authenticate with the Cloud Service.
        /// </summary>
        ApplicationNotAuthenticated = 1,
        /// <summary>
        /// Application did not provide any credentials for authorization with the Cloud Service.
        /// </summary>
        ApplicationNotAuthorized = 2,
        /// <summary>
        /// Multiple stores (on the same device or different devices) made concurrent changes to the same Spatial Entity and so this particular change was rejected.
        /// </summary>
        ConcurrencyViolation = 3,
        /// <summary>
        /// Not enough Neighborhood Spatial Data was available to complete the desired Create operation.
        /// </summary>
        NotEnoughSpatialData = 4,
        /// <summary>
        /// No Spatial Location Hint was available (or it was not specific enough) to support rediscovery from the Cloud at a later time.
        /// </summary>
        NoSpatialLocationHint = 5,
        /// <summary>
        /// Application cannot connect to the Cloud Service.
        /// </summary>
        CannotConnectToServer = 6,
        /// <summary>
        /// Cloud Service returned an unspecified error.
        /// </summary>
        ServerError = 7,
        /// <summary>
        /// The Spatial Entity has already been associated with a different Store object, so cannot be used with this current Store object.
        /// </summary>
        AlreadyAssociatedWithADifferentStore = 8,
        /// <summary>
        /// SpatialEntity already exists in a Store but TryCreateAsync was called.
        /// </summary>
        AlreadyExists = 9,
        /// <summary>
        /// A locate operation was requested, but the criteria does not specify anything to look for.
        /// </summary>
        NoLocateCriteriaSpecified = 10,
        /// <summary>
        /// An access token was required but not specified; handle the TokenRequired event on the session to provide one.
        /// </summary>
        NoAccessTokenSpecified = 11,
        /// <summary>
        /// The session was unable to obtain an access token and so the creation could not proceed.
        /// </summary>
        UnableToObtainAccessToken = 12,
        /// <summary>
        /// There were too many requests made from this Account ID, so it is being throttled.
        /// </summary>
        TooManyRequests = 13,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid because they're missing a required value.
        /// </summary>
        LocateCriteriaMissingRequiredValues = 14,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid because they're in conflict with settings for another mode.
        /// </summary>
        LocateCriteriaInConflict = 15,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid values.
        /// </summary>
        LocateCriteriaInvalid = 16,
        /// <summary>
        /// The LocateCriteria options that were specified are not valid because they're not currently supported.
        /// </summary>
        LocateCriteriaNotSupported = 17,
        /// <summary>
        /// Encountered an unknown error on the session.
        /// </summary>
        Unknown = 19,
        /// <summary>
        /// The Http request timed out.
        /// </summary>
        HttpTimeout = 20,
        /// <summary>
        /// The transform matrix of platform anchor passed in is invalid. It is either not affine, or its rotation matrix is not orthonormal. The second case may be caused due to its containing a non-uniform scale or a uniform scale other than 1, or just some malformed values.
        /// </summary>
        InvalidAnchorTransformRigidity = 21,
    }

    /// <summary>
    /// Use the data category values to determine what data is returned in an AnchorLocateCriteria object.
    /// </summary>
    public enum AnchorDataCategory : int
    {
        /// <summary>
        /// No data is returned.
        /// </summary>
        None = 0,
        /// <summary>
        /// Returns Anchor properties including AppProperties.
        /// </summary>
        Properties = 1,
        /// <summary>
        /// Returns spatial information about an Anchor.
        /// </summary>
        /// <remarks>
        /// Returns a LocalAnchor for any returned CloudSpatialAnchors from the service.
        /// </remarks>
        Spatial = 2,
    }

    /// <summary>
    /// Informs the application that a locate operation has completed.
    /// </summary>
    /// <param name="sender">
    /// The session that ran the locate operation.
    /// </param>
    /// <param name="args">
    /// The arguments describing the operation completion.
    /// </param>
    public delegate void LocateAnchorsCompletedDelegate(object sender, Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs args);

    /// <summary>
    /// Informs the application that a session requires an updated access token or authentication token.
    /// </summary>
    /// <param name="sender">
    /// The session that requires an updated access token or authentication token.
    /// </param>
    /// <param name="args">
    /// The event arguments that require an AccessToken property or an AuthenticationToken property to be set.
    /// </param>
    public delegate void TokenRequiredDelegate(object sender, Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs args);

    /// <summary>
    /// Informs the application that a session has located an anchor or discovered that it cannot yet be located.
    /// </summary>
    /// <param name="sender">
    /// The session that fires the event.
    /// </param>
    /// <param name="args">
    /// Information about the located anchor.
    /// </param>
    public delegate void AnchorLocatedDelegate(object sender, Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs args);

    /// <summary>
    /// Informs the application that a session has been updated with new information.
    /// </summary>
    /// <param name="sender">
    /// The session that has been updated.
    /// </param>
    /// <param name="args">
    /// Information about the current session status.
    /// </param>
    public delegate void SessionUpdatedDelegate(object sender, Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs args);

    /// <summary>
    /// Informs the application that an error occurred in a session.
    /// </summary>
    /// <param name="sender">
    /// The session that fired the event.
    /// </param>
    /// <param name="args">
    /// Information about the error.
    /// </param>
    public delegate void SessionErrorDelegate(object sender, Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs args);

    /// <summary>
    /// Informs the application of a debug log message.
    /// </summary>
    /// <param name="sender">
    /// The session that fired the event.
    /// </param>
    /// <param name="args">
    /// Information about the log.
    /// </param>
    public delegate void OnLogDebugDelegate(object sender, Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs args);

    /// <summary>
    /// Informs the application that a session is requesting an updated sensor fingerprint to help with anchor recall.
    /// </summary>
    /// <param name="sender">
    /// The session that is requesting optional sensor data for improving recall accuracy over time.
    /// </param>
    /// <param name="args">
    /// The event arguments that allow sensor properties to be set.
    /// </param>
    public delegate void UpdatedSensorFingerprintRequiredDelegate(object sender, Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs args);

    /// <summary>
    /// The exception that is thrown when an error occurs processing cloud spatial anchors.
    /// </summary>
    public class CloudSpatialException : Exception
    {
        /// <summary>Creates a new instance of the <see cref='CloudSpatialException'/> class.</summary>
        public CloudSpatialException()
        {
            this.ErrorCode = default(CloudSpatialErrorCode);
        }

        /// <summary>Creates a new instance of the <see cref='CloudSpatialException'/> class.</summary>
        /// <param name='code'>Error code for this exception.</param>
        public CloudSpatialException(CloudSpatialErrorCode code)
        {
            this.ErrorCode = code;
        }

        /// <summary>Creates a new instance of the <see cref='CloudSpatialException'/> class.</summary>
        /// <param name='code'>Error code for this exception.</param>
        /// <param name='message'>Plain text error message for this exception.</param>
        public CloudSpatialException(CloudSpatialErrorCode code, string message) : base(message)
        {
            this.ErrorCode = code;
        }

        /// <summary>Creates a new instance of the <see cref='CloudSpatialException'/> class.</summary>
        /// <param name='code'>Error code for this exception.</param>
        /// <param name='message'>Plain text error message for this exception.</param>
        /// <param name='requestCorrelationVector'>Request correlation vector for this exception.</param>
        /// <param name='responseCorrelationVector'>Response correlation vector for this exception.</param>
        public CloudSpatialException(CloudSpatialErrorCode code, string message, string requestCorrelationVector, string responseCorrelationVector) : base(message)
        {
            this.ErrorCode = code;
            this.RequestCorrelationVector = requestCorrelationVector;
            this.ResponseCorrelationVector = responseCorrelationVector;
        }

        /// <summary>Creates a new instance of the <see cref='CloudSpatialException'/> class.</summary>
        /// <param name='code'>Error code for this exception.</param>
        /// <param name='message'>Plain text error message for this exception.</param>
        /// <param name='requestCorrelationVector'>Request correlation vector for this exception.</param>
        /// <param name='responseCorrelationVector'>Response correlation vector for this exception.</param>
        /// <param name='inner'>Exception that caused this exception to be thrown.</param>
        public CloudSpatialException(CloudSpatialErrorCode code, string message, string requestCorrelationVector, string responseCorrelationVector, Exception inner) : base(message, inner)
        {
            this.ErrorCode = code;
            this.RequestCorrelationVector = requestCorrelationVector;
            this.ResponseCorrelationVector = responseCorrelationVector;
        }

        public CloudSpatialErrorCode ErrorCode { get; }

        public string RequestCorrelationVector { get; }

        public string ResponseCorrelationVector { get; }

    }

    /// <summary>
    /// Specifies a set of criteria for locating anchors.
    /// </summary>
    /// <remarks>
    /// Within the object, the properties Identifiers, NearAnchor, and NearDevice
    /// help specify which anchors should be found. BypassCache and Strategy
    /// help specify how anchors should be found, while RequestedCategories helps specify
    /// the type of data requested.
    /// Identifiers, NearAnchor, and NearDevice properties work exclusive of each other,
    /// and only one of them should be provided.
    /// Properties for exactly ONE of either Identifiers, NearAnchor, or NearDevice
    /// is required. Providing none or more than one is prohibited.
    /// See "How-to" and "Concepts" pages for more information and examples.
    /// </remarks>
    public partial class AnchorLocateCriteria
    {
        internal IntPtr handle;
        internal AnchorLocateCriteria(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_addref(ahandle);
        }
        /// <summary>
        /// Initializes a new AnchorLocateCriteria instance.
        /// </summary>
        public AnchorLocateCriteria()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
        }

        ~AnchorLocateCriteria()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Whether locate should bypass the local cache of anchors.
        /// </summary>
        public bool BypassCache
        {
            get
            {
                bool result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_get_bypass_cache(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_set_bypass_cache(this.handle, value));
            }
        }

        /// <summary>
        /// Categories of data that are requested.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.AnchorDataCategory RequestedCategories
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.AnchorDataCategory result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_get_requested_categories(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_set_requested_categories(this.handle, value));
            }
        }

        /// <summary>
        /// Indicates the strategy by which anchors will be located.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.LocateStrategy Strategy
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.LocateStrategy result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_get_strategy(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_set_strategy(this.handle, value));
            }
        }

        /// <summary>
        /// Indicates the CloudSpatialAnchor identifiers to locate. Maximum limit of 35 anchors per watcher.
        /// </summary>
        /// <remarks>
        /// Any anchors within this list will match this criteria.
        /// </remarks>
        public string[] Identifiers
        {
            get
            {
                IntPtr result;
                int result_length;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_get_identifiers(this.handle, out result, out result_length));
                return Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.IntPtrToStringArray(result, result_length);
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_set_identifiers(this.handle, value, value?.Length ?? 0));
            }
        }

        /// <summary>
        /// Indicates that anchors to locate should be close to a specific anchor.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.NearAnchorCriteria NearAnchor
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.NearAnchorCriteria result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_get_near_anchor(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.NearAnchorCriteria(result_handle, transfer:true) : null;
                return result_object;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_set_near_anchor(this.handle, value != null ? value.handle : IntPtr.Zero));
            }
        }

        /// <summary>
        /// Indicates that anchors to locate should be close to the device.
        /// </summary>
        /// <remarks>
        /// Any enabled sensors will be used to help discover anchors around your device.
        /// To have the best chance of finding anchors, you should configure the
        /// SensorCapabilities to give the session access to all appropriate sensors.
        /// </remarks>
        public Microsoft.Azure.SpatialAnchors.NearDeviceCriteria NearDevice
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.NearDeviceCriteria result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_get_near_device(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.NearDeviceCriteria(result_handle, transfer:true) : null;
                return result_object;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_locate_criteria_set_near_device(this.handle, value != null ? value.handle : IntPtr.Zero));
            }
        }

    }

    /// <summary>
    /// Use this type to determine the status of an anchor after a locate operation.
    /// </summary>
    public partial class AnchorLocatedEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal AnchorLocatedEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_addref(ahandle);
        }
        ~AnchorLocatedEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The cloud spatial anchor that was located.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor Anchor
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_anchor(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor(result_handle, transfer:true) : null;
                return result_object;
            }
        }

        /// <summary>
        /// The spatial anchor that was located.
        /// </summary>
        public string Identifier
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_identifier(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Specifies whether the anchor was located, or the reason why it may have failed.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.LocateAnchorStatus Status
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.LocateAnchorStatus result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_status(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Gets the LocateStrategy that reflects the strategy that was used to find the anchor. Valid only when the anchor was found.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.LocateStrategy Strategy
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.LocateStrategy result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_strategy(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// The watcher that located the anchor.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Watcher
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_anchor_located_event_args_get_watcher(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(result_handle, transfer:true) : null;
                return result_object;
            }
        }

    }

    /// <summary>
    /// Use this class to represent an anchor in space that can be persisted in a CloudSpatialAnchorSession.
    /// </summary>
    public partial class CloudSpatialAnchor
    {
        internal IntPtr handle;
        internal CloudSpatialAnchor(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_addref(ahandle);
        }
        public CloudSpatialAnchor()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
        }

        ~CloudSpatialAnchor()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The anchor in the local mixed reality system.
        /// </summary>
        public IntPtr LocalAnchor
        {
            get
            {
                IntPtr result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_get_local_anchor(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_set_local_anchor(this.handle, value));
            }
        }

        /// <summary>
        /// The time the anchor will expire.
        /// </summary>
        public DateTimeOffset Expiration
        {
            get
            {
                long result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_get_expiration(this.handle, out result));
                return (result == 0) ? DateTimeOffset.MaxValue : DateTimeOffset.FromUnixTimeMilliseconds(result);
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_set_expiration(this.handle, (value == DateTimeOffset.MaxValue) ? 0 : value.ToUnixTimeMilliseconds()));
            }
        }

        /// <summary>
        /// The persistent identifier of this spatial anchor in the cloud service.
        /// </summary>
        public string Identifier
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_get_identifier(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// A dictionary of application-defined properties that is stored with the anchor.
        /// </summary>
        public System.Collections.Generic.IDictionary<string, string> AppProperties
        {
            get
            {
                IntPtr result_handle;
                IDictionary_String_String result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_get_app_properties(this.handle, out result_handle));
                result_object = new IDictionary_String_String(result_handle, transfer:true);
                return result_object;
            }
        }

        /// <summary>
        /// An opaque version tag that can be used for concurrency control.
        /// </summary>
        public string VersionTag
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_get_version_tag(this.handle, out result));
                return result;
            }
        }

    }

    /// <summary>
    /// Use this class to defer completing an operation.
    /// </summary>
    /// <remarks>
    /// This is similar to the Windows.Foundation.Deferral class.
    /// </remarks>
    public partial class CloudSpatialAnchorSessionDeferral
    {
        internal IntPtr handle;
        internal CloudSpatialAnchorSessionDeferral(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_addref(ahandle);
        }
        ~CloudSpatialAnchorSessionDeferral()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Mark the deferred operation as complete and perform any associated tasks.
        /// </summary>
        public void Complete()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_deferral_complete(this.handle));
        }

    }

    /// <summary>
    /// Use this class to configure session diagnostics that can be collected and submitted to improve system quality.
    /// </summary>
    public partial class CloudSpatialAnchorSessionDiagnostics
    {
        internal IntPtr handle;
        internal CloudSpatialAnchorSessionDiagnostics(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_addref(ahandle);
        }
        ~CloudSpatialAnchorSessionDiagnostics()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Level of tracing to log.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.SessionLogLevel LogLevel
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.SessionLogLevel result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_get_log_level(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_set_log_level(this.handle, value));
            }
        }

        /// <summary>
        /// Directory into which temporary log files and manifests are saved.
        /// </summary>
        public string LogDirectory
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_get_log_directory(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_set_log_directory(this.handle, value));
            }
        }

        /// <summary>
        /// Approximate maximum disk space to be used, in megabytes.
        /// </summary>
        /// <remarks>
        /// When this value is set to zero, no information will be written to disk.
        /// </remarks>
        public int MaxDiskSizeInMB
        {
            get
            {
                int result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_get_max_disk_size_in_mb(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_set_max_disk_size_in_mb(this.handle, value));
            }
        }

        /// <summary>
        /// Whether images should be logged.
        /// </summary>
        public bool ImagesEnabled
        {
            get
            {
                bool result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_get_images_enabled(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_set_images_enabled(this.handle, value));
            }
        }

        /// <summary>
        /// Creates a manifest of log files and submission information to be uploaded.
        /// </summary>
        /// <param name="description">
        /// Description to be added to the diagnostics manifest.
        /// </param>
        public async System.Threading.Tasks.Task<string> CreateManifestAsync(string description)
        {
            return await Task.Run(() =>
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_create_manifest_async(this.handle, description, out result));
                return result;
            });
        }

        /// <summary>
        /// Submits a diagnostics manifest and cleans up its resources.
        /// </summary>
        /// <param name="manifestPath">
        /// Path to the manifest file to submit.
        /// </param>
        public async System.Threading.Tasks.Task SubmitManifestAsync(string manifestPath)
        {
            await Task.Run(() =>
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_diagnostics_submit_manifest_async(this.handle, manifestPath));
            });
        }

    }

    /// <summary>
    /// Use this class to create, locate and manage spatial anchors.
    /// </summary>
    public partial class CloudSpatialAnchorSession : IDisposable, ICookie
    {
        internal IntPtr handle;
        internal CloudSpatialAnchorSession(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_addref(ahandle);
            Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Add(this);
        }
        /// <summary>
        /// Initializes a new instance with a default configuration.
        /// </summary>
        public CloudSpatialAnchorSession()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
            Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Add(this);
        }

        /// <summary>
        /// Finalizes an instance of the <see cref="CloudSpatialAnchorSession"/> class.
        /// </summary>
        ~CloudSpatialAnchorSession()
        {
            NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.ssc_cloud_spatial_anchor_session_release(this.handle));
        }

        /// <summary>
        /// Performs application-defined tasks associated with freeing, releasing, or resetting unmanaged resources.
        /// </summary>
        public void Dispose()
        {
            NativeLibraryHelpers.CheckStatus(this.handle, NativeLibrary.ssc_cloud_spatial_anchor_session_dispose (this.handle));
        }

        /// <summary>
        /// The configuration information for the session.
        /// </summary>
        /// <remarks>
        /// Configuration settings take effect when the session is started.
        /// </remarks>
        public Microsoft.Azure.SpatialAnchors.SessionConfiguration Configuration
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.SessionConfiguration result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_configuration(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.SessionConfiguration(result_handle, transfer:true) : null;
                return result_object;
            }
        }

        /// <summary>
        /// The diagnostics settings for the session, which can be used to collect and submit data for troubleshooting and improvements.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDiagnostics Diagnostics
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDiagnostics result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_diagnostics(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDiagnostics(result_handle, transfer:true) : null;
                return result_object;
            }
        }

        /// <summary>
        /// Logging level for the session log events.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.SessionLogLevel LogLevel
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.SessionLogLevel result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_log_level(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_log_level(this.handle, value));
            }
        }

        /// <summary>
        /// The tracking session used to help locate anchors.
        /// </summary>
        /// <remarks>
        /// This property is not available on the HoloLens platform.
        /// </remarks>
        public IntPtr Session
        {
            get
            {
                IntPtr result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_session(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_session(this.handle, value));
            }
        }

        /// <summary>
        /// Location provider used to create and locate anchors using [Coarse Relocalization](https://aka.ms/CoarseRelocalization).
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.PlatformLocationProvider LocationProvider
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.PlatformLocationProvider result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_location_provider(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.PlatformLocationProvider(result_handle, transfer:true) : null;
                return result_object;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_location_provider(this.handle, value != null ? value.handle : IntPtr.Zero));
            }
        }

        /// <summary>
        /// The unique identifier for the session.
        /// </summary>
        public string SessionId
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_session_id(this.handle, out result));
                return result;
            }
        }

        private string MiddlewareVersions
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_middleware_versions(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_middleware_versions(this.handle, value));
            }
        }

        private string SdkPackageType
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_sdk_package_type(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_sdk_package_type(this.handle, value));
            }
        }

        private ulong cookie;
        ulong ICookie.Cookie { get { return this.cookie; } set { this.cookie = value; } }
        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate _TokenRequired;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(TokenRequiredDelegateNative))]
        private static void TokenRequiredStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate handler = (instance == null) ? null : instance._TokenRequired;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.TokenRequiredEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.TokenRequiredDelegateNative TokenRequiredStaticHandlerDelegate = TokenRequiredStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.TokenRequiredDelegate TokenRequired
        {
            add
            {
                this._TokenRequired += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_token_required(this.handle, this.cookie, TokenRequiredStaticHandlerDelegate));
            }
            remove
            {
                this._TokenRequired -= value;
            }
        }

        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate _AnchorLocated;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(AnchorLocatedDelegateNative))]
        private static void AnchorLocatedStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate handler = (instance == null) ? null : instance._AnchorLocated;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegateNative AnchorLocatedStaticHandlerDelegate = AnchorLocatedStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.AnchorLocatedDelegate AnchorLocated
        {
            add
            {
                this._AnchorLocated += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_anchor_located(this.handle, this.cookie, AnchorLocatedStaticHandlerDelegate));
            }
            remove
            {
                this._AnchorLocated -= value;
            }
        }

        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate _LocateAnchorsCompleted;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(LocateAnchorsCompletedDelegateNative))]
        private static void LocateAnchorsCompletedStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate handler = (instance == null) ? null : instance._LocateAnchorsCompleted;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegateNative LocateAnchorsCompletedStaticHandlerDelegate = LocateAnchorsCompletedStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedDelegate LocateAnchorsCompleted
        {
            add
            {
                this._LocateAnchorsCompleted += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_locate_anchors_completed(this.handle, this.cookie, LocateAnchorsCompletedStaticHandlerDelegate));
            }
            remove
            {
                this._LocateAnchorsCompleted -= value;
            }
        }

        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate _SessionUpdated;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(SessionUpdatedDelegateNative))]
        private static void SessionUpdatedStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate handler = (instance == null) ? null : instance._SessionUpdated;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.SessionUpdatedEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegateNative SessionUpdatedStaticHandlerDelegate = SessionUpdatedStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.SessionUpdatedDelegate SessionUpdated
        {
            add
            {
                this._SessionUpdated += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_session_updated(this.handle, this.cookie, SessionUpdatedStaticHandlerDelegate));
            }
            remove
            {
                this._SessionUpdated -= value;
            }
        }

        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.SessionErrorDelegate _Error;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(SessionErrorDelegateNative))]
        private static void ErrorStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.SessionErrorDelegate handler = (instance == null) ? null : instance._Error;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.SessionErrorDelegateNative ErrorStaticHandlerDelegate = ErrorStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.SessionErrorDelegate Error
        {
            add
            {
                this._Error += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_error(this.handle, this.cookie, ErrorStaticHandlerDelegate));
            }
            remove
            {
                this._Error -= value;
            }
        }

        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate _OnLogDebug;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(OnLogDebugDelegateNative))]
        private static void OnLogDebugStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate handler = (instance == null) ? null : instance._OnLogDebug;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.OnLogDebugDelegateNative OnLogDebugStaticHandlerDelegate = OnLogDebugStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.OnLogDebugDelegate OnLogDebug
        {
            add
            {
                this._OnLogDebug += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_on_log_debug(this.handle, this.cookie, OnLogDebugStaticHandlerDelegate));
            }
            remove
            {
                this._OnLogDebug -= value;
            }
        }

        /// <summary>Registered callbacks on this instance.</summary>
        private event Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate _UpdatedSensorFingerprintRequired;
        /// <summary>Static handler.</summary>
        [AOT.MonoPInvokeCallback(typeof(UpdatedSensorFingerprintRequiredDelegateNative))]
        private static void UpdatedSensorFingerprintRequiredStaticHandler(ulong cookie, IntPtr args)
        {
            var instance = Microsoft.Azure.SpatialAnchors.CookieTracker<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSession>.Lookup(cookie);
            Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate handler = (instance == null) ? null : instance._UpdatedSensorFingerprintRequired;
            if (handler != null)
            {
                handler(instance, new Microsoft.Azure.SpatialAnchors.SensorFingerprintEventArgs(args, transfer:false));
            }
        }
        /// <summary>This static delegate instance keeps callbacks alive.</summary>
        private static Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegateNative UpdatedSensorFingerprintRequiredStaticHandlerDelegate = UpdatedSensorFingerprintRequiredStaticHandler;
        public event Microsoft.Azure.SpatialAnchors.UpdatedSensorFingerprintRequiredDelegate UpdatedSensorFingerprintRequired
        {
            add
            {
                this._UpdatedSensorFingerprintRequired += value;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_set_updated_sensor_fingerprint_required(this.handle, this.cookie, UpdatedSensorFingerprintRequiredStaticHandlerDelegate));
            }
            remove
            {
                this._UpdatedSensorFingerprintRequired -= value;
            }
        }

        /// <summary>
        /// Gets the Azure Spatial Anchors access token from authentication token.
        /// </summary>
        /// <param name="authenticationToken">
        /// Authentication token.
        /// </param>
        public async System.Threading.Tasks.Task<string> GetAccessTokenWithAuthenticationTokenAsync(string authenticationToken)
        {
            return await Task.Run(() =>
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_access_token_with_authentication_token_async(this.handle, authenticationToken, out result));
                return result;
            });
        }

        /// <summary>
        /// Gets the Azure Spatial Anchors access token from account key.
        /// </summary>
        /// <param name="accountKey">
        /// Account key.
        /// </param>
        public async System.Threading.Tasks.Task<string> GetAccessTokenWithAccountKeyAsync(string accountKey)
        {
            return await Task.Run(() =>
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_access_token_with_account_key_async(this.handle, accountKey, out result));
                return result;
            });
        }

        /// <summary>
        /// Creates a new persisted spatial anchor from the specified local anchor and string properties.
        /// </summary>
        /// <param name="anchor">
        /// Anchor to be persisted.
        /// </param>
        /// <remarks>
        /// The local anchor passed into this method must have a valid transform. Note some platforms supported
        /// by Azure Spatial Anchors such as iOS allow transforms with scale component != 1.0. Azure Spatial Anchors SDK
        /// does not support such transforms and it will fail to create the spatial anchor with error code
        /// InvalidAnchorTransformRigidity. Any scale handling for anchors must be done at the app level.
        /// </remarks>
        public async System.Threading.Tasks.Task CreateAnchorAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor anchor)
        {
            await Task.Run(() =>
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_create_anchor_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
            });
        }

        /// <summary>
        /// Creates a new object that watches for anchors that meet the specified criteria.
        /// </summary>
        /// <param name="criteria">
        /// Criteria for anchors to watch for.
        /// </param>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher CreateWatcher(Microsoft.Azure.SpatialAnchors.AnchorLocateCriteria criteria)
        {
            IntPtr result_handle;
            Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher result_object;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_create_watcher(this.handle, criteria != null ? criteria.handle : IntPtr.Zero, out result_handle));
            result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(result_handle, transfer:true) : null;
            return result_object;
        }

        /// <summary>
        /// Gets a cloud spatial anchor for the given identifier, even if it hasn't been located yet.
        /// </summary>
        /// <param name="identifier">
        /// The identifier to look for.
        /// </param>
        public async System.Threading.Tasks.Task<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor> GetAnchorPropertiesAsync(string identifier)
        {
            return await Task.Run(() =>
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_anchor_properties_async(this.handle, identifier, out result_handle));
                result_object = new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor(result_handle, transfer:true);
                return result_object;
            });
        }

        /// <summary>
        /// Gets a list of all nearby cloud spatial anchor ids corresponding to a given criteria.
        /// </summary>
        /// <param name="criteria">
        /// The search criteria.
        /// </param>
        public async System.Threading.Tasks.Task<System.Collections.Generic.IList<string>> GetNearbyAnchorIdsAsync(Microsoft.Azure.SpatialAnchors.NearDeviceCriteria criteria)
        {
            return await Task.Run(() =>
            {
                IntPtr result_handle;
                IList_String result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_nearby_anchor_ids_async(this.handle, criteria != null ? criteria.handle : IntPtr.Zero, out result_handle));
                result_object = new IList_String(result_handle, transfer:true);
                return result_object;
            });
        }

        /// <summary>
        /// Gets a list of active watchers.
        /// </summary>
        public System.Collections.Generic.IReadOnlyList<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher> GetActiveWatchers()
        {
            System.Collections.Generic.IReadOnlyList<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher> result;
            IntPtr[] result_array;
            int result_count;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_active_watchers_count(this.handle, out result_count));
            result_array = new IntPtr[result_count];
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_active_watchers_items(this.handle, result_array, ref result_count));
            result = result_array.Take(result_count).Select(handle => new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(handle, transfer:true)).ToList().AsReadOnly();
            return result;
        }

        /// <summary>
        /// Refreshes properties for the specified spatial anchor.
        /// </summary>
        /// <param name="anchor">
        /// The anchor to refresh.
        /// </param>
        public async System.Threading.Tasks.Task RefreshAnchorPropertiesAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor anchor)
        {
            await Task.Run(() =>
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_refresh_anchor_properties_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
            });
        }

        /// <summary>
        /// Updates the specified spatial anchor.
        /// </summary>
        /// <param name="anchor">
        /// The anchor to be updated.
        /// </param>
        public async System.Threading.Tasks.Task UpdateAnchorPropertiesAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor anchor)
        {
            await Task.Run(() =>
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_update_anchor_properties_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
            });
        }

        /// <summary>
        /// Deletes a persisted spatial anchor.
        /// </summary>
        /// <param name="anchor">
        /// The anchor to be deleted.
        /// </param>
        public async System.Threading.Tasks.Task DeleteAnchorAsync(Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor anchor)
        {
            await Task.Run(() =>
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_delete_anchor_async(this.handle, anchor != null ? anchor.handle : IntPtr.Zero));
            });
        }

        /// <summary>
        /// Applications must call this method on platforms where per-frame processing is required.
        /// </summary>
        /// <param name="frame">
        /// AR frame to process.
        /// </param>
        /// <remarks>
        /// This method is not available on the HoloLens platform.
        /// </remarks>
        public void ProcessFrame(IntPtr frame)
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_process_frame(this.handle, frame));
        }

        /// <summary>
        /// Gets an object describing the status of the session.
        /// </summary>
        public async System.Threading.Tasks.Task<Microsoft.Azure.SpatialAnchors.SessionStatus> GetSessionStatusAsync()
        {
            return await Task.Run(() =>
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.SessionStatus result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_get_session_status_async(this.handle, out result_handle));
                result_object = new Microsoft.Azure.SpatialAnchors.SessionStatus(result_handle, transfer:true);
                return result_object;
            });
        }

        /// <summary>
        /// Begins capturing environment data for the session.
        /// </summary>
        public void Start()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_start(this.handle));
        }

        /// <summary>
        /// Stops capturing environment data for the session and cancels any outstanding locate operations. Environment data is maintained.
        /// </summary>
        public void Stop()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_stop(this.handle));
        }

        /// <summary>
        /// Resets environment data that has been captured in this session; applications must call this method when tracking is lost.
        /// </summary>
        /// <remarks>
        /// On any platform, calling the method will clean all internal cached state.
        /// </remarks>
        public void Reset()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_session_reset(this.handle));
        }

    }

    /// <summary>
    /// Use this class to control an object that watches for spatial anchors.
    /// </summary>
    public partial class CloudSpatialAnchorWatcher
    {
        internal IntPtr handle;
        internal CloudSpatialAnchorWatcher(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_addref(ahandle);
        }
        ~CloudSpatialAnchorWatcher()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Distinct identifier for the watcher within its session.
        /// </summary>
        public int Identifier
        {
            get
            {
                int result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_get_identifier(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Stops further activity from this watcher.
        /// </summary>
        public void Stop()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_cloud_spatial_anchor_watcher_stop(this.handle));
        }

    }

    /// <summary>
    /// Contains optional geographical location information within a sensor fingerprint.
    /// </summary>
    /// <remarks>
    /// If any of the values are unknown, they should not be set or can be set to NaN.
    /// </remarks>
    public partial class GeoLocation
    {
        internal IntPtr handle;
        internal GeoLocation(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_addref(ahandle);
        }
        public GeoLocation()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
        }

        ~GeoLocation()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The current latitude of the device in degrees.
        /// </summary>
        public double Latitude
        {
            get
            {
                double result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_get_latitude(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_set_latitude(this.handle, value));
            }
        }

        /// <summary>
        /// The current longitude of the device in degrees.
        /// </summary>
        public double Longitude
        {
            get
            {
                double result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_get_longitude(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_set_longitude(this.handle, value));
            }
        }

        /// <summary>
        /// The horizontal error in meters of the latitude and longitude. This corresponds to the radius of a 68.3% confidence region on the East/North plane. Over many invocations, the true position should be within this number of horizontal meters of the reported position.
        /// </summary>
        public float HorizontalError
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_get_horizontal_error(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_set_horizontal_error(this.handle, value));
            }
        }

        /// <summary>
        /// The altitude of the device in meters.
        /// </summary>
        public float Altitude
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_get_altitude(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_set_altitude(this.handle, value));
            }
        }

        /// <summary>
        /// The vertical error of the altitude in meters. This corresponds to a one-sided 68.3% confidence interval along the Up axis. Over many invocations, the true altitude should be within this number of meters of the reported altitude.
        /// </summary>
        public float VerticalError
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_get_vertical_error(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_geo_location_set_vertical_error(this.handle, value));
            }
        }

    }

    /// <summary>
    /// Use this type to determine when a locate operation has completed.
    /// </summary>
    public partial class LocateAnchorsCompletedEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal LocateAnchorsCompletedEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_addref(ahandle);
        }
        ~LocateAnchorsCompletedEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Gets a value indicating whether the locate operation was canceled.
        /// </summary>
        /// <remarks>
        /// When this property is true, the watcher was stopped before completing.
        /// </remarks>
        public bool Cancelled
        {
            get
            {
                bool result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_get_cancelled(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// The watcher that completed the locate operation.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Watcher
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_locate_anchors_completed_event_args_get_watcher(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(result_handle, transfer:true) : null;
                return result_object;
            }
        }

    }

    /// <summary>
    /// Use this class to describe how anchors to be located should be near a source anchor.
    /// </summary>
    public partial class NearAnchorCriteria
    {
        internal IntPtr handle;
        internal NearAnchorCriteria(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_addref(ahandle);
        }
        public NearAnchorCriteria()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
        }

        ~NearAnchorCriteria()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Source anchor around which nearby anchors should be located.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor SourceAnchor
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_get_source_anchor(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor(result_handle, transfer:true) : null;
                return result_object;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_set_source_anchor(this.handle, value != null ? value.handle : IntPtr.Zero));
            }
        }

        /// <summary>
        /// Maximum distance in meters from the source anchor (defaults to 5).
        /// </summary>
        public float DistanceInMeters
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_get_distance_in_meters(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_set_distance_in_meters(this.handle, value));
            }
        }

        /// <summary>
        /// Maximum desired result count (defaults to 20).
        /// </summary>
        public int MaxResultCount
        {
            get
            {
                int result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_get_max_result_count(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_anchor_criteria_set_max_result_count(this.handle, value));
            }
        }

    }

    /// <summary>
    /// Use this class to describe how anchors to be located should be near the device.
    /// </summary>
    public partial class NearDeviceCriteria
    {
        internal IntPtr handle;
        internal NearDeviceCriteria(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_addref(ahandle);
        }
        public NearDeviceCriteria()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
        }

        ~NearDeviceCriteria()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Maximum distance in meters from the device (defaults to 5).
        /// </summary>
        public float DistanceInMeters
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_get_distance_in_meters(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_set_distance_in_meters(this.handle, value));
            }
        }

        /// <summary>
        /// Maximum desired result count (defaults to 20).
        /// </summary>
        public int MaxResultCount
        {
            get
            {
                int result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_get_max_result_count(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_near_device_criteria_set_max_result_count(this.handle, value));
            }
        }

    }

    /// <summary>
    /// Provides data for the event that fires for logging messages.
    /// </summary>
    public partial class OnLogDebugEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal OnLogDebugEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_on_log_debug_event_args_addref(ahandle);
        }
        ~OnLogDebugEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_on_log_debug_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The logging message.
        /// </summary>
        public string Message
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_on_log_debug_event_args_get_message(this.handle, out result));
                return result;
            }
        }

    }

    /// <summary>
    /// Use this class to get an estimate of the current location of your device. A PlatformLocationProvider is typically passed to a [CloudSpatialAnchorSession](./cloudspatialanchorsession.md) to enable large-scale relocalization scenario with [Coarse Relocalization](https://aka.ms/CoarseRelocalization).
    /// </summary>
    public partial class PlatformLocationProvider
    {
        internal IntPtr handle;
        internal PlatformLocationProvider(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_addref(ahandle);
        }
        /// <summary>
        /// Initializes a new instance with all sensors disabled.
        /// </summary>
        public PlatformLocationProvider()
        {
            Microsoft.Azure.SpatialAnchors.status resultStatus = (Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_create(out this.handle));
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, resultStatus);
        }

        ~PlatformLocationProvider()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The sensors used by the session to locate anchors around you and annotate created anchors so that they can be found.
        /// </summary>
        /// <remarks>
        /// On HoloLens and iOS, enabling a sensor for the first time will
        /// prompt the user for the necessary permissions.
        /// On Android, you need to obtain the relevant permission before
        /// enabling a sensor.
        /// </remarks>
        public Microsoft.Azure.SpatialAnchors.SensorCapabilities Sensors
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.SensorCapabilities result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_get_sensors(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.SensorCapabilities(result_handle, transfer:true) : null;
                return result_object;
            }
        }

        /// <summary>
        /// Checks whether sufficient sensor data is available to locate or create anchors tagged with geolocation.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.GeoLocationStatusResult GeoLocationStatus
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.GeoLocationStatusResult result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_get_geo_location_status(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Checks whether sufficient sensor data is available to locate or create anchors tagged with Wi-Fi signals.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.WifiStatusResult WifiStatus
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.WifiStatusResult result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_get_wifi_status(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Checks whether sufficient sensor data is available to locate or create anchors tagged with Bluetooth signals.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.BluetoothStatusResult BluetoothStatus
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.BluetoothStatusResult result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_get_bluetooth_status(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Returns the latest estimate of the device's location.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.GeoLocation GetLocationEstimate()
        {
            IntPtr result_handle;
            Microsoft.Azure.SpatialAnchors.GeoLocation result_object;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_get_location_estimate(this.handle, out result_handle));
            result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.GeoLocation(result_handle, transfer:true) : null;
            return result_object;
        }

        /// <summary>
        /// Start tracking the device's location.
        /// </summary>
        public void Start()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_start(this.handle));
        }

        /// <summary>
        /// Stop tracking the device's location.
        /// </summary>
        public void Stop()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_platform_location_provider_stop(this.handle));
        }

    }

    /// <summary>
    /// Use this class to give the session access to sensors to help find anchors around you. This is typically used by a [PlatformLocationProvider](./platformlocationprovider.md) to configure sensors. Refer to [Coarse Relocalization](https://aka.ms/CoarseRelocalization) to learn more about sensors and platforms.
    /// </summary>
    public partial class SensorCapabilities
    {
        internal IntPtr handle;
        internal SensorCapabilities(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_addref(ahandle);
        }
        ~SensorCapabilities()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Whether to use the device's global position to find anchors and improve the locatability of existing anchors.
        /// </summary>
        /// <remarks>
        /// Enabling this option requires extra permissions on each platform:
        /// * Android: Declare ACCESS_FINE_LOCATION in AndroidManifest.xml and obtain the permission at run-time by calling ActivityCompat.requestPermissions().
        /// * HoloLens: Add the "location" capability to your app's package manifest.
        /// * iOS: Add the "Privacy - Location When In Use Usage Description" key to Info.plist with a short description of what the permission is for.
        /// </remarks>
        public bool GeoLocationEnabled
        {
            get
            {
                bool result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_get_geo_location_enabled(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_set_geo_location_enabled(this.handle, value));
            }
        }

        /// <summary>
        /// Whether to use WiFi signals to find anchors and improve the locatability of existing anchors.
        /// </summary>
        /// <remarks>
        /// Enabling this option requires extra permissions on each platform:
        /// * Android: Declare CHANGE_WIFI_STATE, ACCESS_WIFI_STATE and ACCESS_COARSE_LOCATION in AndroidManifest.xml and obtain the permissions at run-time by calling ActivityCompat.requestPermissions().
        /// * HoloLens: Add the "wiFiControl" capability to your app's package manifest.
        /// * iOS: Add the "Privacy - Location When In Use Usage Description" key to Info.plist with a short description of what the permission is for.
        /// </remarks>
        public bool WifiEnabled
        {
            get
            {
                bool result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_get_wifi_enabled(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_set_wifi_enabled(this.handle, value));
            }
        }

        /// <summary>
        /// Whether to use Bluetooth signals to find anchors and improve the locatability of existing anchors. Make sure that you also set KnownBeaconProximityUuids when enabling Bluetooth.
        /// </summary>
        /// <remarks>
        /// Enabling this option requires extra permissions on each platform:
        /// * Android: Declare BLUETOOTH_ADMIN, BLUETOOTH and ACCESS_COARSE_LOCATION in AndroidManifest.xml and obtain the permissions at run-time by calling ActivityCompat.requestPermissions().
        /// * HoloLens: Add the "bluetooth" capability to your app's package manifest.
        /// * iOS: Add the "Privacy - Location When In Use Usage Description" key to Info.plist with a short description of what the permission is for.
        /// </remarks>
        public bool BluetoothEnabled
        {
            get
            {
                bool result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_get_bluetooth_enabled(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_set_bluetooth_enabled(this.handle, value));
            }
        }

        /// <summary>
        /// Controls which Bluetooth beacon devices the session is able to see. Add the proximity UUIDs here for all beacons you want to use to find anchors and improve the locatability of existing anchors.
        /// </summary>
        /// <remarks>
        /// Only Eddystone-Uid and iBeacon UUIDs are supported.
        /// If no UUIDs are provided, Bluetooth beacons will not be tracked.
        /// </remarks>
        public string[] KnownBeaconProximityUuids
        {
            get
            {
                IntPtr result;
                int result_length;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_get_known_beacon_proximity_uuids(this.handle, out result, out result_length));
                return Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.IntPtrToStringArray(result, result_length);
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_capabilities_set_known_beacon_proximity_uuids(this.handle, value, value?.Length ?? 0));
            }
        }

    }

    /// <summary>
    /// Informs the application that the service would like an updated sensor fingerprint.
    /// </summary>
    public partial class SensorFingerprintEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal SensorFingerprintEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_addref(ahandle);
        }
        ~SensorFingerprintEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The current geographical position of the device if available.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.GeoLocation GeoPosition
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.GeoLocation result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_get_geo_position(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.GeoLocation(result_handle, transfer:true) : null;
                return result_object;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_sensor_fingerprint_event_args_set_geo_position(this.handle, value != null ? value.handle : IntPtr.Zero));
            }
        }

    }

    /// <summary>
    /// Use this class to set up the service configuration for a SpatialAnchorSession.
    /// </summary>
    public partial class SessionConfiguration
    {
        internal IntPtr handle;
        internal SessionConfiguration(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_addref(ahandle);
        }
        ~SessionConfiguration()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Account domain for the Azure Spatial Anchors service.
        /// </summary>
        /// <remarks>
        /// The default is "mixedreality.azure.com".
        /// </remarks>
        public string AccountDomain
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_get_account_domain(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_account_domain(this.handle, value));
            }
        }

        /// <summary>
        /// Account-level ID for the Azure Spatial Anchors service.
        /// </summary>
        public string AccountId
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_get_account_id(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_account_id(this.handle, value));
            }
        }

        /// <summary>
        /// Authentication token for Azure Active Directory (AAD).
        /// </summary>
        /// <remarks>
        /// If the access token and the account key are missing, the session
        /// will obtain an access token based on this value.
        /// </remarks>
        public string AuthenticationToken
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_get_authentication_token(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_authentication_token(this.handle, value));
            }
        }

        /// <summary>
        /// Account-level key for the Azure Spatial Anchors service.
        /// </summary>
        public string AccountKey
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_get_account_key(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_account_key(this.handle, value));
            }
        }

        /// <summary>
        /// Access token for the Azure Spatial Anchors service.
        /// </summary>
        public string AccessToken
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_get_access_token(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_configuration_set_access_token(this.handle, value));
            }
        }

    }

    /// <summary>
    /// Provides data for the event that fires when errors are thrown.
    /// </summary>
    public partial class SessionErrorEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal SessionErrorEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_addref(ahandle);
        }
        ~SessionErrorEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The error code.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode ErrorCode
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.CloudSpatialErrorCode result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_get_error_code(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// The error message.
        /// </summary>
        public string ErrorMessage
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_get_error_message(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// The watcher that found an error, possibly null.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher Watcher
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_error_event_args_get_watcher(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorWatcher(result_handle, transfer:true) : null;
                return result_object;
            }
        }

    }

    /// <summary>
    /// This type describes the status of spatial data processing.
    /// </summary>
    public partial class SessionStatus
    {
        internal IntPtr handle;
        internal SessionStatus(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_addref(ahandle);
        }
        ~SessionStatus()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The level of data sufficiency for a successful operation.
        /// </summary>
        /// <remarks>
        /// This value will be in the [0;1) range when data is insufficient; 1 when data is
        /// sufficient for success and greater than 1 when conditions are better than minimally
        /// sufficient.
        /// </remarks>
        public float ReadyForCreateProgress
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_get_ready_for_create_progress(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// The ratio of data available to recommended data to create an anchor.
        /// </summary>
        /// <remarks>
        /// This value will be in the [0;1) range when data is below the recommended threshold;
        /// 1 and greater when the recommended amount of data has been gathered for a creation
        /// operation.
        /// </remarks>
        public float RecommendedForCreateProgress
        {
            get
            {
                float result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_get_recommended_for_create_progress(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// A hash value that can be used to know when environment data that contributes to a creation operation has changed to included the latest input data.
        /// </summary>
        /// <remarks>
        /// If the hash value does not change after new frames were added to the session, then
        /// those frames were not deemed as sufficientlyy different from existing environment data and disgarded.
        /// This value may be 0 (and should be ignored) for platforms that don't feed frames individually.
        /// </remarks>
        public int SessionCreateHash
        {
            get
            {
                int result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_get_session_create_hash(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// A hash value that can be used to know when environment data that contributes to a locate operation has changed to included the latest input data.
        /// </summary>
        /// <remarks>
        /// If the hash value does not change after new frames were added to the session, then
        /// those frames were not deemed as sufficiency different from existing environment data and disgarded.
        /// This value may be 0 (and should be ignored) for platforms that don't feed frames individually.
        /// </remarks>
        public int SessionLocateHash
        {
            get
            {
                int result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_get_session_locate_hash(this.handle, out result));
                return result;
            }
        }

        /// <summary>
        /// Feedback that can be provided to user about data processing status.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.SessionUserFeedback UserFeedback
        {
            get
            {
                Microsoft.Azure.SpatialAnchors.SessionUserFeedback result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_status_get_user_feedback(this.handle, out result));
                return result;
            }
        }

    }

    /// <summary>
    /// Provides data for the event that fires when the session state is updated.
    /// </summary>
    public partial class SessionUpdatedEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal SessionUpdatedEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_addref(ahandle);
        }
        ~SessionUpdatedEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// Current session status.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.SessionStatus Status
        {
            get
            {
                IntPtr result_handle;
                Microsoft.Azure.SpatialAnchors.SessionStatus result_object;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_session_updated_event_args_get_status(this.handle, out result_handle));
                result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.SessionStatus(result_handle, transfer:true) : null;
                return result_object;
            }
        }

    }

    /// <summary>
    /// Informs the application that the service requires an updated access token or authentication token.
    /// </summary>
    public partial class TokenRequiredEventArgs : EventArgs
    {
        internal IntPtr handle;
        internal TokenRequiredEventArgs(IntPtr ahandle, bool transfer)
        {
            this.handle = ahandle;
            if (!transfer) Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_addref(ahandle);
        }
        ~TokenRequiredEventArgs()
        {
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_release(this.handle));
            this.handle = IntPtr.Zero;
        }

        /// <summary>
        /// The access token to be used by the operation that requires it.
        /// </summary>
        public string AccessToken
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_get_access_token(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_set_access_token(this.handle, value));
            }
        }

        /// <summary>
        /// The authentication token to be used by the operation that requires it.
        /// </summary>
        public string AuthenticationToken
        {
            get
            {
                string result;
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_get_authentication_token(this.handle, out result));
                return result;
            }
            set
            {
                Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_set_authentication_token(this.handle, value));
            }
        }

        /// <summary>
        /// Returns a deferral object that can be used to provide an updated access token or authentication token from another asynchronous operation.
        /// </summary>
        public Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral GetDeferral()
        {
            IntPtr result_handle;
            Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral result_object;
            Microsoft.Azure.SpatialAnchors.NativeLibraryHelpers.CheckStatus(this.handle, Microsoft.Azure.SpatialAnchors.NativeLibrary.ssc_token_required_event_args_get_deferral(this.handle, out result_handle));
            result_object = (result_handle != IntPtr.Zero) ? new Microsoft.Azure.SpatialAnchors.CloudSpatialAnchorSessionDeferral(result_handle, transfer:true) : null;
            return result_object;
        }

    }

}

#endif