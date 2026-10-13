package io.sentry.android.core;

import android.os.CancellationSignal;
import android.view.MenuItem;
import androidx.appcompat.widget.t3;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import com.facebook.react.bridge.ReadableMap;
import io.sentry.Hint;
import io.sentry.IScope;
import io.sentry.SentryEvent;
import io.sentry.b4;
import io.sentry.i5;
import io.sentry.m3;
import io.sentry.o3;
import io.sentry.r3;
import io.sentry.react.RNSentryModuleImpl;
import io.sentry.v5;
import java.util.Map;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.text.MatchGroup;
import kotlin.text.Regex;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final /* synthetic */ class w implements r3, o3, i5, b4, m3, jg.c, t3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11344d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f11345e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f11346i;

    public /* synthetic */ w(int i5, Object obj, Object obj2) {
        this.f11344d = i5;
        this.f11345e = obj;
        this.f11346i = obj2;
    }

    @Override // io.sentry.i5
    public SentryEvent a(SentryEvent sentryEvent, Hint hint) {
        SentryEvent lambda$getSentryAndroidOptions$3;
        lambda$getSentryAndroidOptions$3 = ((RNSentryModuleImpl) this.f11345e).lambda$getSentryAndroidOptions$3((SentryAndroidOptions) this.f11346i, sentryEvent, hint);
        return lambda$getSentryAndroidOptions$3;
    }

    @Override // io.sentry.o3
    public void b(io.sentry.f1 f1Var) {
        io.sentry.android.core.internal.gestures.f fVar = (io.sentry.android.core.internal.gestures.f) this.f11345e;
        IScope iScope = (IScope) this.f11346i;
        if (f1Var == fVar.f11176w) {
            iScope.r();
        }
    }

    @Override // io.sentry.b4
    public void c(v5 v5Var) {
        ((RNSentryModuleImpl) this.f11345e).lambda$initNativeSdk$1((ReadableMap) this.f11346i, (SentryAndroidOptions) v5Var);
    }

    @Override // io.sentry.m3
    public void d(e4.m mVar) {
        IScope iScope = (IScope) this.f11345e;
        v5 v5Var = (v5) this.f11346i;
        io.sentry.c cVar = (io.sentry.c) mVar.f7965v;
        if (cVar.f11415e) {
            e4.m z5 = iScope.z();
            io.sentry.protocol.v y5 = iScope.y();
            cVar.b("sentry-trace_id", ((io.sentry.protocol.v) z5.f7963e).toString());
            cVar.b("sentry-public_key", v5Var.retrieveParsedDsn().f12088b);
            cVar.b("sentry-release", v5Var.getRelease());
            cVar.b("sentry-environment", v5Var.getEnvironment());
            if (!io.sentry.protocol.v.f11895e.equals(y5)) {
                cVar.b("sentry-replay_id", y5.toString());
            }
            cVar.b("sentry-transaction", null);
            if (cVar.f11415e) {
                cVar.f11413c = null;
            }
            cVar.b("sentry-sampled", null);
            cVar.f11415e = false;
        }
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        switch (this.f11344d) {
            case 1:
                iScope.M(new bc.a((io.sentry.android.core.internal.gestures.f) this.f11345e, iScope, (io.sentry.f1) this.f11346i, 10));
                break;
            case 2:
            default:
                RNSentryModuleImpl.lambda$setContext$9((ReadableMap) this.f11345e, (String) this.f11346i, iScope);
                break;
            case 3:
                RNSentryModuleImpl.lambda$setUser$5((ReadableMap) this.f11345e, (ReadableMap) this.f11346i, iScope);
                break;
        }
    }

    /* JADX WARN: Type inference failed for: r1v10, types: [T, q1.c] */
    /* JADX WARN: Type inference failed for: r3v5, types: [T, q1.c] */
    @Override // jg.c
    public void onFailure(Exception e9) {
        o1.l jVar;
        String message;
        kotlin.text.m b10;
        MatchGroup b11;
        String str;
        int i5 = this.f11344d;
        int i6 = 0;
        Object obj = this.f11346i;
        Object obj2 = this.f11345e;
        switch (i5) {
            case 8:
                u1.d dVar = (u1.d) obj2;
                CancellationSignal cancellationSignal = (CancellationSignal) obj;
                Intrinsics.checkNotNullParameter(e9, "e");
                String str2 = ((e9 instanceof ze.e) && t1.d.f18155b.contains(Integer.valueOf(((ze.e) e9).f21197d.f5657d))) ? "GET_INTERRUPTED" : "GET_NO_CREDENTIALS";
                String str3 = "During begin sign in, failure response from one tap: " + e9.getMessage();
                int hashCode = str2.hashCode();
                if (hashCode == -1567968963) {
                    if (str2.equals("GET_CANCELED_TAG")) {
                        jVar = new o1.j(str3);
                    }
                    jVar = new o1.o(str3);
                } else if (hashCode != -154594663) {
                    if (hashCode == 1996705159 && str2.equals("GET_NO_CREDENTIALS")) {
                        jVar = new o1.q(str3);
                    }
                    jVar = new o1.o(str3);
                } else {
                    if (str2.equals("GET_INTERRUPTED")) {
                        jVar = new o1.m(str3);
                    }
                    jVar = new o1.o(str3);
                }
                u1.a onResultOrException = new u1.a(dVar, jVar, i6);
                Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (!s1.f.a(cancellationSignal)) {
                    onResultOrException.invoke();
                    break;
                }
                break;
            case 9:
                v1.h hVar = (v1.h) obj2;
                CancellationSignal cancellationSignal2 = (CancellationSignal) obj;
                Intrinsics.checkNotNullParameter(e9, "e");
                String str4 = ((e9 instanceof ze.e) && t1.d.f18155b.contains(Integer.valueOf(((ze.e) e9).f21197d.f5657d))) ? "CREATE_INTERRUPTED" : "CREATE_UNKNOWN";
                String str5 = "During create public key credential, fido registration failure: " + e9.getMessage();
                v1.d onResultOrException2 = new v1.d(hVar, Intrinsics.areEqual(str4, "CREATE_CANCELED") ? new o1.b(str5) : Intrinsics.areEqual(str4, "CREATE_INTERRUPTED") ? new o1.e(str5) : new o1.h(str5), i6);
                Intrinsics.checkNotNullParameter(onResultOrException2, "onResultOrException");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (!s1.f.a(cancellationSignal2)) {
                    onResultOrException2.invoke();
                    break;
                }
                break;
            default:
                Executor executor = (Executor) obj2;
                n1.h hVar2 = (n1.h) obj;
                Intrinsics.checkNotNullParameter(e9, "e");
                Ref.ObjectRef objectRef = new Ref.ObjectRef();
                int i10 = q1.c.f16651d;
                objectRef.element = new q1.c("androidx.credentials.SignalCredentialStateException.TYPE_UNKNOWN", e9.getMessage());
                if ((e9 instanceof ze.e) && ((ze.e) e9).f21197d.f5657d == 16 && (message = e9.getMessage()) != null && StringsKt.D(message, "called too frequently", false)) {
                    String message2 = e9.getMessage();
                    if (message2 != null && (b10 = new Regex("^SignalCredentialState has been called too frequently\\. Please retry later after (\\d+) minutes\\.$").b(message2)) != null && (b11 = b10.f13584c.b(1)) != null && (str = b11.a) != null) {
                        StringsKt.toIntOrNull(str);
                    }
                    objectRef.element = new q1.c("androidx.credentials.SignalCredentialStateException.RATE_LIMIT_EXCEEDED", e9.getMessage());
                }
                executor.execute(new s1.e(hVar2, objectRef, 1));
                break;
        }
    }

    @Override // androidx.appcompat.widget.t3
    public boolean onMenuItemClick(MenuItem menuItem) {
        Map map = (Map) this.f11345e;
        com.discord.chat.presentation.message.i iVar = (com.discord.chat.presentation.message.i) this.f11346i;
        String str = (String) map.get(Integer.valueOf(menuItem.getItemId()));
        if (str == null) {
            return true;
        }
        Intrinsics.checkNotNull(menuItem);
        iVar.invoke(str, menuItem);
        return true;
    }
}
