package androidx.credentials.playservices;

import af.k;
import android.content.Context;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.ResultReceiver;
import android.util.Log;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import com.google.android.gms.identitycredentials.GetCredentialRequest;
import io.sentry.x3;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.Executor;
import jc.b0;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import n1.h;
import n1.i;
import n1.j;
import n1.p;
import n1.t;
import n1.w;
import o1.a;
import o1.g;
import o1.n;
import org.jetbrains.annotations.NotNull;
import s1.b;
import s1.c;
import s1.f;
import sf.r;
import ye.d;
import ye.e;
import ze.l;

@Metadata(d1 = {"\u0000\u0080\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u000b\b\u0007\u0018\u0000 52\u00020\u0001:\u00016B\u000f\u0012\u0006\u0010\u0003\u001a\u00020\u0002¢\u0006\u0004\b\u0004\u0010\u0005JE\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0007\u001a\u00020\u00062\b\u0010\t\u001a\u0004\u0018\u00010\b2\u0006\u0010\u000b\u001a\u00020\n2\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\u000e0\fH\u0017¢\u0006\u0004\b\u0011\u0010\u0012JE\u0010\u0016\u001a\u00020\u00102\u0006\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0007\u001a\u00020\u00132\b\u0010\t\u001a\u0004\u0018\u00010\b2\u0006\u0010\u000b\u001a\u00020\n2\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020\u0014\u0012\u0004\u0012\u00020\u00150\fH\u0017¢\u0006\u0004\b\u0016\u0010\u0017J\u000f\u0010\u0019\u001a\u00020\u0018H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ\u0015\u0010\u0019\u001a\u00020\u00182\u0006\u0010\u001c\u001a\u00020\u001b¢\u0006\u0004\b\u0019\u0010\u001dJ?\u0010!\u001a\u00020\u00102\u0006\u0010\u0007\u001a\u00020\u001e2\b\u0010\t\u001a\u0004\u0018\u00010\b2\u0006\u0010\u000b\u001a\u00020\n2\u0014\u0010\u000f\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u001f\u0012\u0004\u0012\u00020 0\fH\u0016¢\u0006\u0004\b!\u0010\"J3\u0010&\u001a\u00020\u00102\u0006\u0010\u0007\u001a\u00020#2\u0006\u0010\u000b\u001a\u00020\n2\u0012\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00020$\u0012\u0004\u0012\u00020%0\fH\u0016¢\u0006\u0004\b&\u0010'J\u001f\u0010(\u001a\u00020\u001b2\u0006\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u001c\u001a\u00020\u001bH\u0002¢\u0006\u0004\b(\u0010)J?\u0010*\u001a\u00020\u00102\u0006\u0010\u0007\u001a\u00020\u001e2\b\u0010\t\u001a\u0004\u0018\u00010\b2\u0006\u0010\u000b\u001a\u00020\n2\u0014\u0010\u000f\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u001f\u0012\u0004\u0012\u00020 0\fH\u0002¢\u0006\u0004\b*\u0010\"R\u0014\u0010\u0003\u001a\u00020\u00028\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0003\u0010+R(\u0010-\u001a\u00020,8\u0006@\u0006X\u0087\u000e¢\u0006\u0018\n\u0004\b-\u0010.\u0012\u0004\b3\u00104\u001a\u0004\b/\u00100\"\u0004\b1\u00102¨\u00067"}, d2 = {"Landroidx/credentials/playservices/CredentialProviderPlayServicesImpl;", "Ln1/j;", "Landroid/content/Context;", "context", "<init>", "(Landroid/content/Context;)V", "Ln1/p;", "request", "Landroid/os/CancellationSignal;", "cancellationSignal", "Ljava/util/concurrent/Executor;", "executor", "Ln1/h;", "Ln1/q;", "Lo1/l;", "callback", "", "onGetCredential", "(Landroid/content/Context;Ln1/p;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ln1/h;)V", "Ln1/b;", "Ln1/c;", "Lo1/d;", "onCreateCredential", "(Landroid/content/Context;Ln1/b;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ln1/h;)V", "", "isAvailableOnDevice", "()Z", "", "minApkVersion", "(I)Z", "Ln1/a;", "Ljava/lang/Void;", "Lcom/margelo/nitro/rive/k;", "onClearCredential", "(Ln1/a;Landroid/os/CancellationSignal;Ljava/util/concurrent/Executor;Ln1/h;)V", "Ln1/w;", "Ln1/x;", "Lq1/c;", "onSignalCredentialState", "(Ln1/w;Ljava/util/concurrent/Executor;Ln1/h;)V", "isGooglePlayServicesAvailable", "(Landroid/content/Context;I)I", "runFallbackClearCredFlow", "Landroid/content/Context;", "Lye/e;", "googleApiAvailability", "Lye/e;", "getGoogleApiAvailability", "()Lye/e;", "setGoogleApiAvailability", "(Lye/e;)V", "getGoogleApiAvailability$annotations", "()V", "Companion", "s1/f", "credentials-play-services-auth"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class CredentialProviderPlayServicesImpl implements j {

    @NotNull
    public static final f Companion = new f();
    public static final int MIN_GMS_APK_VERSION = 230815045;
    public static final int MIN_GMS_APK_VERSION_DIGITAL_CRED = 243100000;
    public static final int MIN_GMS_APK_VERSION_RESTORE_CRED = 242200000;
    public static final int MIN_GMS_APK_VERSION_SIGNAL_API = 254625000;
    public static final int PRE_U_MIN_GMS_APK_VERSION = 252400000;

    @NotNull
    private static final String TAG = "PlayServicesImpl";

    @NotNull
    private final Context context;

    @NotNull
    private e googleApiAvailability;

    public CredentialProviderPlayServicesImpl(@NotNull Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.context = context;
        e eVar = e.f20918d;
        Intrinsics.checkNotNullExpressionValue(eVar, "getInstance(...)");
        this.googleApiAvailability = eVar;
    }

    public static /* synthetic */ void getGoogleApiAvailability$annotations() {
    }

    private final int isGooglePlayServicesAvailable(Context context, int minApkVersion) {
        return this.googleApiAvailability.b(context, minApkVersion);
    }

    private static final Unit onClearCredential$lambda$0(Executor executor, h hVar) {
        executor.execute(new c(hVar, 2));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onClearCredential$lambda$0$0(h hVar) {
        hVar.e(new a("clearCredentialStateAsync no provider dependencies found - please ensure the desired provider dependencies are added", "androidx.credentials.TYPE_CLEAR_CREDENTIAL_PROVIDER_CONFIGURATION_EXCEPTION"));
    }

    private static final Unit onClearCredential$lambda$1(CancellationSignal cancellationSignal, Executor executor, h hVar, Boolean bool) {
        f fVar = Companion;
        b bVar = new b(executor, hVar, 3);
        fVar.getClass();
        f.b(cancellationSignal, bVar);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onClearCredential$lambda$1$0(Executor executor, h hVar) {
        Log.i(TAG, "Cleared restore credential successfully!");
        executor.execute(new c(hVar, 4));
        return Unit.a;
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [T, o1.a] */
    /* JADX WARN: Type inference failed for: r6v5, types: [T, o1.a] */
    private static final void onClearCredential$lambda$3(CancellationSignal cancellationSignal, Executor executor, h hVar, Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        Log.w(TAG, "Clearing restore credential failed", e9);
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = new a("Clear restore credential failed for unknown reason.");
        if ((e9 instanceof ze.e) && ((ze.e) e9).f21197d.f5657d == 40201) {
            objectRef.element = new a("The restore credential internal service had a failure.");
        }
        f fVar = Companion;
        com.discord.chat.presentation.list.delegate.c cVar = new com.discord.chat.presentation.list.delegate.c(executor, hVar, objectRef, 4);
        fVar.getClass();
        f.b(cancellationSignal, cVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onClearCredential$lambda$3$0(Executor executor, h hVar, Ref.ObjectRef objectRef) {
        executor.execute(new s1.e(hVar, objectRef, 0));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onClearCredential$lambda$3$0$0(h hVar, Ref.ObjectRef objectRef) {
        hVar.e(objectRef.element);
    }

    private static final Unit onClearCredential$lambda$4(CancellationSignal cancellationSignal, Executor executor, h hVar, sf.b bVar) {
        f fVar = Companion;
        b bVar2 = new b(executor, hVar, 1);
        fVar.getClass();
        f.b(cancellationSignal, bVar2);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onClearCredential$lambda$4$0(Executor executor, h hVar) {
        Log.i(TAG, "During clear credential, signed out successfully!");
        executor.execute(new c(hVar, 0));
        return Unit.a;
    }

    private static final void onClearCredential$lambda$6(CredentialProviderPlayServicesImpl credentialProviderPlayServicesImpl, n1.a aVar, CancellationSignal cancellationSignal, Executor executor, h hVar, Exception it) {
        Intrinsics.checkNotNullParameter(it, "it");
        Log.e(TAG, "GMS Clear credential flow failed, calling fallback");
        credentialProviderPlayServicesImpl.runFallbackClearCredFlow(aVar, cancellationSignal, executor, hVar);
    }

    private static final Unit onCreateCredential$lambda$0(Executor executor, h hVar) {
        executor.execute(new c(hVar, 3));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onCreateCredential$lambda$0$0(h hVar) {
        hVar.e(new g("createCredentialAsync no provider dependencies found - please ensure the desired provider dependencies are added"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit onGetCredential$lambda$0(Executor executor, h hVar) {
        executor.execute(new c(hVar, 7));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onGetCredential$lambda$0$0(h hVar) {
        hVar.e(new n("this device requires a Google Play Services update for the given feature to be supported"));
    }

    private static final Unit onGetCredential$lambda$1(Executor executor, h hVar) {
        executor.execute(new c(hVar, 6));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onGetCredential$lambda$1$0(h hVar) {
        hVar.e(new n("getCredentialAsync no provider dependencies found - please ensure the desired provider dependencies are added"));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void onSignalCredentialState$lambda$0(h hVar) {
        hVar.e(new q1.c("this device requires a Google Play Services update for the given feature to be supported"));
    }

    private final void runFallbackClearCredFlow(n1.a request, final CancellationSignal cancellationSignal, final Executor executor, final h callback) {
        vf.b q5 = com.facebook.imagepipeline.nativecode.b.q(this.context);
        q5.a.getSharedPreferences("com.google.android.gms.signin", 0).edit().clear().apply();
        Set set = l.a;
        synchronized (set) {
        }
        Iterator it = set.iterator();
        if (it.hasNext()) {
            ((l) it.next()).getClass();
            throw new UnsupportedOperationException();
        }
        af.e.a();
        k f2 = k.f();
        f2.f564b = new d[]{vf.d.a};
        f2.f567e = new qd.f(9, q5);
        f2.f565c = false;
        f2.f566d = 1554;
        jg.l b10 = q5.b(1, f2.e());
        ni.a aVar = new ni.a(2, new Function1() { // from class: s1.d
            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit runFallbackClearCredFlow$lambda$0;
                runFallbackClearCredFlow$lambda$0 = CredentialProviderPlayServicesImpl.runFallbackClearCredFlow$lambda$0(cancellationSignal, executor, callback, (Void) obj);
                return runFallbackClearCredFlow$lambda$0;
            }
        });
        b10.getClass();
        b10.d(jg.h.a, aVar);
        b10.o(new x3(this, cancellationSignal, executor, callback));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit runFallbackClearCredFlow$lambda$0(CancellationSignal cancellationSignal, Executor executor, h hVar, Void r5) {
        f fVar = Companion;
        b bVar = new b(executor, hVar, 2);
        fVar.getClass();
        f.b(cancellationSignal, bVar);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit runFallbackClearCredFlow$lambda$0$0(Executor executor, h hVar) {
        Log.i(TAG, "During clear credential, signed out successfully!");
        executor.execute(new c(hVar, 5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void runFallbackClearCredFlow$lambda$2(CredentialProviderPlayServicesImpl credentialProviderPlayServicesImpl, CancellationSignal cancellationSignal, Executor executor, h hVar, Exception e9) {
        Intrinsics.checkNotNullParameter(e9, "e");
        f fVar = Companion;
        com.discord.chat.presentation.list.delegate.c cVar = new com.discord.chat.presentation.list.delegate.c(e9, executor, hVar, 5);
        fVar.getClass();
        f.b(cancellationSignal, cVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit runFallbackClearCredFlow$lambda$2$0$0(Exception exc, Executor executor, h hVar) {
        Log.w(TAG, "During clear credential sign out failed with " + exc);
        executor.execute(new b0(16, hVar, exc));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void runFallbackClearCredFlow$lambda$2$0$0$0(h hVar, Exception exc) {
        hVar.e(new a(exc.getMessage()));
    }

    @NotNull
    public final e getGoogleApiAvailability() {
        return this.googleApiAvailability;
    }

    @Override // n1.j
    public boolean isAvailableOnDevice() {
        return isAvailableOnDevice(MIN_GMS_APK_VERSION);
    }

    public void onClearCredential(@NotNull n1.a request, CancellationSignal cancellationSignal, @NotNull Executor executor, @NotNull h callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Companion.getClass();
        if (!f.a(cancellationSignal)) {
            throw null;
        }
    }

    @Override // n1.j
    public void onCreateCredential(@NotNull Context context, @NotNull n1.b request, CancellationSignal cancellationSignal, @NotNull Executor executor, @NotNull h callback) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        f fVar = Companion;
        fVar.getClass();
        if (f.a(cancellationSignal)) {
            return;
        }
        if (!(request instanceof n1.e)) {
            throw new UnsupportedOperationException("Create Credential request is unsupported, not password or publickeycredential");
        }
        if (!isAvailableOnDevice(PRE_U_MIN_GMS_APK_VERSION)) {
            int i5 = v1.h.j;
            Intrinsics.checkNotNullParameter(context, "context");
            new v1.h(context).g((n1.e) request, callback, executor, cancellationSignal);
            return;
        }
        int i6 = w1.e.j;
        Intrinsics.checkNotNullParameter(context, "context");
        w1.e eVar = new w1.e(context);
        n1.e request2 = (n1.e) request;
        Intrinsics.checkNotNullParameter(request2, "request");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(executor, "executor");
        eVar.f19618h = cancellationSignal;
        eVar.f19616f = callback;
        eVar.f19617g = executor;
        fVar.getClass();
        if (f.a(cancellationSignal)) {
            return;
        }
        Intrinsics.checkNotNullParameter(request2, "request");
        sf.g request3 = new sf.g("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", request2.a, request2.f14712b, null, request2.f14714d, null);
        Context context2 = eVar.f19615e;
        Intrinsics.checkNotNullParameter(context2, "context");
        Intrinsics.checkNotNullParameter(context2, "context");
        tf.g gVar = new tf.g(context2, null, tf.g.k, ze.b.D, ze.h.f21206c);
        Intrinsics.checkNotNullParameter(request3, "request");
        k f2 = k.f();
        f2.f564b = new d[]{cg.b.f3493b};
        f2.f567e = new r3.g(3, request3);
        f2.f566d = 32704;
        jg.l b10 = gVar.b(1, f2.e());
        Intrinsics.checkNotNullExpressionValue(b10, "doWrite(...)");
        ni.a aVar = new ni.a(10, new com.discord.media.engine.video.a(2, cancellationSignal, eVar, executor, callback));
        b10.getClass();
        b10.d(jg.h.a, aVar);
        b10.o(new w1.c(request2, eVar, callback, executor, cancellationSignal, 0));
    }

    public void onGetCredential(@NotNull Context context, @NotNull t pendingGetCredentialHandle, CancellationSignal cancellationSignal, @NotNull Executor executor, @NotNull h callback) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(pendingGetCredentialHandle, "pendingGetCredentialHandle");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
    }

    public void onPrepareCredential(@NotNull p request, CancellationSignal cancellationSignal, @NotNull Executor executor, @NotNull h callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
    }

    @Override // n1.j
    public void onSignalCredentialState(@NotNull w request, @NotNull Executor executor, @NotNull h callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        int i5 = 1;
        if (!isAvailableOnDevice(MIN_GMS_APK_VERSION_SIGNAL_API)) {
            executor.execute(new c(callback, i5));
            return;
        }
        int i6 = z1.a.f21124f;
        Context context = this.context;
        Intrinsics.checkNotNullParameter(context, "context");
        z1.a aVar = new z1.a(context);
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(request, "request");
        r request2 = new r(request.a, null, request.f14728b);
        Context context2 = aVar.f21125e;
        Intrinsics.checkNotNullParameter(context2, "context");
        Intrinsics.checkNotNullParameter(context2, "context");
        tf.g gVar = new tf.g(context2, null, tf.g.k, ze.b.D, ze.h.f21206c);
        Intrinsics.checkNotNullParameter(request2, "request");
        k f2 = k.f();
        f2.f564b = new d[]{cg.b.f3494c};
        f2.f567e = new qd.f(5, request2);
        f2.f566d = 32709;
        jg.l b10 = gVar.b(1, f2.e());
        Intrinsics.checkNotNullExpressionValue(b10, "doWrite(...)");
        ni.a aVar2 = new ni.a(15, new t1.e(executor, aVar, callback));
        b10.getClass();
        b10.d(jg.h.a, aVar2);
        b10.o(new io.sentry.android.core.w(11, executor, callback));
    }

    public final void setGoogleApiAvailability(@NotNull e eVar) {
        Intrinsics.checkNotNullParameter(eVar, "<set-?>");
        this.googleApiAvailability = eVar;
    }

    public final boolean isAvailableOnDevice(int minApkVersion) {
        int isGooglePlayServicesAvailable = isGooglePlayServicesAvailable(this.context, minApkVersion);
        boolean z5 = isGooglePlayServicesAvailable == 0;
        if (!z5) {
            Log.w(TAG, "Connection with Google Play Services was not successful. Connection result is: " + new ye.b(isGooglePlayServicesAvailable, null, null));
        }
        return z5;
    }

    @Override // n1.j
    public void onGetCredential(@NotNull Context context, @NotNull p request, CancellationSignal cancellationSignal, @NotNull Executor executor, @NotNull h callback) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Companion.getClass();
        if (f.a(cancellationSignal)) {
            return;
        }
        Intrinsics.checkNotNullParameter(request, "request");
        List list = request.a;
        List<i> list2 = request.a;
        Iterator it = list.iterator();
        while (true) {
            boolean hasNext = it.hasNext();
            ze.a aVar = ze.b.D;
            Iterator it2 = it;
            if (!hasNext) {
                Companion.getClass();
                Intrinsics.checkNotNullParameter(request, "request");
                for (i iVar : list2) {
                }
                if (!isAvailableOnDevice(PRE_U_MIN_GMS_APK_VERSION)) {
                    Companion.getClass();
                    Intrinsics.checkNotNullParameter(request, "request");
                    for (i iVar2 : list2) {
                    }
                    new u1.d(context).h(request, cancellationSignal, executor, callback);
                    return;
                }
                x1.a aVar2 = new x1.a(context);
                Intrinsics.checkNotNullParameter(request, "request");
                Intrinsics.checkNotNullParameter(callback, "callback");
                Intrinsics.checkNotNullParameter(executor, "executor");
                aVar2.f20247h = cancellationSignal;
                Intrinsics.checkNotNullParameter(callback, "<set-?>");
                aVar2.f20245f = callback;
                Intrinsics.checkNotNullParameter(executor, "<set-?>");
                aVar2.f20246g = executor;
                Companion.getClass();
                if (f.a(cancellationSignal)) {
                    return;
                }
                Intrinsics.checkNotNullParameter(request, "request");
                Intrinsics.checkNotNullParameter(request, "request");
                Bundle bundle = new Bundle();
                bundle.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IDENTITY_DOC_UI", false);
                bundle.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IMMEDIATELY_AVAILABLE_CREDENTIALS", false);
                bundle.putParcelable("androidx.credentials.BUNDLE_KEY_PREFER_UI_BRANDING_COMPONENT_NAME", null);
                ArrayList arrayList = new ArrayList(d0.l(list2, 10));
                for (i iVar3 : list2) {
                    arrayList.add(new sf.i(iVar3.a, iVar3.f14718b, iVar3.f14719c, "", "", ""));
                }
                GetCredentialRequest getCredentialRequest = new GetCredentialRequest(arrayList, bundle, null, new ResultReceiver(null));
                Context context2 = aVar2.f20244e;
                Intrinsics.checkNotNullParameter(context2, "context");
                Intrinsics.checkNotNullParameter(context2, "context");
                jg.l c6 = new tf.g(context2, null, tf.g.k, aVar, ze.h.f21206c).c(getCredentialRequest);
                ni.a aVar3 = new ni.a(11, new com.discord.media.engine.video.a(3, cancellationSignal, aVar2, executor, callback));
                c6.getClass();
                c6.d(jg.h.a, aVar3);
                c6.o(new w1.c(request, aVar2, callback, executor, cancellationSignal, 1));
                return;
            }
            if (((i) it2.next()) instanceof n1.r) {
                if (!isAvailableOnDevice(MIN_GMS_APK_VERSION_DIGITAL_CRED)) {
                    f fVar = Companion;
                    b bVar = new b(executor, callback, 0);
                    fVar.getClass();
                    f.b(cancellationSignal, bVar);
                    return;
                }
                y1.a aVar4 = new y1.a(context);
                Intrinsics.checkNotNullParameter(request, "request");
                Intrinsics.checkNotNullParameter(callback, "callback");
                Intrinsics.checkNotNullParameter(executor, "executor");
                aVar4.f20599h = cancellationSignal;
                Intrinsics.checkNotNullParameter(callback, "<set-?>");
                aVar4.f20597f = callback;
                Intrinsics.checkNotNullParameter(executor, "<set-?>");
                aVar4.f20598g = executor;
                Companion.getClass();
                if (f.a(cancellationSignal)) {
                    return;
                }
                Intrinsics.checkNotNullParameter(request, "request");
                ArrayList arrayList2 = new ArrayList();
                Iterator it3 = list2.iterator();
                while (it3.hasNext()) {
                    i iVar4 = (i) it3.next();
                    if (iVar4 instanceof n1.r) {
                        arrayList2.add(new sf.i(iVar4.a, iVar4.f14718b, iVar4.f14719c, ((n1.r) iVar4).f14724e, "", ""));
                        it3 = it3;
                    }
                }
                Intrinsics.checkNotNullParameter(request, "request");
                Bundle bundle2 = new Bundle();
                bundle2.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IDENTITY_DOC_UI", false);
                bundle2.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IMMEDIATELY_AVAILABLE_CREDENTIALS", false);
                bundle2.putParcelable("androidx.credentials.BUNDLE_KEY_PREFER_UI_BRANDING_COMPONENT_NAME", null);
                GetCredentialRequest getCredentialRequest2 = new GetCredentialRequest(arrayList2, bundle2, null, new ResultReceiver(null));
                Context context3 = aVar4.f20596e;
                Intrinsics.checkNotNullParameter(context3, "context");
                Intrinsics.checkNotNullParameter(context3, "context");
                jg.l c8 = new tf.g(context3, null, tf.g.k, aVar, ze.h.f21206c).c(getCredentialRequest2);
                ni.a aVar5 = new ni.a(13, new com.discord.permissions.b(16, cancellationSignal, aVar4));
                c8.getClass();
                c8.d(jg.h.a, aVar5);
                c8.o(new bc.a(aVar4, cancellationSignal, executor, callback));
                return;
            }
            it = it2;
        }
    }
}
