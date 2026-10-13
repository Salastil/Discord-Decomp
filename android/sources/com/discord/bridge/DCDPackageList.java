package com.discord.bridge;

import ab.a;
import com.discord.animated_png.react.APNGPackage;
import com.discord.audio.AudioManagerModule;
import com.discord.authentication.AuthenticationPackage;
import com.discord.avatar.react.AvatarPackage;
import com.discord.blur.BlurViewPackage;
import com.discord.chat.ChatPackage;
import com.discord.chat.input.ChatInputViewManager;
import com.discord.client_info.react.ClientInfoPackage;
import com.discord.clip.ClipViewManager;
import com.discord.codegen.NativeAdsModuleSpec;
import com.discord.codegen.NativeAppDatabaseModuleSpec;
import com.discord.codegen.NativeAppIconModuleSpec;
import com.discord.codegen.NativeAppLifecycleModuleSpec;
import com.discord.codegen.NativeAppRatingRequestModuleSpec;
import com.discord.codegen.NativeAudioManagerModuleSpec;
import com.discord.codegen.NativeAudioPlayerModuleSpec;
import com.discord.codegen.NativeAudioRouteEmitterModuleSpec;
import com.discord.codegen.NativeBrowserManagerModuleSpec;
import com.discord.codegen.NativeCacheModuleSpec;
import com.discord.codegen.NativeCommandClipboardModuleSpec;
import com.discord.codegen.NativeCompressionModuleSpec;
import com.discord.codegen.NativeDateFormatUtilsModuleSpec;
import com.discord.codegen.NativeDigitalCredentialModuleSpec;
import com.discord.codegen.NativeFileModuleSpec;
import com.discord.codegen.NativeI18nModuleSpec;
import com.discord.codegen.NativeJSWatchdogModuleSpec;
import com.discord.codegen.NativeJankSessionModuleSpec;
import com.discord.codegen.NativeJankStatsModuleSpec;
import com.discord.codegen.NativeKeyCommandsModuleSpec;
import com.discord.codegen.NativeKeyboardModuleSpec;
import com.discord.codegen.NativeMediaEngineModuleSpec;
import com.discord.codegen.NativeMediaManagerModuleSpec;
import com.discord.codegen.NativeMetricMonitorModuleSpec;
import com.discord.codegen.NativeMobileVoiceOverlayModuleSpec;
import com.discord.codegen.NativeNotifSettingsModuleSpec;
import com.discord.codegen.NativeOnDemandResourceModuleSpec;
import com.discord.codegen.NativePlayAgeSignalsModuleSpec;
import com.discord.codegen.NativePlayIntegrityModuleSpec;
import com.discord.codegen.NativePushNotificationMonitorModuleSpec;
import com.discord.codegen.NativeReactAssetModuleSpec;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.discord.codegen.NativeShareManagerModuleSpec;
import com.discord.codegen.NativeSystraceModuleSpec;
import com.discord.codegen.NativeTTIManagerModuleSpec;
import com.discord.codegen.NativeTTIModuleSpec;
import com.discord.codegen.NativeTelecomModuleSpec;
import com.discord.codegen.NativeTelemetryRingModuleSpec;
import com.discord.codegen.NativeThemeModuleSpec;
import com.discord.codegen.NativeTimersModuleSpec;
import com.discord.codegen.NativeTimezoneHermesFixModuleSpec;
import com.discord.codegen.NativeTouchEventAnalyticsModuleSpec;
import com.discord.core.LocalImageThumbnailViewManager;
import com.discord.device.DevicePackage;
import com.discord.emoji_picker.react.EmojiPickerPackage;
import com.discord.external_pip.ExternalPipModule;
import com.discord.fast_connect.FastConnectPackage;
import com.discord.fastest_list.react.FastestListPackage;
import com.discord.intents.IntentsPackage;
import com.discord.libdiscore.LibDiscorePackage;
import com.discord.libdiscore.LibdiscoreModuleProvider;
import com.discord.media.engine.video.VideoStreamViewManager;
import com.discord.portals.PortalsPackage;
import com.discord.qr.scanner.QRScannerViewManager;
import com.discord.react.FontPackage;
import com.discord.react_gesture_handler.DiscordGestureHandlerPackage;
import com.discord.safearea.SafeAreaPackage;
import com.discord.sticker.react.StickerPackage;
import com.discord.sticker_picker.react.StickerPickerPackage;
import com.discord.thumbhash.ThumbhashPackage;
import com.discord.tti_measurement_view.TTIMeasurementViewPackage;
import com.discord.view.ReactScrollViewManagerOverride;
import com.discord.view.ReactViewManagerOverride;
import com.discord.view.ScreenStackViewManagerOverride;
import com.discord.view.ScreenViewManagerOverride;
import com.discord.wakelock.WakelockPackage;
import com.discord.zoom_layout.ZoomLayoutPackage;
import com.facebook.react.PackageList;
import com.facebook.react.ReactNativeHost;
import com.facebook.react.ReactPackage;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.uimanager.ViewManager;
import java.util.ArrayList;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0018\u0010\b\u001a\u0012\u0012\u0004\u0012\u00020\n0\tj\b\u0012\u0004\u0012\u00020\n`\u000bH\u0016R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/discord/bridge/DCDPackageList;", "Lcom/facebook/react/PackageList;", "host", "Lcom/facebook/react/ReactNativeHost;", "libdiscoreModuleProvider", "Lcom/discord/libdiscore/LibdiscoreModuleProvider;", "<init>", "(Lcom/facebook/react/ReactNativeHost;Lcom/discord/libdiscore/LibdiscoreModuleProvider;)V", "getPackages", "Ljava/util/ArrayList;", "Lcom/facebook/react/ReactPackage;", "Lkotlin/collections/ArrayList;", "app_googleRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DCDPackageList extends PackageList {

    @NotNull
    private final LibdiscoreModuleProvider libdiscoreModuleProvider;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public DCDPackageList(@NotNull ReactNativeHost host, @NotNull LibdiscoreModuleProvider libdiscoreModuleProvider) {
        super(host);
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(libdiscoreModuleProvider, "libdiscoreModuleProvider");
        this.libdiscoreModuleProvider = libdiscoreModuleProvider;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ReactContextBaseJavaModule getPackages$lambda$0(ReactApplicationContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new ExternalPipModule(reactContext);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$1(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new VideoStreamViewManager();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$2(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new ChatInputViewManager();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$3(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new ClipViewManager();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$4(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new LocalImageThumbnailViewManager();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$5(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new QRScannerViewManager();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$6(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new ScreenStackViewManagerOverride();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$7(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new ScreenViewManagerOverride();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final ViewManager getPackages$lambda$8(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new ReactViewManagerOverride();
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final ViewManager getPackages$lambda$9(ReactApplicationContext it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return new ReactScrollViewManagerOverride(null, 1, 0 == true ? 1 : 0);
    }

    @Override // com.facebook.react.PackageList
    @NotNull
    public ArrayList<ReactPackage> getPackages() {
        ArrayList<ReactPackage> packages = super.getPackages();
        packages.add(new LibDiscorePackage(this.libdiscoreModuleProvider));
        DCDModuleProvider dCDModuleProvider = DCDModuleProvider.INSTANCE;
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$1.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$2.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$3.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$4.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$5.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$6.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$7.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$8.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$9.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$10.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$11.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$12.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$13.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$14.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$15.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$16.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$17.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$18.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$19.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$20.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$21.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$22.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$23.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$24.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(DCDPackageList$getPackages$25.INSTANCE));
        packages.add(dCDModuleProvider.getLegacyPackageForModule(new a(9)));
        packages.add(DCDModuleProvider.getLegacyPackageForModuleWithViewManager$default(dCDModuleProvider, null, new a(10), 1, null));
        packages.add(dCDModuleProvider.getViewManagers(new a(11), new a(12), new a(13), new a(14), new a(15), new a(16), new a(17), new a(18)));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAdsModuleSpec.NAME, DCDPackageList$getPackages$36.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAppDatabaseModuleSpec.NAME, DCDPackageList$getPackages$37.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAppIconModuleSpec.NAME, DCDPackageList$getPackages$38.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAppLifecycleModuleSpec.NAME, DCDPackageList$getPackages$39.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAppRatingRequestModuleSpec.NAME, DCDPackageList$getPackages$40.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAudioManagerModuleSpec.NAME, new DCDPackageList$getPackages$41(AudioManagerModule.INSTANCE)));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAudioPlayerModuleSpec.NAME, DCDPackageList$getPackages$42.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeAudioRouteEmitterModuleSpec.NAME, DCDPackageList$getPackages$43.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeBrowserManagerModuleSpec.NAME, DCDPackageList$getPackages$44.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeCacheModuleSpec.NAME, DCDPackageList$getPackages$45.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeCommandClipboardModuleSpec.NAME, DCDPackageList$getPackages$46.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeCompressionModuleSpec.NAME, DCDPackageList$getPackages$47.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativePlayAgeSignalsModuleSpec.NAME, DCDPackageList$getPackages$48.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativePlayIntegrityModuleSpec.NAME, DCDPackageList$getPackages$49.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeDateFormatUtilsModuleSpec.NAME, DCDPackageList$getPackages$50.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeDigitalCredentialModuleSpec.NAME, DCDPackageList$getPackages$51.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeFileModuleSpec.NAME, DCDPackageList$getPackages$52.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeI18nModuleSpec.NAME, DCDPackageList$getPackages$53.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeJankSessionModuleSpec.NAME, DCDPackageList$getPackages$54.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeJankStatsModuleSpec.NAME, DCDPackageList$getPackages$55.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeJSWatchdogModuleSpec.NAME, DCDPackageList$getPackages$56.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeKeyCommandsModuleSpec.NAME, DCDPackageList$getPackages$57.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeKeyboardModuleSpec.NAME, DCDPackageList$getPackages$58.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeMediaManagerModuleSpec.NAME, DCDPackageList$getPackages$59.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeMetricMonitorModuleSpec.NAME, DCDPackageList$getPackages$60.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeMobileVoiceOverlayModuleSpec.NAME, DCDPackageList$getPackages$61.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeOnDemandResourceModuleSpec.NAME, DCDPackageList$getPackages$62.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeNotifSettingsModuleSpec.NAME, DCDPackageList$getPackages$63.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativePushNotificationMonitorModuleSpec.NAME, DCDPackageList$getPackages$64.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeReactAssetModuleSpec.NAME, DCDPackageList$getPackages$65.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeSecurityKeyManagerModuleSpec.NAME, DCDPackageList$getPackages$66.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeShareManagerModuleSpec.NAME, DCDPackageList$getPackages$67.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeSystraceModuleSpec.NAME, DCDPackageList$getPackages$68.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeThemeModuleSpec.NAME, DCDPackageList$getPackages$69.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTimersModuleSpec.NAME, DCDPackageList$getPackages$70.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTTIManagerModuleSpec.NAME, DCDPackageList$getPackages$71.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTTIModuleSpec.NAME, DCDPackageList$getPackages$72.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTelemetryRingModuleSpec.NAME, DCDPackageList$getPackages$73.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeMediaEngineModuleSpec.NAME, DCDPackageList$getPackages$74.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTelecomModuleSpec.NAME, DCDPackageList$getPackages$75.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTouchEventAnalyticsModuleSpec.NAME, DCDPackageList$getPackages$76.INSTANCE));
        packages.add(dCDModuleProvider.getTurboPackageForModule(NativeTimezoneHermesFixModuleSpec.NAME, DCDPackageList$getPackages$77.INSTANCE));
        Intrinsics.checkNotNull(packages);
        dCDModuleProvider.addTurboPackages(packages, new AuthenticationPackage(), new APNGPackage(), new AvatarPackage(), new BlurViewPackage(), new ClientInfoPackage(), new ChatPackage(), new DevicePackage(), new DiscordGestureHandlerPackage(), new EmojiPickerPackage(), new FastConnectPackage(), new FastestListPackage(), new FontPackage(), new IntentsPackage(), new PortalsPackage(), new SafeAreaPackage(), new StickerPackage(), new StickerPickerPackage(), new ThumbhashPackage(), new TTIMeasurementViewPackage(), new WakelockPackage(), new ZoomLayoutPackage());
        return packages;
    }
}
