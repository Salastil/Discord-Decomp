package com.discord.media;

import android.net.Uri;
import com.discord.crash_reporting.CrashReporting;
import com.discord.media.utils.EncodingConfig;
import com.discord.media.utils.MediaResolver;
import com.facebook.react.bridge.Promise;
import fo.q;
import java.util.concurrent.CancellationException;
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
@d(c = "com.discord.media.MediaManagerModule$resolveToMediaFilePath$1", f = "MediaManagerModule.kt", l = {130}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaManagerModule$resolveToMediaFilePath$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ boolean $allowOptimization;
    final /* synthetic */ EncodingConfig $encodingConfig;
    final /* synthetic */ int $imageCompressionQuality;
    final /* synthetic */ Uri $inputUri;
    final /* synthetic */ boolean $isLowQuality;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ boolean $skipVideoTranscode;
    final /* synthetic */ String $uri;
    final /* synthetic */ boolean $useOriginalIfSmaller;
    private /* synthetic */ Object L$0;
    int label;
    final /* synthetic */ MediaManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule$resolveToMediaFilePath$1(MediaManagerModule mediaManagerModule, Uri uri, int i5, boolean z5, boolean z6, boolean z7, EncodingConfig encodingConfig, boolean z8, Promise promise, String str, Continuation continuation) {
        super(2, continuation);
        this.this$0 = mediaManagerModule;
        this.$inputUri = uri;
        this.$imageCompressionQuality = i5;
        this.$isLowQuality = z5;
        this.$skipVideoTranscode = z6;
        this.$useOriginalIfSmaller = z7;
        this.$encodingConfig = encodingConfig;
        this.$allowOptimization = z8;
        this.$promise = promise;
        this.$uri = str;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        MediaManagerModule$resolveToMediaFilePath$1 mediaManagerModule$resolveToMediaFilePath$1 = new MediaManagerModule$resolveToMediaFilePath$1(this.this$0, this.$inputUri, this.$imageCompressionQuality, this.$isLowQuality, this.$skipVideoTranscode, this.$useOriginalIfSmaller, this.$encodingConfig, this.$allowOptimization, this.$promise, this.$uri, continuation);
        mediaManagerModule$resolveToMediaFilePath$1.L$0 = obj;
        return mediaManagerModule$resolveToMediaFilePath$1;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Object i5;
        MediaResolver mediaResolver;
        Promise promise;
        MediaResolver mediaResolver2;
        Object resolveToUri$media_release;
        a aVar = a.f13464d;
        int i6 = this.label;
        try {
            if (i6 == 0) {
                b.R(obj);
                MediaManagerModule mediaManagerModule = this.this$0;
                Uri uri = this.$inputUri;
                int i10 = this.$imageCompressionQuality;
                boolean z5 = this.$isLowQuality;
                boolean z6 = this.$skipVideoTranscode;
                boolean z7 = this.$useOriginalIfSmaller;
                EncodingConfig encodingConfig = this.$encodingConfig;
                boolean z8 = this.$allowOptimization;
                promise = this.$promise;
                q qVar = Result.f13476e;
                mediaResolver2 = mediaManagerModule.mediaResolver;
                this.L$0 = promise;
                this.label = 1;
                resolveToUri$media_release = mediaResolver2.resolveToUri$media_release(uri, i10, z5, z6, z7, encodingConfig, z8, this);
                if (resolveToUri$media_release == aVar) {
                    return aVar;
                }
            } else {
                if (i6 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                Promise promise2 = (Promise) this.L$0;
                b.R(obj);
                promise = promise2;
                resolveToUri$media_release = obj;
            }
            promise.resolve(((Uri) resolveToUri$media_release).toString());
            i5 = Unit.a;
            q qVar2 = Result.f13476e;
        } catch (Throwable th2) {
            q qVar3 = Result.f13476e;
            i5 = b.i(th2);
        }
        Promise promise3 = this.$promise;
        String str = this.$uri;
        MediaManagerModule mediaManagerModule2 = this.this$0;
        Uri uri2 = this.$inputUri;
        Throwable a = Result.a(i5);
        if (a != null) {
            if (a instanceof CancellationException) {
                promise3.reject(a);
            }
            CrashReporting crashReporting = CrashReporting.INSTANCE;
            Pair pair = new Pair("uri", str);
            mediaResolver = mediaManagerModule2.mediaResolver;
            CrashReporting.addBreadcrumb$default(crashReporting, "Failed to resolve URI to file", v0.g(pair, new Pair("mimeType", String.valueOf(mediaResolver.getMimeType(uri2)))), null, null, false, 28, null);
            CrashReporting.captureException$default(crashReporting, a, false, 2, null);
            promise3.reject(a);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaManagerModule$resolveToMediaFilePath$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
