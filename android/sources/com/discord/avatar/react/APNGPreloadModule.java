package com.discord.avatar.react;

import com.discord.avatar.decoration.DecorationView;
import com.discord.codegen.NativeAPNGPreloadModuleSpec;
import com.discord.file_downloader.DownloadState;
import com.discord.image.animated_image.apng.APNGView;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.concurrent.CancellationException;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;
import kotlinx.coroutines.flow.FlowCollector;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\r\u001a\u00020\fH\u0016J\u0018\u0010\u000e\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\n2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\u0016\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\f0\u000b2\u0006\u0010\u000f\u001a\u00020\nH\u0002J\u0016\u0010\u0013\u001a\u00020\f2\u0006\u0010\u000f\u001a\u00020\nH\u0082@¢\u0006\u0002\u0010\u0014R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R \u0010\b\u001a\u0014\u0012\u0004\u0012\u00020\n\u0012\n\u0012\b\u0012\u0004\u0012\u00020\f0\u000b0\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lcom/discord/avatar/react/APNGPreloadModule;", "Lcom/discord/codegen/NativeAPNGPreloadModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "scope", "Lkotlinx/coroutines/CoroutineScope;", "inFlightDownloads", "Ljava/util/concurrent/ConcurrentHashMap;", "", "Lkotlinx/coroutines/Deferred;", "", "invalidate", "preload", "url", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "getOrStartDownload", "downloadAPNG", "(Ljava/lang/String;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", "avatar_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class APNGPreloadModule extends NativeAPNGPreloadModuleSpec {

    @NotNull
    private final ConcurrentHashMap<String, Deferred> inFlightDownloads;

    @NotNull
    private final CoroutineScope scope;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public APNGPreloadModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.scope = x.c();
        this.inFlightDownloads = new ConcurrentHashMap<>();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Object downloadAPNG(String str, Continuation continuation) {
        APNGView.Companion companion = APNGView.INSTANCE;
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
        Object collect = companion.downloadFile(reactApplicationContext, str, DecorationView.CACHE_DIRECTORY).collect(new FlowCollector() { // from class: com.discord.avatar.react.APNGPreloadModule$downloadAPNG$2
            @Override // kotlinx.coroutines.flow.FlowCollector
            public final Object emit(DownloadState downloadState, Continuation continuation2) {
                if ((downloadState instanceof DownloadState.Completed) || !(downloadState instanceof DownloadState.Failure)) {
                    return Unit.a;
                }
                throw new IllegalStateException("Failed to preload APNG");
            }
        }, continuation);
        return collect == ko.a.f13464d ? collect : Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final Deferred getOrStartDownload(String url) {
        Deferred computeIfAbsent = this.inFlightDownloads.computeIfAbsent(url, new a(0, new b7.a(1, this, url)));
        Intrinsics.checkNotNullExpressionValue(computeIfAbsent, "computeIfAbsent(...)");
        return computeIfAbsent;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Deferred getOrStartDownload$lambda$0(APNGPreloadModule aPNGPreloadModule, String str, String it) {
        Intrinsics.checkNotNullParameter(it, "it");
        CoroutineScope coroutineScope = aPNGPreloadModule.scope;
        e eVar = g0.a;
        return x.d(coroutineScope, d.f19093i, new APNGPreloadModule$getOrStartDownload$1$1(aPNGPreloadModule, str, null), 2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Deferred getOrStartDownload$lambda$1(Function1 function1, Object obj) {
        return (Deferred) function1.invoke(obj);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        x.f(this.scope, new CancellationException("Module destroyed"));
    }

    @Override // com.discord.codegen.NativeAPNGPreloadModuleSpec
    public void preload(@NotNull String url, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(promise, "promise");
        x.t(this.scope, null, new APNGPreloadModule$preload$1(this, url, promise, null), 3);
    }
}
