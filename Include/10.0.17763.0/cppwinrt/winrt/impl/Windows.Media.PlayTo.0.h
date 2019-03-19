﻿// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;
struct IRandomAccessStreamWithContentType;

}

WINRT_EXPORT namespace winrt::Windows::Media::PlayTo {

enum class PlayToConnectionError : int32_t
{
    None = 0,
    DeviceNotResponding = 1,
    DeviceError = 2,
    DeviceLocked = 3,
    ProtectedPlaybackFailed = 4,
};

enum class PlayToConnectionState : int32_t
{
    Disconnected = 0,
    Connected = 1,
    Rendering = 2,
};

struct ICurrentTimeChangeRequestedEventArgs;
struct IMuteChangeRequestedEventArgs;
struct IPlayToConnection;
struct IPlayToConnectionErrorEventArgs;
struct IPlayToConnectionStateChangedEventArgs;
struct IPlayToConnectionTransferredEventArgs;
struct IPlayToManager;
struct IPlayToManagerStatics;
struct IPlayToReceiver;
struct IPlayToSource;
struct IPlayToSourceDeferral;
struct IPlayToSourceRequest;
struct IPlayToSourceRequestedEventArgs;
struct IPlayToSourceSelectedEventArgs;
struct IPlayToSourceWithPreferredSourceUri;
struct IPlaybackRateChangeRequestedEventArgs;
struct ISourceChangeRequestedEventArgs;
struct IVolumeChangeRequestedEventArgs;
struct CurrentTimeChangeRequestedEventArgs;
struct MuteChangeRequestedEventArgs;
struct PlayToConnection;
struct PlayToConnectionErrorEventArgs;
struct PlayToConnectionStateChangedEventArgs;
struct PlayToConnectionTransferredEventArgs;
struct PlayToManager;
struct PlayToReceiver;
struct PlayToSource;
struct PlayToSourceDeferral;
struct PlayToSourceRequest;
struct PlayToSourceRequestedEventArgs;
struct PlayToSourceSelectedEventArgs;
struct PlaybackRateChangeRequestedEventArgs;
struct SourceChangeRequestedEventArgs;
struct VolumeChangeRequestedEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToConnection>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToManager>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToReceiver>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToSource>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToSourceDeferral>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToSourceRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::MuteChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToConnection>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToManager>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToReceiver>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToSource>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToSourceDeferral>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToSourceRequest>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::SourceChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::PlayTo::PlayToConnectionError>{ using type = enum_category; };
template <> struct category<Windows::Media::PlayTo::PlayToConnectionState>{ using type = enum_category; };
template <> struct name<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.ICurrentTimeChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IMuteChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToConnection>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToConnection" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToConnectionErrorEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToConnectionStateChangedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToConnectionTransferredEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToManager>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToManager" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToManagerStatics>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToManagerStatics" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToReceiver>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToReceiver" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToSource>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToSource" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToSourceDeferral>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToSourceDeferral" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToSourceRequest>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToSourceRequest" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToSourceRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToSourceSelectedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlayToSourceWithPreferredSourceUri" }; };
template <> struct name<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IPlaybackRateChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.ISourceChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.IVolumeChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.CurrentTimeChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::MuteChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.MuteChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlayToConnection>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToConnection" }; };
template <> struct name<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToConnectionErrorEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToConnectionStateChangedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToConnectionTransferredEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlayToManager>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToManager" }; };
template <> struct name<Windows::Media::PlayTo::PlayToReceiver>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToReceiver" }; };
template <> struct name<Windows::Media::PlayTo::PlayToSource>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToSource" }; };
template <> struct name<Windows::Media::PlayTo::PlayToSourceDeferral>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToSourceDeferral" }; };
template <> struct name<Windows::Media::PlayTo::PlayToSourceRequest>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToSourceRequest" }; };
template <> struct name<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToSourceRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToSourceSelectedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlaybackRateChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::SourceChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.SourceChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.PlayTo.VolumeChangeRequestedEventArgs" }; };
template <> struct name<Windows::Media::PlayTo::PlayToConnectionError>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToConnectionError" }; };
template <> struct name<Windows::Media::PlayTo::PlayToConnectionState>{ static constexpr auto & value{ L"Windows.Media.PlayTo.PlayToConnectionState" }; };
template <> struct guid_storage<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>{ static constexpr guid value{ 0x99711324,0xEDC7,0x4BF5,{ 0x91,0xF6,0x3C,0x86,0x27,0xDB,0x59,0xE5 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>{ static constexpr guid value{ 0xE4B4F5F6,0xAF1F,0x4F1E,{ 0xB4,0x37,0x7D,0xA3,0x24,0x00,0xE1,0xD4 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToConnection>{ static constexpr guid value{ 0x112FBFC8,0xF235,0x4FDE,{ 0x8D,0x41,0x9B,0xF2,0x7C,0x9E,0x9A,0x40 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>{ static constexpr guid value{ 0xBF5EADA6,0x88E6,0x445F,{ 0x9D,0x40,0xD9,0xB9,0xF8,0x93,0x98,0x96 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>{ static constexpr guid value{ 0x68C4B50F,0x0C20,0x4980,{ 0x86,0x02,0x58,0xC6,0x22,0x38,0xD4,0x23 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>{ static constexpr guid value{ 0xFAE3193A,0x0683,0x47D9,{ 0x8D,0xF0,0x18,0xCB,0xB4,0x89,0x84,0xD8 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToManager>{ static constexpr guid value{ 0xF56A206E,0x1B77,0x42EF,{ 0x8F,0x0D,0xB9,0x49,0xF8,0xD9,0xB2,0x60 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToManagerStatics>{ static constexpr guid value{ 0x64E6A887,0x3982,0x4F3B,{ 0xBA,0x20,0x61,0x55,0xE4,0x35,0x32,0x5B } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToReceiver>{ static constexpr guid value{ 0xAC15CF47,0xA162,0x4AA6,{ 0xAF,0x1B,0x3A,0xA3,0x5F,0x3B,0x90,0x69 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToSource>{ static constexpr guid value{ 0x7F138A08,0xFBB7,0x4B09,{ 0x83,0x56,0xAA,0x5F,0x4E,0x33,0x5C,0x31 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToSourceDeferral>{ static constexpr guid value{ 0x4100891D,0x278E,0x4F29,{ 0x85,0x9B,0xA9,0xE5,0x01,0x05,0x3E,0x7D } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToSourceRequest>{ static constexpr guid value{ 0xF8584665,0x64F4,0x44A0,{ 0xAC,0x0D,0x46,0x8D,0x2B,0x8F,0xDA,0x83 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>{ static constexpr guid value{ 0xC5CDC330,0x29DF,0x4EC6,{ 0x9D,0xA9,0x9F,0xBD,0xFC,0xFC,0x1B,0x3E } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>{ static constexpr guid value{ 0x0C9D8511,0x5202,0x4DCB,{ 0x8C,0x67,0xAB,0xDA,0x12,0xBB,0x3C,0x12 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>{ static constexpr guid value{ 0xAAB253EB,0x3301,0x4DC4,{ 0xAF,0xBA,0xB2,0xF2,0xED,0x96,0x35,0xA0 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>{ static constexpr guid value{ 0x0F5661AE,0x2C88,0x4CCA,{ 0x85,0x40,0xD5,0x86,0x09,0x5D,0x13,0xA5 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>{ static constexpr guid value{ 0xFB3F3A96,0x7AA6,0x4A8B,{ 0x86,0xE7,0x54,0xF6,0xC6,0xD3,0x4F,0x64 } }; };
template <> struct guid_storage<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>{ static constexpr guid value{ 0x6F026D5C,0xCF75,0x4C2B,{ 0x91,0x3E,0x6D,0x7C,0x6C,0x32,0x91,0x79 } }; };
template <> struct default_interface<Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::MuteChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::IMuteChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToConnection>{ using type = Windows::Media::PlayTo::IPlayToConnection; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToConnectionErrorEventArgs>{ using type = Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs>{ using type = Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs>{ using type = Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToManager>{ using type = Windows::Media::PlayTo::IPlayToManager; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToReceiver>{ using type = Windows::Media::PlayTo::IPlayToReceiver; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToSource>{ using type = Windows::Media::PlayTo::IPlayToSource; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceDeferral>{ using type = Windows::Media::PlayTo::IPlayToSourceDeferral; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceRequest>{ using type = Windows::Media::PlayTo::IPlayToSourceRequest; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceRequestedEventArgs>{ using type = Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::PlayToSourceSelectedEventArgs>{ using type = Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::SourceChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::ISourceChangeRequestedEventArgs; };
template <> struct default_interface<Windows::Media::PlayTo::VolumeChangeRequestedEventArgs>{ using type = Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs; };

template <> struct abi<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Time(Windows::Foundation::TimeSpan* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Mute(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToConnection>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_State(Windows::Media::PlayTo::PlayToConnectionState* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_StateChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_StateChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Transferred(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Transferred(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Error(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Error(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Code(Windows::Media::PlayTo::PlayToConnectionError* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Message(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PreviousState(Windows::Media::PlayTo::PlayToConnectionState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CurrentState(Windows::Media::PlayTo::PlayToConnectionState* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PreviousSource(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CurrentSource(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToManager>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_SourceRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SourceRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_SourceSelected(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SourceSelected(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL put_DefaultSourceSelection(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DefaultSourceSelection(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToManagerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForCurrentView(void** playToManager) noexcept = 0;
    virtual int32_t WINRT_CALL ShowPlayToUI() noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToReceiver>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_PlayRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PlayRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_PauseRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PauseRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_SourceChangeRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SourceChangeRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_PlaybackRateChangeRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_PlaybackRateChangeRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_CurrentTimeChangeRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_CurrentTimeChangeRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_MuteChangeRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_MuteChangeRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_VolumeChangeRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_VolumeChangeRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_TimeUpdateRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_TimeUpdateRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_StopRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_StopRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyVolumeChange(double volume, bool mute) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyRateChange(double rate) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyLoadedMetadata() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyTimeUpdate(Windows::Foundation::TimeSpan currentTime) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyDurationChange(Windows::Foundation::TimeSpan duration) noexcept = 0;
    virtual int32_t WINRT_CALL NotifySeeking() noexcept = 0;
    virtual int32_t WINRT_CALL NotifySeeked() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyPaused() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyPlaying() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyEnded() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyError() noexcept = 0;
    virtual int32_t WINRT_CALL NotifyStopped() noexcept = 0;
    virtual int32_t WINRT_CALL get_FriendlyName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FriendlyName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SupportsImage(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsImage(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SupportsAudio(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsAudio(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SupportsVideo(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsVideo(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Properties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL StartAsync(void** action) noexcept = 0;
    virtual int32_t WINRT_CALL StopAsync(void** action) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToSource>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Connection(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Next(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Next(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL PlayNext() noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToSourceDeferral>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Complete() noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToSourceRequest>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Deadline(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL DisplayErrorString(void* errorString) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeferral(void** deferral) noexcept = 0;
    virtual int32_t WINRT_CALL SetSource(void* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SourceRequest(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_FriendlyName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Icon(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsImage(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsAudio(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportsVideo(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PreferredSourceUri(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_PreferredSourceUri(void* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Rate(double* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Stream(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Title(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Author(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Album(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Genre(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Date(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Thumbnail(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Rating(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Properties(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Volume(double* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Media_PlayTo_ICurrentTimeChangeRequestedEventArgs
{
    Windows::Foundation::TimeSpan Time() const;
};
template <> struct consume<Windows::Media::PlayTo::ICurrentTimeChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_ICurrentTimeChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IMuteChangeRequestedEventArgs
{
    bool Mute() const;
};
template <> struct consume<Windows::Media::PlayTo::IMuteChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IMuteChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToConnection
{
    Windows::Media::PlayTo::PlayToConnectionState State() const;
    winrt::event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const& handler) const;
    using StateChanged_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToConnection, &impl::abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_StateChanged>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionStateChangedEventArgs> const& handler) const;
    void StateChanged(winrt::event_token const& token) const noexcept;
    winrt::event_token Transferred(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const& handler) const;
    using Transferred_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToConnection, &impl::abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_Transferred>;
    Transferred_revoker Transferred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionTransferredEventArgs> const& handler) const;
    void Transferred(winrt::event_token const& token) const noexcept;
    winrt::event_token Error(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const& handler) const;
    using Error_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToConnection, &impl::abi_t<Windows::Media::PlayTo::IPlayToConnection>::remove_Error>;
    Error_revoker Error(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToConnection, Windows::Media::PlayTo::PlayToConnectionErrorEventArgs> const& handler) const;
    void Error(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToConnection> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnection<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs
{
    Windows::Media::PlayTo::PlayToConnectionError Code() const;
    hstring Message() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToConnectionErrorEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnectionErrorEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs
{
    Windows::Media::PlayTo::PlayToConnectionState PreviousState() const;
    Windows::Media::PlayTo::PlayToConnectionState CurrentState() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToConnectionStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnectionStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs
{
    Windows::Media::PlayTo::PlayToSource PreviousSource() const;
    Windows::Media::PlayTo::PlayToSource CurrentSource() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToConnectionTransferredEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToConnectionTransferredEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToManager
{
    winrt::event_token SourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const& handler) const;
    using SourceRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToManager, &impl::abi_t<Windows::Media::PlayTo::IPlayToManager>::remove_SourceRequested>;
    SourceRequested_revoker SourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceRequestedEventArgs> const& handler) const;
    void SourceRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token SourceSelected(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const& handler) const;
    using SourceSelected_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToManager, &impl::abi_t<Windows::Media::PlayTo::IPlayToManager>::remove_SourceSelected>;
    SourceSelected_revoker SourceSelected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToManager, Windows::Media::PlayTo::PlayToSourceSelectedEventArgs> const& handler) const;
    void SourceSelected(winrt::event_token const& token) const noexcept;
    void DefaultSourceSelection(bool value) const;
    bool DefaultSourceSelection() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToManager> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToManager<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToManagerStatics
{
    Windows::Media::PlayTo::PlayToManager GetForCurrentView() const;
    void ShowPlayToUI() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToManagerStatics> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToManagerStatics<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToReceiver
{
    winrt::event_token PlayRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    using PlayRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PlayRequested>;
    PlayRequested_revoker PlayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    void PlayRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token PauseRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    using PauseRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PauseRequested>;
    PauseRequested_revoker PauseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    void PauseRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token SourceChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const& handler) const;
    using SourceChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_SourceChangeRequested>;
    SourceChangeRequested_revoker SourceChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::SourceChangeRequestedEventArgs> const& handler) const;
    void SourceChangeRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token PlaybackRateChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const& handler) const;
    using PlaybackRateChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_PlaybackRateChangeRequested>;
    PlaybackRateChangeRequested_revoker PlaybackRateChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::PlaybackRateChangeRequestedEventArgs> const& handler) const;
    void PlaybackRateChangeRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token CurrentTimeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const& handler) const;
    using CurrentTimeChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_CurrentTimeChangeRequested>;
    CurrentTimeChangeRequested_revoker CurrentTimeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::CurrentTimeChangeRequestedEventArgs> const& handler) const;
    void CurrentTimeChangeRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token MuteChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const& handler) const;
    using MuteChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_MuteChangeRequested>;
    MuteChangeRequested_revoker MuteChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::MuteChangeRequestedEventArgs> const& handler) const;
    void MuteChangeRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token VolumeChangeRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const& handler) const;
    using VolumeChangeRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_VolumeChangeRequested>;
    VolumeChangeRequested_revoker VolumeChangeRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Media::PlayTo::VolumeChangeRequestedEventArgs> const& handler) const;
    void VolumeChangeRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token TimeUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    using TimeUpdateRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_TimeUpdateRequested>;
    TimeUpdateRequested_revoker TimeUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    void TimeUpdateRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token StopRequested(Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    using StopRequested_revoker = impl::event_revoker<Windows::Media::PlayTo::IPlayToReceiver, &impl::abi_t<Windows::Media::PlayTo::IPlayToReceiver>::remove_StopRequested>;
    StopRequested_revoker StopRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::PlayTo::PlayToReceiver, Windows::Foundation::IInspectable> const& handler) const;
    void StopRequested(winrt::event_token const& token) const noexcept;
    void NotifyVolumeChange(double volume, bool mute) const;
    void NotifyRateChange(double rate) const;
    void NotifyLoadedMetadata() const;
    void NotifyTimeUpdate(Windows::Foundation::TimeSpan const& currentTime) const;
    void NotifyDurationChange(Windows::Foundation::TimeSpan const& duration) const;
    void NotifySeeking() const;
    void NotifySeeked() const;
    void NotifyPaused() const;
    void NotifyPlaying() const;
    void NotifyEnded() const;
    void NotifyError() const;
    void NotifyStopped() const;
    hstring FriendlyName() const;
    void FriendlyName(param::hstring const& value) const;
    void SupportsImage(bool value) const;
    bool SupportsImage() const;
    void SupportsAudio(bool value) const;
    bool SupportsAudio() const;
    void SupportsVideo(bool value) const;
    bool SupportsVideo() const;
    Windows::Foundation::Collections::IPropertySet Properties() const;
    Windows::Foundation::IAsyncAction StartAsync() const;
    Windows::Foundation::IAsyncAction StopAsync() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToReceiver> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToReceiver<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToSource
{
    Windows::Media::PlayTo::PlayToConnection Connection() const;
    Windows::Media::PlayTo::PlayToSource Next() const;
    void Next(Windows::Media::PlayTo::PlayToSource const& value) const;
    void PlayNext() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToSource> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSource<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToSourceDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToSourceDeferral> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceDeferral<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToSourceRequest
{
    Windows::Foundation::DateTime Deadline() const;
    void DisplayErrorString(param::hstring const& errorString) const;
    Windows::Media::PlayTo::PlayToSourceDeferral GetDeferral() const;
    void SetSource(Windows::Media::PlayTo::PlayToSource const& value) const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToSourceRequest> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceRequest<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToSourceRequestedEventArgs
{
    Windows::Media::PlayTo::PlayToSourceRequest SourceRequest() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToSourceRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs
{
    hstring FriendlyName() const;
    Windows::Storage::Streams::IRandomAccessStreamWithContentType Icon() const;
    bool SupportsImage() const;
    bool SupportsAudio() const;
    bool SupportsVideo() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToSourceSelectedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceSelectedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri
{
    Windows::Foundation::Uri PreferredSourceUri() const;
    void PreferredSourceUri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::Media::PlayTo::IPlayToSourceWithPreferredSourceUri> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlayToSourceWithPreferredSourceUri<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IPlaybackRateChangeRequestedEventArgs
{
    double Rate() const;
};
template <> struct consume<Windows::Media::PlayTo::IPlaybackRateChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IPlaybackRateChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs
{
    Windows::Storage::Streams::IRandomAccessStreamWithContentType Stream() const;
    hstring Title() const;
    hstring Author() const;
    hstring Album() const;
    hstring Genre() const;
    hstring Description() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Date() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    Windows::Foundation::IReference<uint32_t> Rating() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
};
template <> struct consume<Windows::Media::PlayTo::ISourceChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_ISourceChangeRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_PlayTo_IVolumeChangeRequestedEventArgs
{
    double Volume() const;
};
template <> struct consume<Windows::Media::PlayTo::IVolumeChangeRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_PlayTo_IVolumeChangeRequestedEventArgs<D>; };

}
