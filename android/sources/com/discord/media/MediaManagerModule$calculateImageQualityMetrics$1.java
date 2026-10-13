package com.discord.media;

import com.discord.crash_reporting.CrashReporting;
import com.discord.media.utils.ImageQualityCalculator;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.WritableMap;
import fo.q;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.MediaManagerModule$calculateImageQualityMetrics$1", f = "MediaManagerModule.kt", l = {461, 462, 495, 496, 509}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaManagerModule$calculateImageQualityMetrics$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $compressedUri;
    final /* synthetic */ String $originalUri;
    final /* synthetic */ Promise $promise;
    private /* synthetic */ Object L$0;
    Object L$1;
    Object L$2;
    Object L$3;
    Object L$4;
    int label;
    final /* synthetic */ MediaManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule$calculateImageQualityMetrics$1(MediaManagerModule mediaManagerModule, String str, String str2, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaManagerModule;
        this.$originalUri = str;
        this.$compressedUri = str2;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        MediaManagerModule$calculateImageQualityMetrics$1 mediaManagerModule$calculateImageQualityMetrics$1 = new MediaManagerModule$calculateImageQualityMetrics$1(this.this$0, this.$originalUri, this.$compressedUri, this.$promise, continuation);
        mediaManagerModule$calculateImageQualityMetrics$1.L$0 = obj;
        return mediaManagerModule$calculateImageQualityMetrics$1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:35:0x01b7, code lost:
    
        if (r0 == r7) goto L69;
     */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0252  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0181 A[Catch: all -> 0x0031, TryCatch #0 {all -> 0x0031, blocks: (B:10:0x0029, B:12:0x01ba, B:14:0x01be, B:15:0x023b, B:23:0x01c4, B:27:0x004c, B:29:0x017d, B:31:0x0181, B:33:0x0194, B:34:0x01a5, B:38:0x0064, B:40:0x0168, B:45:0x0082, B:47:0x00df, B:49:0x00e3, B:52:0x00fa, B:53:0x010b, B:56:0x0128, B:59:0x013b, B:61:0x0146, B:64:0x0151, B:68:0x01f4, B:69:0x020f, B:71:0x009b, B:73:0x00c9, B:77:0x00b0), top: B:2:0x0019 }] */
    /* JADX WARN: Removed duplicated region for block: B:32:0x0192  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x017b  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x017c  */
    /* JADX WARN: Removed duplicated region for block: B:49:0x00e3 A[Catch: all -> 0x0031, TRY_LEAVE, TryCatch #0 {all -> 0x0031, blocks: (B:10:0x0029, B:12:0x01ba, B:14:0x01be, B:15:0x023b, B:23:0x01c4, B:27:0x004c, B:29:0x017d, B:31:0x0181, B:33:0x0194, B:34:0x01a5, B:38:0x0064, B:40:0x0168, B:45:0x0082, B:47:0x00df, B:49:0x00e3, B:52:0x00fa, B:53:0x010b, B:56:0x0128, B:59:0x013b, B:61:0x0146, B:64:0x0151, B:68:0x01f4, B:69:0x020f, B:71:0x009b, B:73:0x00c9, B:77:0x00b0), top: B:2:0x0019 }] */
    /* JADX WARN: Removed duplicated region for block: B:50:0x00f4  */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object i5;
        Throwable a;
        MediaManagerModule mediaManagerModule;
        String str;
        Object imageDimensions;
        String str2;
        Promise promise;
        Pair pair;
        Object imageDimensions2;
        Object loadImageDataFromUri;
        String str3;
        MediaManagerModule mediaManagerModule2;
        byte[] bArr;
        Object loadImageDataFromUri2;
        String str4;
        Object calculateQualityMetrics;
        a aVar = a.f13464d;
        int i6 = this.label;
        try {
        } catch (Throwable th2) {
            q qVar = Result.f13476e;
            i5 = b.i(th2);
        }
        if (i6 == 0) {
            b.R(obj);
            mediaManagerModule = this.this$0;
            String str5 = this.$originalUri;
            str = this.$compressedUri;
            Promise promise2 = this.$promise;
            q qVar2 = Result.f13476e;
            this.L$0 = mediaManagerModule;
            this.L$1 = str5;
            this.L$2 = str;
            this.L$3 = promise2;
            this.label = 1;
            imageDimensions = mediaManagerModule.getImageDimensions(str5, this);
            if (imageDimensions == aVar) {
                return aVar;
            }
            str2 = str5;
            promise = promise2;
        } else {
            if (i6 != 1) {
                if (i6 == 2) {
                    Pair pair2 = (Pair) this.L$4;
                    Promise promise3 = (Promise) this.L$3;
                    str = (String) this.L$2;
                    str2 = (String) this.L$1;
                    mediaManagerModule = (MediaManagerModule) this.L$0;
                    b.R(obj);
                    pair = pair2;
                    promise = promise3;
                    imageDimensions2 = obj;
                    Pair pair3 = (Pair) imageDimensions2;
                    if (pair != null) {
                        promise.reject("quality_metrics_error", "Failed to get original image dimensions from URI: " + str2);
                    } else {
                        Object obj2 = pair.f13475e;
                        Object obj3 = pair.f13474d;
                        if (pair3 == null) {
                            promise.reject("quality_metrics_error", "Failed to get compressed image dimensions from URI: " + str);
                        } else {
                            Object obj4 = pair3.f13475e;
                            Object obj5 = pair3.f13474d;
                            if (((Number) obj3).intValue() == ((Number) obj5).intValue() && ((Number) obj2).intValue() == ((Number) obj4).intValue()) {
                                if (((Number) obj3).intValue() <= 8192 && ((Number) obj2).intValue() <= 8192) {
                                    this.L$0 = mediaManagerModule;
                                    this.L$1 = str2;
                                    this.L$2 = str;
                                    this.L$3 = promise;
                                    this.L$4 = null;
                                    this.label = 3;
                                    loadImageDataFromUri = mediaManagerModule.loadImageDataFromUri(str2, this);
                                    if (loadImageDataFromUri == aVar) {
                                        return aVar;
                                    }
                                    str3 = str;
                                    mediaManagerModule2 = mediaManagerModule;
                                    bArr = (byte[]) loadImageDataFromUri;
                                    this.L$0 = str2;
                                    this.L$1 = str3;
                                    this.L$2 = promise;
                                    this.L$3 = bArr;
                                    this.label = 4;
                                    loadImageDataFromUri2 = mediaManagerModule2.loadImageDataFromUri(str3, this);
                                    if (loadImageDataFromUri2 != aVar) {
                                    }
                                }
                                promise.reject("quality_metrics_error", "Image too large for quality metrics calculation: " + obj3 + "x" + obj2 + " (max: 8192x8192)");
                            }
                            promise.reject("quality_metrics_error", "Image dimensions do not match: original(" + obj3 + "x" + obj2 + ") vs compressed(" + obj5 + "x" + obj4 + ")");
                        }
                    }
                    i5 = Unit.a;
                    q qVar3 = Result.f13476e;
                    String str6 = this.$originalUri;
                    String str7 = this.$compressedUri;
                    Promise promise4 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
                if (i6 == 3) {
                    Promise promise5 = (Promise) this.L$3;
                    String str8 = (String) this.L$2;
                    String str9 = (String) this.L$1;
                    mediaManagerModule2 = (MediaManagerModule) this.L$0;
                    b.R(obj);
                    promise = promise5;
                    str2 = str9;
                    loadImageDataFromUri = obj;
                    str3 = str8;
                    bArr = (byte[]) loadImageDataFromUri;
                    this.L$0 = str2;
                    this.L$1 = str3;
                    this.L$2 = promise;
                    this.L$3 = bArr;
                    this.label = 4;
                    loadImageDataFromUri2 = mediaManagerModule2.loadImageDataFromUri(str3, this);
                    if (loadImageDataFromUri2 != aVar) {
                        return aVar;
                    }
                    str4 = str2;
                    byte[] bArr2 = (byte[]) loadImageDataFromUri2;
                    if (bArr != null) {
                    }
                    i5 = Unit.a;
                    q qVar32 = Result.f13476e;
                    String str62 = this.$originalUri;
                    String str72 = this.$compressedUri;
                    Promise promise42 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                    }
                    return Unit.a;
                }
                if (i6 != 4) {
                    if (i6 != 5) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    Promise promise6 = (Promise) this.L$0;
                    b.R(obj);
                    promise = promise6;
                    calculateQualityMetrics = obj;
                    ImageQualityCalculator.ImageQualityMetrics imageQualityMetrics = (ImageQualityCalculator.ImageQualityMetrics) calculateQualityMetrics;
                    if (imageQualityMetrics == null) {
                        promise.reject("quality_metrics_error", "Failed to calculate quality metrics");
                    } else {
                        WritableMap createMap = Arguments.createMap();
                        createMap.putDouble("psnr", imageQualityMetrics.getPsnr());
                        createMap.putDouble("ssim", imageQualityMetrics.getSsim());
                        createMap.putInt("psnrCalculationTimeMs", (int) imageQualityMetrics.getPsnrCalculationTimeMs());
                        createMap.putInt("ssimCalculationTimeMs", (int) imageQualityMetrics.getSsimCalculationTimeMs());
                        promise.resolve(createMap);
                    }
                    i5 = Unit.a;
                    q qVar322 = Result.f13476e;
                    String str622 = this.$originalUri;
                    String str722 = this.$compressedUri;
                    Promise promise422 = this.$promise;
                    a = Result.a(i5);
                    if (a != null) {
                        CrashReporting crashReporting = CrashReporting.INSTANCE;
                        CrashReporting.addBreadcrumb$default(crashReporting, "Failed to calculate image quality metrics", v0.g(new Pair("originalUri", str622), new Pair("compressedUri", str722)), null, null, false, 28, null);
                        CrashReporting.captureException$default(crashReporting, a, false, 2, null);
                        promise422.reject("quality_metrics_error", "Error calculating image quality metrics: " + a.getMessage());
                    }
                    return Unit.a;
                }
                bArr = (byte[]) this.L$3;
                Promise promise7 = (Promise) this.L$2;
                str3 = (String) this.L$1;
                str4 = (String) this.L$0;
                b.R(obj);
                promise = promise7;
                loadImageDataFromUri2 = obj;
                byte[] bArr22 = (byte[]) loadImageDataFromUri2;
                if (bArr != null) {
                    promise.reject("quality_metrics_error", "Failed to load original image data from URI: " + str4);
                } else if (bArr22 == null) {
                    promise.reject("quality_metrics_error", "Failed to load compressed image data from URI: " + str3);
                } else {
                    ImageQualityCalculator imageQualityCalculator = ImageQualityCalculator.INSTANCE;
                    this.L$0 = promise;
                    this.L$1 = null;
                    this.L$2 = null;
                    this.L$3 = null;
                    this.label = 5;
                    calculateQualityMetrics = imageQualityCalculator.calculateQualityMetrics(bArr, bArr22, this);
                }
                i5 = Unit.a;
                q qVar3222 = Result.f13476e;
                String str6222 = this.$originalUri;
                String str7222 = this.$compressedUri;
                Promise promise4222 = this.$promise;
                a = Result.a(i5);
                if (a != null) {
                }
                return Unit.a;
            }
            promise = (Promise) this.L$3;
            str = (String) this.L$2;
            str2 = (String) this.L$1;
            mediaManagerModule = (MediaManagerModule) this.L$0;
            b.R(obj);
            imageDimensions = obj;
        }
        pair = (Pair) imageDimensions;
        this.L$0 = mediaManagerModule;
        this.L$1 = str2;
        this.L$2 = str;
        this.L$3 = promise;
        this.L$4 = pair;
        this.label = 2;
        imageDimensions2 = mediaManagerModule.getImageDimensions(str, this);
        if (imageDimensions2 == aVar) {
            return aVar;
        }
        Pair pair32 = (Pair) imageDimensions2;
        if (pair != null) {
        }
        i5 = Unit.a;
        q qVar32222 = Result.f13476e;
        String str62222 = this.$originalUri;
        String str72222 = this.$compressedUri;
        Promise promise42222 = this.$promise;
        a = Result.a(i5);
        if (a != null) {
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaManagerModule$calculateImageQualityMetrics$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
