package com.discord.codegen;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.common.build.ReactBuildConfig;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import k0.d;
import ya.a;

/* loaded from: classes.dex */
public abstract class NativeMediaEngineModuleSpec extends ReactContextBaseJavaModule implements TurboModule {
    public static final String NAME = "NativeMediaEngineModule";

    public NativeMediaEngineModuleSpec(ReactApplicationContext reactApplicationContext) {
        super(reactApplicationContext);
    }

    @ReactMethod
    @a
    public abstract void addListener(String str);

    @ReactMethod
    @a
    public abstract void connectionInstanceConfigureConnectionRetries(double d6, double d7, double d8, double d10);

    @ReactMethod
    @a
    public abstract void connectionInstanceDestroy(double d6, boolean z5);

    @ReactMethod
    @a
    public abstract void connectionInstanceDestroyUser(double d6, String str);

    @ReactMethod
    @a
    public abstract void connectionInstanceExecuteSecureFramesTransition(double d6, double d7);

    @ReactMethod
    @a
    public abstract void connectionInstanceFastUdpReconnect(double d6);

    @ReactMethod
    @a
    public abstract void connectionInstanceGetEncryptionModes(double d6, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceGetFilteredStats(double d6, double d7, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceGetMLSKeyPackageB64(double d6, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceGetMLSPairwiseFingerprintB64(double d6, double d7, String str, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceGetStats(double d6, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceMergeUsers(double d6, ReadableArray readableArray);

    @ReactMethod
    @a
    public abstract void connectionInstancePrepareMLSCommitTransitionB64(double d6, double d7, String str, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstancePrepareSecureFramesEpoch(double d6, String str, double d7, String str2);

    @ReactMethod
    @a
    public abstract void connectionInstancePrepareSecureFramesTransition(double d6, double d7, double d8, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceProcessMLSProposalsB64(double d6, String str, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceProcessMLSWelcomeB64(double d6, double d7, String str, Callback callback);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetDesktopSource(double d6, String str, boolean z5, String str2);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetLocalMute(double d6, String str, boolean z5);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetLocalPan(double d6, String str, double d7, double d8);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetLocalVolume(double d6, String str, double d7);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetMinimumOutputDelay(double d6, double d7);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetNoInputThreshold(double d6, double d7);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetPTTActive(double d6, boolean z5, boolean z6, boolean z7);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetPingInterval(double d6, double d7);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetSelfDeafen(double d6, boolean z5);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetSelfMute(double d6, boolean z5);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetTransportOptions(double d6, ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void connectionInstanceSetVideoBroadcast(double d6, boolean z5);

    @ReactMethod
    @a
    public abstract void connectionInstanceTriggerOnSpeakingCallback(double d6);

    @ReactMethod
    @a
    public abstract void connectionInstanceTriggerOnVideoCallback(double d6);

    @ReactMethod
    @a
    public abstract void connectionInstanceUpdateMLSExternalSenderB64(double d6, String str);

    @ReactMethod
    @a
    public abstract void connectionInstanceWasRemoteDisconnected(double d6);

    @ReactMethod
    @a
    public abstract void createOwnStreamConnectionWithOptions(double d6, String str, ReadableMap readableMap, Callback callback);

    @ReactMethod
    @a
    public abstract void createVoiceConnectionWithOptions(double d6, String str, ReadableMap readableMap, Callback callback);

    @ReactMethod
    @a
    public abstract void getAudioSubsystem(Callback callback);

    @ReactMethod
    @a
    public abstract void getCodecCapabilities(Callback callback);

    @ReactMethod
    @a
    public abstract void getCodecSurvey(Callback callback);

    @Override // com.facebook.react.bridge.BaseJavaModule
    @a
    public final Map<String, Object> getConstants() {
        Map<String, Object> typedExportedConstants = getTypedExportedConstants();
        if (ReactBuildConfig.DEBUG || ReactBuildConfig.IS_INTERNAL_BUILD) {
            HashSet hashSet = new HashSet(Arrays.asList("AVAudioSessionMode", "DegradationPreference", "SupportedSecureFramesProtocolVersion", "supportedFeatures"));
            HashSet hashSet2 = new HashSet();
            HashSet hashSet3 = new HashSet(typedExportedConstants.keySet());
            if (!d.t(hashSet3, hashSet, hashSet2)) {
                throw new IllegalStateException(String.format("Native Module Flow doesn't declare constants: %s", hashSet3));
            }
            if (!d.u(typedExportedConstants, hashSet)) {
                throw new IllegalStateException(String.format("Native Module doesn't fill in constants: %s", hashSet));
            }
        }
        return typedExportedConstants;
    }

    @ReactMethod
    @a
    public abstract void getInputDevices(Callback callback);

    @ReactMethod
    @a
    public abstract void getMLSSigningKeyB64(String str, double d6, Callback callback);

    @Override // com.facebook.react.bridge.NativeModule
    public String getName() {
        return NAME;
    }

    @ReactMethod
    @a
    public abstract void getOutputDevices(Callback callback);

    public abstract Map<String, Object> getTypedExportedConstants();

    @ReactMethod
    @a
    public abstract void getVideoInputDevices(Callback callback);

    @ReactMethod
    @a
    public abstract void initializeEngine();

    @ReactMethod
    @a
    public abstract void rankRtcRegions(ReadableArray readableArray, Callback callback);

    @ReactMethod
    @a
    public abstract void removeListeners(double d6);

    @ReactMethod
    @a
    public abstract void setAVAudioSessionMode(String str);

    @ReactMethod
    @a
    public abstract void setAudioInputEnabled(boolean z5);

    @ReactMethod
    @a
    public abstract void setBroadcastThumbnailParams(double d6, double d7, double d8);

    @ReactMethod
    @a
    public abstract void setEmitVADLevel2(boolean z5);

    @ReactMethod
    @a
    public abstract void setHasFullbandPerformance(boolean z5);

    @ReactMethod
    @a
    public abstract void setInputDevice(double d6);

    @ReactMethod
    @a
    public abstract void setInputDeviceById(String str);

    @ReactMethod
    @a
    public abstract void setInputVolume(double d6);

    @ReactMethod
    @a
    public abstract void setNcModels(ReadableArray readableArray);

    @ReactMethod
    @a
    public abstract void setNoInputThreshold(double d6);

    @ReactMethod
    @a
    public abstract void setOffloadAdmControls(boolean z5);

    @ReactMethod
    @a
    public abstract void setOutputDevice(double d6);

    @ReactMethod
    @a
    public abstract void setOutputDeviceById(String str);

    @ReactMethod
    @a
    public abstract void setOutputVolume(double d6);

    @ReactMethod
    @a
    public abstract void setSidechainCompression(boolean z5);

    @ReactMethod
    @a
    public abstract void setTransportOptions(ReadableMap readableMap);

    @ReactMethod
    @a
    public abstract void setVideoInputDevice(double d6);

    @ReactMethod
    @a
    public abstract void setVideoInputDeviceById(String str);

    @ReactMethod
    @a
    public abstract void startBroadcast();

    @ReactMethod
    @a
    public abstract void startLocalAudioRecording(ReadableMap readableMap, Callback callback);

    @ReactMethod
    @a
    public abstract void stopBroadcast();

    @ReactMethod
    @a
    public abstract void stopBroadcastWithError(double d6, String str);

    @ReactMethod
    @a
    public abstract void stopLocalAudioRecording(Callback callback);

    @ReactMethod
    @a
    public abstract void updateFieldTrial(String str, String str2);
}
