package com.discord.media;

import a3.e;
import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.net.Uri;
import android.os.BatteryManager;
import android.os.Build;
import android.os.PowerManager;
import com.discord.chat.input.views.a;
import com.discord.codegen.NativeMediaManagerModuleSpec;
import com.discord.jank_stats.JankScreenContext;
import com.discord.logging.Log;
import com.discord.media.react.events.CompressionProgressEvent;
import com.discord.media.utils.EncodingConfig;
import com.discord.media.utils.MediaResolver;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.ViewProps;
import com.swmansion.reanimated.layoutReanimation.Snapshot;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.u0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;

@Metadata(d1 = {"\u0000\u0086\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0006\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0002\u0018\u0000 B2\u00020\u0001:\u0001BB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0014\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\r0\u000bH\u0014J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\u0018\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\"\u0010\u0014\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\"\u0010\u0017\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J \u0010\u0018\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J*\u0010\u001b\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001c\u001a\u0004\u0018\u00010\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\"\u0010\u001d\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0018\u0010\u001e\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0018\u0010\u001f\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\"\u0010 \u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0018\u0010!\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\b\u0010\"\u001a\u00020#H\u0016J\"\u0010$\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\"\u0010%\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\"\u0010&\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0010\u0010'\u001a\u00020\u000f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0012\u0010(\u001a\u0004\u0018\u00010)2\u0006\u0010*\u001a\u00020\fH\u0002J\u0010\u0010+\u001a\u00020#2\u0006\u0010,\u001a\u00020-H\u0002J(\u0010.\u001a\u00020/2\u0006\u00100\u001a\u0002012\u0006\u00102\u001a\u0002012\u0006\u00103\u001a\u00020\u001a2\u0006\u0010,\u001a\u00020-H\u0002J\u0018\u00104\u001a\u00020\u000f2\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J \u00105\u001a\u00020\u000f2\u0006\u00106\u001a\u00020\f2\u0006\u00107\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0018\u00108\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u0013H\u0016J\u0010\u00109\u001a\u00020#2\u0006\u0010\u0011\u001a\u00020\fH\u0002J\u0010\u0010:\u001a\u00020#2\u0006\u0010;\u001a\u00020<H\u0002J$\u0010=\u001a\u0010\u0012\u0004\u0012\u000201\u0012\u0004\u0012\u000201\u0018\u00010>2\u0006\u0010\u0011\u001a\u00020\fH\u0082@¢\u0006\u0002\u0010?J\u0018\u0010@\u001a\u0004\u0018\u00010A2\u0006\u0010\u0011\u001a\u00020\fH\u0082@¢\u0006\u0002\u0010?R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006C"}, d2 = {"Lcom/discord/media/MediaManagerModule;", "Lcom/discord/codegen/NativeMediaManagerModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "scope", "Lkotlinx/coroutines/CoroutineScope;", "mediaResolver", "Lcom/discord/media/utils/MediaResolver;", "getTypedExportedConstants", "", "", "", "invalidate", "", "getLosslessImageData", "uri", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "cancelResolveToMediaFilePath", "options", "Lcom/facebook/react/bridge/ReadableMap;", "resolveToMediaFilePath", "downloadMediaAsset", "mediaType", "", "downloadMediaAssetWithContentType", "contentType", "getVideoMetadata", "imageHasTransparency", "getImageContentType", "compressVideo", "convertToGIFFilePath", "getSupportedImageTypes", "Lcom/facebook/react/bridge/WritableMap;", "convertBase64ToJPEG", "convertBase64ToGIF", "convertToJPEG", "getDeviceStateInfo", "getEncoderInfo", "Landroid/media/MediaCodecInfo;", "mimeType", "createCapabilitiesMap", "videoCapabilities", "Landroid/media/MediaCodecInfo$VideoCapabilities;", "checkEncodingConstraints", "Lcom/facebook/react/bridge/WritableArray;", "width", "", "height", "frameRate", "isVideoEncodingSupported", "calculateImageQualityMetrics", "originalUri", "compressedUri", "getMediaOrigin", "detectMediaOrigin", "detectFileOrigin", "parsedUri", "Landroid/net/Uri;", "getImageDimensions", "Lkotlin/Pair;", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "loadImageDataFromUri", "", "Companion", "media_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nMediaManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n+ 3 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n+ 4 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,702:1\n29#2:703\n29#2:704\n29#2:705\n29#2:711\n1310#3:706\n12637#3,2:707\n1311#3:709\n1#4:710\n*S KotlinDebug\n*F\n+ 1 MediaManagerModule.kt\ncom/discord/media/MediaManagerModule\n*L\n91#1:703\n100#1:704\n195#1:705\n562#1:711\n299#1:706\n300#1:707,2\n299#1:709\n*E\n"})
/* loaded from: classes.dex */
public final class MediaManagerModule extends NativeMediaManagerModuleSpec {
    private static final int MAX_IMAGE_DATA_SIZE = 52428800;
    private static final int MAX_IMAGE_DIMENSION = 8192;

    @NotNull
    private static final String QUALITY_METRICS_ERROR = "quality_metrics_error";

    @NotNull
    private final MediaResolver mediaResolver;

    @NotNull
    private final CoroutineScope scope;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.scope = x.c();
        this.mediaResolver = new MediaResolver(reactContext, new a(4, this));
    }

    private final WritableArray checkEncodingConstraints(int width, int height, double frameRate, MediaCodecInfo.VideoCapabilities videoCapabilities) {
        WritableArray createArray = Arguments.createArray();
        if (width % videoCapabilities.getWidthAlignment() != 0 || height % videoCapabilities.getHeightAlignment() != 0) {
            WritableMap createMap = Arguments.createMap();
            createMap.putString("type", "resolution_alignment");
            createMap.putString("message", e.f(videoCapabilities.getWidthAlignment(), videoCapabilities.getHeightAlignment(), "Resolution must be aligned to ", "x"));
            WritableMap createMap2 = Arguments.createMap();
            createMap2.putInt("width", width);
            createMap2.putInt("height", height);
            Unit unit = Unit.a;
            createMap.putMap("current", createMap2);
            WritableMap createMap3 = Arguments.createMap();
            createMap3.putInt("width", videoCapabilities.getWidthAlignment());
            createMap3.putInt("height", videoCapabilities.getHeightAlignment());
            createMap.putMap("alignment", createMap3);
            createArray.pushMap(createMap);
            return createArray;
        }
        if (videoCapabilities.isSizeSupported(width, height)) {
            if (!videoCapabilities.areSizeAndRateSupported(width, height, frameRate)) {
                WritableMap createMap4 = Arguments.createMap();
                createMap4.putString("type", "frameRate");
                createMap4.putString("message", "Frame rate " + frameRate + " not supported at resolution " + width + "x" + height);
                createMap4.putDouble("current", frameRate);
                createArray.pushMap(createMap4);
            }
            return createArray;
        }
        WritableMap createMap5 = Arguments.createMap();
        createMap5.putString("type", "resolution");
        createMap5.putString("message", "Resolution " + width + "x" + height + " not supported");
        WritableMap createMap6 = Arguments.createMap();
        createMap6.putInt("width", width);
        createMap6.putInt("height", height);
        Unit unit2 = Unit.a;
        createMap5.putMap("current", createMap6);
        createArray.pushMap(createMap5);
        return createArray;
    }

    private final WritableMap createCapabilitiesMap(MediaCodecInfo.VideoCapabilities videoCapabilities) {
        WritableMap createMap = Arguments.createMap();
        WritableMap createMap2 = Arguments.createMap();
        Integer lower = videoCapabilities.getSupportedWidths().getLower();
        Intrinsics.checkNotNullExpressionValue(lower, "getLower(...)");
        createMap2.putInt(ViewProps.MIN_WIDTH, lower.intValue());
        Integer upper = videoCapabilities.getSupportedWidths().getUpper();
        Intrinsics.checkNotNullExpressionValue(upper, "getUpper(...)");
        createMap2.putInt(ViewProps.MAX_WIDTH, upper.intValue());
        Integer lower2 = videoCapabilities.getSupportedHeights().getLower();
        Intrinsics.checkNotNullExpressionValue(lower2, "getLower(...)");
        createMap2.putInt(ViewProps.MIN_HEIGHT, lower2.intValue());
        Integer upper2 = videoCapabilities.getSupportedHeights().getUpper();
        Intrinsics.checkNotNullExpressionValue(upper2, "getUpper(...)");
        createMap2.putInt(ViewProps.MAX_HEIGHT, upper2.intValue());
        createMap.putMap("resolution", createMap2);
        WritableMap createMap3 = Arguments.createMap();
        if (videoCapabilities.getSupportedFrameRates().getLower() != null) {
            createMap3.putDouble("min", r2.intValue());
        }
        if (videoCapabilities.getSupportedFrameRates().getUpper() != null) {
            createMap3.putDouble("max", r2.intValue());
        }
        createMap.putMap("frameRate", createMap3);
        WritableMap createMap4 = Arguments.createMap();
        Integer lower3 = videoCapabilities.getBitrateRange().getLower();
        Intrinsics.checkNotNullExpressionValue(lower3, "getLower(...)");
        createMap4.putInt("min", lower3.intValue());
        Integer upper3 = videoCapabilities.getBitrateRange().getUpper();
        Intrinsics.checkNotNullExpressionValue(upper3, "getUpper(...)");
        createMap4.putInt("max", upper3.intValue());
        createMap.putMap("bitrate", createMap4);
        WritableMap createMap5 = Arguments.createMap();
        createMap5.putInt("widthAlignment", videoCapabilities.getWidthAlignment());
        createMap5.putInt("heightAlignment", videoCapabilities.getHeightAlignment());
        createMap.putMap("blockSize", createMap5);
        return createMap;
    }

    private final WritableMap detectFileOrigin(Uri parsedUri) {
        WritableMap createMap = Arguments.createMap();
        String path = parsedUri.getPath();
        if (path == null) {
            path = "";
        }
        String lastPathSegment = parsedUri.getLastPathSegment();
        String str = lastPathSegment != null ? lastPathSegment : "";
        if (StringsKt.D(path, "/tmp/", false) || StringsKt.D(path, "/temp/", false) || StringsKt.D(path, "/cache/", false)) {
            createMap.putString("source", "picker");
            createMap.putString("confidence", "medium");
        } else if (StringsKt.D(path, "/DCIM/Camera/", false) || kotlin.text.x.o(str, "IMG_", false)) {
            createMap.putString("source", "camera");
            createMap.putString("confidence", "high");
        } else if (StringsKt.D(path, "/DCIM/Screenshots/", false) || StringsKt.D(path, "/Pictures/Screenshots/", false) || StringsKt.D(str, "Screenshot", false) || StringsKt.D(str, "Screen Shot", false)) {
            createMap.putString("source", "screenshot");
            createMap.putString("confidence", "high");
        } else if (StringsKt.D(path, "/Download/", false)) {
            createMap.putString("source", "downloads");
            createMap.putString("confidence", "medium");
        } else if (StringsKt.D(str, "edited", false) || StringsKt.D(path, "edited", false)) {
            createMap.putString("source", "edited");
            createMap.putString("confidence", "medium");
        } else {
            createMap.putString("source", "file");
            createMap.putString("confidence", "low");
        }
        if (str.length() == 0) {
            str = JankScreenContext.UNKNOWN_SCREEN;
        }
        createMap.putString("filename", str);
        if (path.length() == 0) {
            path = JankScreenContext.UNKNOWN_SCREEN;
        }
        createMap.putString("path", path);
        return createMap;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private final WritableMap detectMediaOrigin(String uri) {
        String str;
        WritableMap createMap = Arguments.createMap();
        createMap.putString("source", JankScreenContext.UNKNOWN_SCREEN);
        createMap.putString("confidence", "low");
        try {
            Uri parse = Uri.parse(uri);
            String scheme = parse.getScheme();
            if (scheme != null) {
                str = scheme.toLowerCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(str, "toLowerCase(...)");
            } else {
                str = null;
            }
            if (str != null) {
                switch (str.hashCode()) {
                    case 3143036:
                        if (!str.equals("file")) {
                            break;
                        } else {
                            break;
                        }
                    case 3213448:
                        if (!str.equals("http")) {
                            break;
                        }
                        createMap.putString("source", "network");
                        createMap.putString("confidence", "medium");
                        break;
                    case 99617003:
                        if (!str.equals("https")) {
                            break;
                        }
                        createMap.putString("source", "network");
                        createMap.putString("confidence", "medium");
                        break;
                    case 951530617:
                        if (str.equals("content")) {
                            String authority = parse.getAuthority();
                            if (authority != null && StringsKt.D(authority, "media", false)) {
                                createMap.putString("source", "gallery");
                                createMap.putString("confidence", "medium");
                                break;
                            } else if (authority != null && StringsKt.D(authority, "downloads", false)) {
                                createMap.putString("source", "downloads");
                                createMap.putString("confidence", "medium");
                                break;
                            } else {
                                createMap.putString("source", "gallery");
                                createMap.putString("confidence", "low");
                                break;
                            }
                        }
                        break;
                }
                return createMap;
            }
            createMap.putString("source", JankScreenContext.UNKNOWN_SCREEN);
            createMap.putString("confidence", "low");
            return createMap;
        } catch (Exception e9) {
            Log.INSTANCE.w("MediaManagerModule", "Error parsing URI for origin detection: " + uri, e9);
            return createMap;
        }
    }

    private final MediaCodecInfo getEncoderInfo(String mimeType) {
        MediaCodecInfo[] codecInfos = new MediaCodecList(0).getCodecInfos();
        Intrinsics.checkNotNullExpressionValue(codecInfos, "getCodecInfos(...)");
        for (MediaCodecInfo mediaCodecInfo : codecInfos) {
            if (mediaCodecInfo.isEncoder()) {
                String[] supportedTypes = mediaCodecInfo.getSupportedTypes();
                Intrinsics.checkNotNullExpressionValue(supportedTypes, "getSupportedTypes(...)");
                for (String str : supportedTypes) {
                    if (Intrinsics.areEqual(str, mimeType)) {
                        return mediaCodecInfo;
                    }
                }
            }
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object getImageDimensions(String str, Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(d.f19093i, new MediaManagerModule$getImageDimensions$2(str, this, null), continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object loadImageDataFromUri(String str, Continuation continuation) {
        ur.e eVar = g0.a;
        return x.A(d.f19093i, new MediaManagerModule$loadImageDataFromUri$2(str, this, null), continuation);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit mediaResolver$lambda$0(MediaManagerModule mediaManagerModule, Uri uri, int i5) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        String uri2 = uri.toString();
        Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
        mediaManagerModule.emitOnCompressionProgress(new CompressionProgressEvent(uri2, i5).serialize());
        return Unit.a;
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void calculateImageQualityMetrics(@NotNull String originalUri, @NotNull String compressedUri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(originalUri, "originalUri");
        Intrinsics.checkNotNullParameter(compressedUri, "compressedUri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.scope, null, new MediaManagerModule$calculateImageQualityMetrics$1(this, originalUri, compressedUri, promise, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void cancelResolveToMediaFilePath(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        this.mediaResolver.cancel(Uri.parse(uri));
        promise.resolve(null);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void compressVideo(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "compressVideo is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void convertBase64ToGIF(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "convertBase64ToGIF is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void convertBase64ToJPEG(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "convertBase64ToJPEG is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void convertToGIFFilePath(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "convertToGIFFilePath is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void convertToJPEG(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "convertToJPEG is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void downloadMediaAsset(@NotNull String uri, double mediaType, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        downloadMediaAssetWithContentType(uri, mediaType, null, promise);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void downloadMediaAssetWithContentType(@NotNull String uri, double mediaType, String contentType, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        CoroutineScope coroutineScope = this.scope;
        ur.e eVar = g0.a;
        x.t(coroutineScope, d.f19093i, new MediaManagerModule$downloadMediaAssetWithContentType$1(uri, contentType, this, promise, null), 2);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void getDeviceStateInfo(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
        Intrinsics.checkNotNull(reactApplicationContext.getSystemService("batterymanager"), "null cannot be cast to non-null type android.os.BatteryManager");
        double intProperty = ((BatteryManager) r1).getIntProperty(4) / 100.0d;
        String str = "UNKNOWN";
        if (Build.VERSION.SDK_INT >= 29) {
            Object systemService = reactApplicationContext.getSystemService("power");
            Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.os.PowerManager");
            int currentThermalStatus = ((PowerManager) systemService).getCurrentThermalStatus();
            if (currentThermalStatus == 0) {
                str = "NOMINAL";
            } else if (currentThermalStatus == 1 || currentThermalStatus == 2) {
                str = "FAIR";
            } else if (currentThermalStatus == 3) {
                str = "SERIOUS";
            } else if (currentThermalStatus == 4 || currentThermalStatus == 5) {
                str = "CRITICAL";
            }
        }
        Object systemService2 = reactApplicationContext.getSystemService("power");
        Intrinsics.checkNotNull(systemService2, "null cannot be cast to non-null type android.os.PowerManager");
        boolean isPowerSaveMode = ((PowerManager) systemService2).isPowerSaveMode();
        WritableMap createMap = Arguments.createMap();
        createMap.putString("thermalState", str);
        createMap.putDouble("batteryLevel", intProperty);
        createMap.putBoolean("isLowPowerMode", isPowerSaveMode);
        promise.resolve(createMap);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void getImageContentType(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "getImageContentType is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void getLosslessImageData(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.resolve(uri);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void getMediaOrigin(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        try {
            promise.resolve(detectMediaOrigin(uri));
        } catch (Exception e9) {
            Log.INSTANCE.e("MediaManagerModule", "Failed to detect media origin for URI: " + uri, e9);
            WritableMap createMap = Arguments.createMap();
            createMap.putString("source", JankScreenContext.UNKNOWN_SCREEN);
            createMap.putString("confidence", "low");
            promise.resolve(createMap);
        }
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    @NotNull
    public WritableMap getSupportedImageTypes() {
        throw new UnsupportedOperationException("getSupportedImageTypes is only supported on iOS");
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    @NotNull
    public Map<String, Object> getTypedExportedConstants() {
        return u0.b(new Pair("supportedExtensions", c0.g("mp4", "mov", "qt", "png", "jpg", "jpeg", "gif", "webp")));
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void getVideoMetadata(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.scope, null, new MediaManagerModule$getVideoMetadata$1(this, Uri.parse(uri), promise, null), 3);
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void imageHasTransparency(@NotNull String uri, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.reject("E_UNSUPPORTED", "imageHasTransparency is only supported on iOS");
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        x.f(this.scope, new CancellationException("Module destroyed"));
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void isVideoEncodingSupported(@NotNull ReadableMap options, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(options, "options");
        Intrinsics.checkNotNullParameter(promise, "promise");
        try {
            int i5 = options.getInt("width");
            int i6 = options.getInt("height");
            double d6 = options.getDouble("frameRate");
            WritableMap createMap = Arguments.createMap();
            MediaCodecInfo encoderInfo = getEncoderInfo("video/avc");
            if (encoderInfo == null) {
                createMap.putBoolean("isSupported", false);
                WritableArray createArray = Arguments.createArray();
                WritableMap createMap2 = Arguments.createMap();
                createMap2.putString("type", "codec_not_found");
                createMap2.putString("message", "No encoder found for mime type: video/avc");
                createArray.pushMap(createMap2);
                createMap.putArray("failures", createArray);
                createMap.putMap("capabilities", Arguments.createMap());
                promise.resolve(createMap);
                return;
            }
            createMap.putString("encoderName", encoderInfo.getName());
            MediaCodecInfo.VideoCapabilities videoCapabilities = encoderInfo.getCapabilitiesForType("video/avc").getVideoCapabilities();
            Intrinsics.checkNotNull(videoCapabilities);
            createMap.putMap("capabilities", createCapabilitiesMap(videoCapabilities));
            ReadableArray checkEncodingConstraints = checkEncodingConstraints(i5, i6, d6, videoCapabilities);
            if (checkEncodingConstraints.size() > 0) {
                createMap.putBoolean("isSupported", false);
                createMap.putArray("failures", checkEncodingConstraints);
            } else {
                createMap.putBoolean("isSupported", true);
            }
            promise.resolve(createMap);
        } catch (Exception e9) {
            promise.reject("ERROR", "Error checking video encoding support: " + e9.getMessage());
        }
    }

    @Override // com.discord.codegen.NativeMediaManagerModuleSpec
    public void resolveToMediaFilePath(@NotNull String uri, ReadableMap options, @NotNull Promise promise) {
        EncodingConfig encodingConfig;
        ReadableMap map;
        Intrinsics.checkNotNullParameter(uri, "uri");
        Intrinsics.checkNotNullParameter(promise, "promise");
        Uri parse = Uri.parse(uri);
        int i5 = (int) (NativeMapExtensionsKt.getDouble(options, "compressionQuality", 1.0d) * 100);
        boolean z5 = NativeMapExtensionsKt.getBoolean(options, "isLowQuality", false);
        boolean z6 = NativeMapExtensionsKt.getBoolean(options, "skipVideoTranscode", false);
        boolean z7 = NativeMapExtensionsKt.getBoolean(options, "useOriginalIfSmaller", false);
        boolean z8 = NativeMapExtensionsKt.getBoolean(options, "allowOptimization", true);
        if (options == null || (map = options.getMap("encodingConfig")) == null) {
            encodingConfig = null;
        } else {
            try {
                int i6 = map.getInt(Snapshot.TARGET_WIDTH);
                int i10 = map.getInt(Snapshot.TARGET_HEIGHT);
                double d6 = map.getDouble("keyFrameIntervalSeconds");
                int i11 = map.getInt("targetBitrate");
                encodingConfig = new EncodingConfig(i6, i10, Double.valueOf(map.getDouble("frameRate")), Double.valueOf(d6), Integer.valueOf(i11), map.getBoolean("createHDR"), Integer.valueOf(map.getInt("rotationDegrees")), map.getInt("progressUpdateGranularity"));
            } catch (Exception e9) {
                promise.reject(new IllegalArgumentException(e.k("Invalid encodingConfig: ", e9.getMessage())));
                return;
            }
        }
        x.t(this.scope, null, new MediaManagerModule$resolveToMediaFilePath$1(this, parse, i5, z5, z6, z7, encodingConfig, z8, promise, uri, null), 3);
    }
}
