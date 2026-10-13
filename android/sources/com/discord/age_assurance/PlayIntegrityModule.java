package com.discord.age_assurance;

import android.content.Context;
import com.discord.codegen.NativePlayIntegrityModuleSpec;
import com.discord.logging.Log;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.google.android.play.core.integrity.StandardIntegrityManager;
import di.l;
import di.n;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import jg.h;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import rd.u;
import xh.j;
import xh.r;
import xh.s;

@Metadata(d1 = {"\u0000`\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0018\u0002\n\u0002\b\f\u0018\u0000 )2\u00020\u0001:\u0001)B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J \u0010\u0018\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001eH\u0016J\u0018\u0010\u001f\u001a\u00020\u00142\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001eH\u0016J(\u0010 \u001a\u00020\u00142\u0006\u0010!\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u000b2\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\"\u001a\u00020\u0010H\u0002J<\u0010#\u001a\u00020\u00142\u0006\u0010\u001b\u001a\u00020\u000b2\u0012\u0010$\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00140\u00132\u0016\u0010%\u001a\u0012\u0012\b\u0012\u00060\u0016j\u0002`\u0017\u0012\u0004\u0012\u00020\u00140\u0013H\u0002J\b\u0010&\u001a\u00020\u0014H\u0002J\u0014\u0010'\u001a\u00020\u00142\n\u0010(\u001a\u00060\u0016j\u0002`\u0017H\u0002R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0012\u0010\n\u001a\u0004\u0018\u00010\u000bX\u0082\u000e¢\u0006\u0004\n\u0002\u0010\fR\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R \u0010\u0011\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00140\u00130\u0012X\u0082\u0004¢\u0006\u0002\n\u0000R$\u0010\u0015\u001a\u0018\u0012\u0014\u0012\u0012\u0012\b\u0012\u00060\u0016j\u0002`\u0017\u0012\u0004\u0012\u00020\u00140\u00130\u0012X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006*"}, d2 = {"Lcom/discord/age_assurance/PlayIntegrityModule;", "Lcom/discord/codegen/NativePlayIntegrityModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "integrityManager", "Lcom/google/android/play/core/integrity/StandardIntegrityManager;", "tokenProvider", "Lcom/google/android/play/core/integrity/StandardIntegrityManager$StandardIntegrityTokenProvider;", "preparedCloudProjectNumber", "", "Ljava/lang/Long;", "prepareLock", "", "preparing", "", "pendingReady", "Ljava/util/concurrent/CopyOnWriteArrayList;", "Lkotlin/Function1;", "", "pendingError", "Ljava/lang/Exception;", "Lkotlin/Exception;", "requestIntegrityToken", "requestHashPayload", "", "cloudProjectNumber", "", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "prepareIntegrityToken", "requestWithProvider", "requestHash", "allowProviderRefresh", "withTokenProvider", "onReady", "onError", "invalidateTokenProvider", "failPrepare", "e", "Companion", "age_assurance_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nPlayIntegrityModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 PlayIntegrityModule.kt\ncom/discord/age_assurance/PlayIntegrityModule\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,201:1\n1869#2,2:202\n1869#2,2:204\n*S KotlinDebug\n*F\n+ 1 PlayIntegrityModule.kt\ncom/discord/age_assurance/PlayIntegrityModule\n*L\n186#1:202,2\n165#1:204,2\n*E\n"})
/* loaded from: classes.dex */
public final class PlayIntegrityModule extends NativePlayIntegrityModuleSpec {

    @NotNull
    private static final Companion Companion = new Companion(null);

    @Deprecated
    @NotNull
    public static final String ERROR_CODE = "PLAY_INTEGRITY_ERROR";

    @Deprecated
    @NotNull
    public static final String TAG = "PlayIntegrityModule";

    @NotNull
    private final StandardIntegrityManager integrityManager;

    @NotNull
    private final CopyOnWriteArrayList<Function1<Exception, Unit>> pendingError;

    @NotNull
    private final CopyOnWriteArrayList<Function1<StandardIntegrityManager.StandardIntegrityTokenProvider, Unit>> pendingReady;

    @NotNull
    private final Object prepareLock;
    private volatile Long preparedCloudProjectNumber;
    private boolean preparing;
    private volatile StandardIntegrityManager.StandardIntegrityTokenProvider tokenProvider;

    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"Lcom/discord/age_assurance/PlayIntegrityModule$Companion;", "", "<init>", "()V", "TAG", "", "ERROR_CODE", "age_assurance_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public PlayIntegrityModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        u uVar;
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Context reactApplicationContext = getReactApplicationContext();
        synchronized (j.class) {
            try {
                if (j.a == null) {
                    Context applicationContext = reactApplicationContext.getApplicationContext();
                    j.a = new u(applicationContext != null ? applicationContext : reactApplicationContext);
                }
                uVar = j.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        StandardIntegrityManager standardIntegrityManager = (StandardIntegrityManager) ((n) uVar.f17275e).a();
        Intrinsics.checkNotNullExpressionValue(standardIntegrityManager, "createStandard(...)");
        this.integrityManager = standardIntegrityManager;
        this.prepareLock = new Object();
        this.pendingReady = new CopyOnWriteArrayList<>();
        this.pendingError = new CopyOnWriteArrayList<>();
    }

    private final void failPrepare(Exception e9) {
        List i02;
        synchronized (this.prepareLock) {
            this.preparing = false;
            i02 = CollectionsKt.i0(this.pendingError);
            this.pendingReady.clear();
            this.pendingError.clear();
            Unit unit = Unit.a;
        }
        Iterator it = i02.iterator();
        while (it.hasNext()) {
            ((Function1) it.next()).invoke(e9);
        }
    }

    private final void invalidateTokenProvider() {
        synchronized (this.prepareLock) {
            this.tokenProvider = null;
            this.preparedCloudProjectNumber = null;
            Unit unit = Unit.a;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit prepareIntegrityToken$lambda$0(Promise promise, StandardIntegrityManager.StandardIntegrityTokenProvider it) {
        Intrinsics.checkNotNullParameter(it, "it");
        promise.resolve(null);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit prepareIntegrityToken$lambda$1(Promise promise, Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        promise.reject(ERROR_CODE, e9.getMessage(), e9);
        return Unit.a;
    }

    private final void requestWithProvider(final String requestHash, final long cloudProjectNumber, final Promise promise, final boolean allowProviderRefresh) {
        withTokenProvider(cloudProjectNumber, new Function1() { // from class: com.discord.age_assurance.d
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit requestWithProvider$lambda$5;
                requestWithProvider$lambda$5 = PlayIntegrityModule.requestWithProvider$lambda$5(requestHash, promise, allowProviderRefresh, this, cloudProjectNumber, (StandardIntegrityManager.StandardIntegrityTokenProvider) obj);
                return requestWithProvider$lambda$5;
            }
        }, new c(promise, 1));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit requestWithProvider$lambda$5(final String str, final Promise promise, final boolean z5, final PlayIntegrityModule playIntegrityModule, final long j, StandardIntegrityManager.StandardIntegrityTokenProvider provider) {
        Intrinsics.checkNotNullParameter(provider, "provider");
        int i5 = di.j.f7589i;
        l lVar = l.f7594y;
        if (lVar == null) {
            throw new NullPointerException("Null verdictOptOut");
        }
        jg.l a = provider.a(new s(str, lVar));
        app.rive.runtime.kotlin.core.a aVar = new app.rive.runtime.kotlin.core.a(9, new c(promise, 4));
        a.getClass();
        a.d(h.a, aVar);
        a.o(new jg.c() { // from class: com.discord.age_assurance.e
            @Override // jg.c
            public final void onFailure(Exception exc) {
                PlayIntegrityModule.requestWithProvider$lambda$5$lambda$4(z5, playIntegrityModule, str, j, promise, exc);
            }
        });
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit requestWithProvider$lambda$5$lambda$2(Promise promise, StandardIntegrityManager.StandardIntegrityToken standardIntegrityToken) {
        promise.resolve(standardIntegrityToken.a());
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void requestWithProvider$lambda$5$lambda$4(boolean z5, PlayIntegrityModule playIntegrityModule, String str, long j, Promise promise, Exception e9) {
        boolean isTokenProviderInvalid;
        Intrinsics.checkNotNullParameter(e9, "e");
        if (z5) {
            isTokenProviderInvalid = PlayIntegrityModuleKt.isTokenProviderInvalid(e9);
            if (isTokenProviderInvalid) {
                Log.INSTANCE.w(TAG, "token provider invalid; re-preparing and retrying once", e9);
                playIntegrityModule.invalidateTokenProvider();
                playIntegrityModule.requestWithProvider(str, j, promise, false);
                return;
            }
        }
        Log.INSTANCE.e(TAG, "requestIntegrityToken failed", e9);
        promise.reject(ERROR_CODE, e9.getMessage(), e9);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit requestWithProvider$lambda$6(Promise promise, Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        Log.INSTANCE.e(TAG, "prepareIntegrityToken failed", e9);
        promise.reject(ERROR_CODE, e9.getMessage(), e9);
        return Unit.a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0040, code lost:
    
        if (r1.longValue() != r5) goto L32;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void withTokenProvider(final long cloudProjectNumber, Function1<? super StandardIntegrityManager.StandardIntegrityTokenProvider, Unit> onReady, Function1<? super Exception, Unit> onError) {
        Long l6;
        Long l7;
        StandardIntegrityManager.StandardIntegrityTokenProvider standardIntegrityTokenProvider = this.tokenProvider;
        if (standardIntegrityTokenProvider != null && (l7 = this.preparedCloudProjectNumber) != null && l7.longValue() == cloudProjectNumber) {
            onReady.invoke(standardIntegrityTokenProvider);
            return;
        }
        synchronized (this.prepareLock) {
            StandardIntegrityManager.StandardIntegrityTokenProvider standardIntegrityTokenProvider2 = this.tokenProvider;
            if (standardIntegrityTokenProvider2 != null && (l6 = this.preparedCloudProjectNumber) != null && l6.longValue() == cloudProjectNumber) {
                onReady.invoke(standardIntegrityTokenProvider2);
                return;
            }
            if (this.preparedCloudProjectNumber != null) {
                Long l10 = this.preparedCloudProjectNumber;
                if (l10 != null) {
                }
                this.tokenProvider = null;
                this.preparedCloudProjectNumber = null;
            }
            this.pendingReady.add(onReady);
            this.pendingError.add(onError);
            if (this.preparing) {
                return;
            }
            this.preparing = true;
            Unit unit = Unit.a;
            StandardIntegrityManager standardIntegrityManager = this.integrityManager;
            byte b10 = (byte) (1 | ((byte) 2));
            if (b10 == 3) {
                jg.l a = standardIntegrityManager.a(new r(cloudProjectNumber));
                a.d(h.a, new app.rive.runtime.kotlin.core.a(10, new Function1() { // from class: com.discord.age_assurance.f
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        Unit withTokenProvider$lambda$10;
                        withTokenProvider$lambda$10 = PlayIntegrityModule.withTokenProvider$lambda$10(PlayIntegrityModule.this, cloudProjectNumber, (StandardIntegrityManager.StandardIntegrityTokenProvider) obj);
                        return withTokenProvider$lambda$10;
                    }
                }));
                a.o(new app.rive.runtime.kotlin.core.a(11, this));
            } else {
                StringBuilder sb2 = new StringBuilder();
                if ((b10 & 1) == 0) {
                    sb2.append(" cloudProjectNumber");
                }
                if ((b10 & 2) == 0) {
                    sb2.append(" webViewRequestMode");
                }
                throw new IllegalStateException("Missing required properties:".concat(sb2.toString()));
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit withTokenProvider$lambda$10(PlayIntegrityModule playIntegrityModule, long j, StandardIntegrityManager.StandardIntegrityTokenProvider standardIntegrityTokenProvider) {
        List<Function1> i02;
        playIntegrityModule.tokenProvider = standardIntegrityTokenProvider;
        playIntegrityModule.preparedCloudProjectNumber = Long.valueOf(j);
        synchronized (playIntegrityModule.prepareLock) {
            playIntegrityModule.preparing = false;
            i02 = CollectionsKt.i0(playIntegrityModule.pendingReady);
            playIntegrityModule.pendingReady.clear();
            playIntegrityModule.pendingError.clear();
            Unit unit = Unit.a;
        }
        for (Function1 function1 : i02) {
            Intrinsics.checkNotNull(standardIntegrityTokenProvider);
            function1.invoke(standardIntegrityTokenProvider);
        }
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void withTokenProvider$lambda$12(PlayIntegrityModule playIntegrityModule, Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        playIntegrityModule.failPrepare(e9);
    }

    @Override // com.discord.codegen.NativePlayIntegrityModuleSpec
    public void prepareIntegrityToken(double cloudProjectNumber, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        withTokenProvider((long) cloudProjectNumber, new c(promise, 2), new c(promise, 3));
    }

    @Override // com.discord.codegen.NativePlayIntegrityModuleSpec
    public void requestIntegrityToken(@NotNull String requestHashPayload, double cloudProjectNumber, @NotNull Promise promise) {
        Promise promise2;
        String sha256Hex;
        Intrinsics.checkNotNullParameter(requestHashPayload, "requestHashPayload");
        Intrinsics.checkNotNullParameter(promise, "promise");
        try {
            sha256Hex = PlayIntegrityModuleKt.sha256Hex(requestHashPayload);
            promise2 = promise;
        } catch (Exception e9) {
            e = e9;
            promise2 = promise;
        }
        try {
            requestWithProvider(sha256Hex, (long) cloudProjectNumber, promise2, true);
        } catch (Exception e10) {
            e = e10;
            Exception exc = e;
            Log.INSTANCE.e(TAG, "Failed to request integrity token", exc);
            promise2.reject(ERROR_CODE, exc.getMessage(), exc);
        }
    }
}
