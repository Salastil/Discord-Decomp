package u1;

import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.Handler;
import android.os.ResultReceiver;
import android.util.Log;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import com.facebook.react.runtime.r;
import ds.o;
import java.util.LinkedHashMap;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.text.StringsKt;
import n1.h;
import o1.j;
import o1.l;
import o1.m;
import org.json.JSONException;
import rf.k;
import rf.q;
import rf.u;
import s1.f;
import se.g;
import sr.x;
import v1.i;
import ze.e;

/* loaded from: classes.dex */
public final class c extends ResultReceiver {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18783d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ t1.d f18784e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c(t1.d dVar, Handler handler, int i5) {
        super(handler);
        this.f18783d = i5;
        this.f18784e = dVar;
    }

    /* JADX WARN: Type inference failed for: r4v10, types: [T, o1.m] */
    /* JADX WARN: Type inference failed for: r4v12, types: [T, o1.j] */
    /* JADX WARN: Type inference failed for: r4v5, types: [T, o1.o] */
    @Override // android.os.ResultReceiver
    public final void onReceiveResult(int i5, Bundle resultData) {
        o1.d dVar;
        Executor executor;
        n1.c cVar;
        Bundle bundle;
        o1.d M;
        Executor executor2;
        h hVar;
        Executor executor3;
        h hVar2;
        int i6 = this.f18783d;
        int i10 = 4;
        int i11 = 5;
        int i12 = 6;
        t1.d dVar2 = this.f18784e;
        switch (i6) {
            case 0:
                Intrinsics.checkNotNullParameter(resultData, "resultData");
                t1.a aVar = t1.d.a;
                d dVar3 = (d) dVar2;
                if (t1.d.b(resultData, new o(2), dVar3.g(), dVar3.f(), dVar3.f18788h)) {
                    return;
                }
                int i13 = resultData.getInt("ACTIVITY_REQUEST_CODE");
                Intent intent = (Intent) resultData.getParcelable("RESULT_DATA");
                int i14 = t1.d.f18156c;
                if (i13 != i14) {
                    Log.w("BeginSignIn", "Returned request code " + i14 + " which  does not match what was given " + i13);
                    return;
                }
                if (t1.c.b(i5, new x(3), new r(12, dVar3), dVar3.f18788h)) {
                    return;
                }
                try {
                    g c6 = com.facebook.imagepipeline.nativecode.b.q(dVar3.f18785e).c(intent);
                    Intrinsics.checkNotNullExpressionValue(c6, "getSignInCredentialFromIntent(...)");
                    t1.c.a(dVar3.f18788h, new k6.b(i12, dVar3, dVar3.e(c6)));
                    return;
                } catch (l e9) {
                    CancellationSignal cancellationSignal = dVar3.f18788h;
                    a onResultOrException = new a(dVar3, e9, 1);
                    Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal)) {
                        return;
                    }
                    onResultOrException.invoke();
                    return;
                } catch (e e10) {
                    Ref.ObjectRef objectRef = new Ref.ObjectRef();
                    objectRef.element = new o1.o(e10.getMessage());
                    int i15 = e10.f21197d.f5657d;
                    if (i15 == 16) {
                        objectRef.element = new j(e10.getMessage());
                    } else if (t1.d.f18155b.contains(Integer.valueOf(i15))) {
                        objectRef.element = new m(e10.getMessage());
                    }
                    CancellationSignal cancellationSignal2 = dVar3.f18788h;
                    k6.b onResultOrException2 = new k6.b(7, dVar3, objectRef);
                    Intrinsics.checkNotNullParameter(onResultOrException2, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal2)) {
                        return;
                    }
                    onResultOrException2.invoke();
                    return;
                } catch (Throwable th2) {
                    o1.o oVar = new o1.o(th2.getMessage());
                    CancellationSignal cancellationSignal3 = dVar3.f18788h;
                    k6.b onResultOrException3 = new k6.b(8, dVar3, oVar);
                    Intrinsics.checkNotNullParameter(onResultOrException3, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal3)) {
                        return;
                    }
                    onResultOrException3.invoke();
                    return;
                }
            case 1:
                Intrinsics.checkNotNullParameter(resultData, "resultData");
                t1.a aVar2 = t1.d.a;
                o oVar2 = new o(3);
                v1.h hVar3 = (v1.h) dVar2;
                Executor executor4 = hVar3.f19170g;
                if (executor4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor4 = null;
                }
                h hVar4 = hVar3.f19169f;
                if (hVar4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar4 = null;
                }
                if (t1.d.b(resultData, oVar2, executor4, hVar4, hVar3.f19171h)) {
                    return;
                }
                int i16 = resultData.getInt("ACTIVITY_REQUEST_CODE");
                Intent intent2 = (Intent) resultData.getParcelable("RESULT_DATA");
                int i17 = t1.d.f18156c;
                if (i16 != i17) {
                    Log.w("CreatePublicKey", "Returned request code " + i17 + " does not match what was given " + i16);
                    return;
                }
                if (t1.d.c(i5, new x(i10), new r(14, hVar3), hVar3.f19171h)) {
                    return;
                }
                byte[] byteArrayExtra = intent2 != null ? intent2.getByteArrayExtra("FIDO2_CREDENTIAL_EXTRA") : null;
                if (byteArrayExtra == null) {
                    f fVar = CredentialProviderPlayServicesImpl.Companion;
                    CancellationSignal cancellationSignal4 = hVar3.f19171h;
                    fVar.getClass();
                    if (f.a(cancellationSignal4)) {
                        return;
                    }
                    Executor executor5 = hVar3.f19170g;
                    if (executor5 == null) {
                        Intrinsics.throwUninitializedPropertyAccessException("executor");
                        executor = null;
                    } else {
                        executor = executor5;
                    }
                    executor.execute(new v1.e(hVar3, 1));
                    return;
                }
                u cred = (u) zk.a.m(byteArrayExtra, u.CREATOR);
                Intrinsics.checkNotNullExpressionValue(cred, "deserializeFromBytes(...)");
                LinkedHashMap linkedHashMap = i.a;
                Intrinsics.checkNotNullParameter(cred, "cred");
                k h6 = cred.h();
                Intrinsics.checkNotNullExpressionValue(h6, "getResponse(...)");
                if (h6 instanceof rf.j) {
                    rf.j jVar = (rf.j) h6;
                    q qVar = jVar.f17316d;
                    Intrinsics.checkNotNullExpressionValue(qVar, "getErrorCode(...)");
                    p1.a aVar3 = (p1.a) i.a.get(qVar);
                    String str = jVar.f17317e;
                    dVar = aVar3 == null ? new q1.a(new p1.a(26), a3.e.k("unknown fido gms exception - ", str)) : (qVar == q.NOT_ALLOWED_ERR && str != null && StringsKt.D(str, "Unable to get sync account", false)) ? new o1.b("Passkey registration was cancelled by the user.") : new q1.a(aVar3, str);
                } else {
                    dVar = null;
                }
                if (dVar != null) {
                    CancellationSignal cancellationSignal5 = hVar3.f19171h;
                    v1.d onResultOrException4 = new v1.d(hVar3, dVar, 1);
                    Intrinsics.checkNotNullParameter(onResultOrException4, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal5)) {
                        return;
                    }
                    onResultOrException4.invoke();
                    return;
                }
                try {
                    n1.f f2 = v1.h.f(cred);
                    CancellationSignal cancellationSignal6 = hVar3.f19171h;
                    k6.b onResultOrException5 = new k6.b(9, hVar3, f2);
                    Intrinsics.checkNotNullParameter(onResultOrException5, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal6)) {
                        return;
                    }
                    onResultOrException5.invoke();
                    return;
                } catch (JSONException e11) {
                    CancellationSignal cancellationSignal7 = hVar3.f19171h;
                    v1.f onResultOrException6 = new v1.f(hVar3, e11, 0);
                    Intrinsics.checkNotNullParameter(onResultOrException6, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal7)) {
                        return;
                    }
                    onResultOrException6.invoke();
                    return;
                } catch (Throwable th3) {
                    CancellationSignal cancellationSignal8 = hVar3.f19171h;
                    v1.g onResultOrException7 = new v1.g(hVar3, th3, 0);
                    Intrinsics.checkNotNullParameter(onResultOrException7, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal8)) {
                        return;
                    }
                    onResultOrException7.invoke();
                    return;
                }
            case 2:
                Intrinsics.checkNotNullParameter(resultData, "resultData");
                t1.a aVar4 = t1.d.a;
                o oVar3 = new o(4);
                w1.e eVar = (w1.e) dVar2;
                Executor executor6 = eVar.f19617g;
                if (executor6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor6 = null;
                }
                h hVar5 = eVar.f19616f;
                if (hVar5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar5 = null;
                }
                if (t1.d.b(resultData, oVar3, executor6, hVar5, eVar.f19618h)) {
                    return;
                }
                int i18 = resultData.getInt("ACTIVITY_REQUEST_CODE");
                Intent intent3 = (Intent) android.support.v4.media.session.b.p(resultData, "RESULT_DATA", Intent.class);
                int i19 = t1.d.f18156c;
                if (i18 != i19) {
                    Log.w("CreatePublicKey", "Returned request code " + i19 + " does not match what was given " + i18);
                    return;
                }
                if (t1.d.c(i5, new x(i11), new r(16, eVar), eVar.f19618h)) {
                    return;
                }
                if (intent3 == null) {
                    CancellationSignal cancellationSignal9 = eVar.f19618h;
                    w1.d onResultOrException8 = new w1.d(eVar, 0);
                    Intrinsics.checkNotNullParameter(onResultOrException8, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal9)) {
                        return;
                    }
                    onResultOrException8.invoke();
                    return;
                }
                Intrinsics.checkNotNullParameter("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", "type");
                Intrinsics.checkNotNullParameter(intent3, "intent");
                int i20 = Build.VERSION.SDK_INT;
                if (i20 >= 34) {
                    cVar = a2.a.b(intent3, "androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL");
                } else {
                    Intrinsics.checkNotNullParameter(intent3, "intent");
                    Bundle bundle2 = intent3.getBundleExtra("android.service.credentials.extra.CREATE_CREDENTIAL_RESPONSE");
                    if (bundle2 != null) {
                        Intrinsics.checkNotNullParameter(bundle2, "bundle");
                        String string = bundle2.getString("androidx.credentials.provider.extra.CREATE_CREDENTIAL_RESPONSE_TYPE");
                        if (string != null && (bundle = bundle2.getBundle("androidx.credentials.provider.extra.CREATE_CREDENTIAL_REQUEST_DATA")) != null) {
                            cVar = nf.e.g(string, bundle);
                        }
                    }
                    cVar = null;
                }
                if (cVar != null) {
                    CancellationSignal cancellationSignal10 = eVar.f19618h;
                    k6.b onResultOrException9 = new k6.b(10, eVar, cVar);
                    Intrinsics.checkNotNullParameter(onResultOrException9, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (f.a(cancellationSignal10)) {
                        return;
                    }
                    onResultOrException9.invoke();
                    return;
                }
                Intrinsics.checkNotNullParameter(intent3, "intent");
                if (i20 >= 34) {
                    M = a2.a.a(intent3);
                } else {
                    Intrinsics.checkNotNullParameter(intent3, "intent");
                    int i21 = o1.d.f15726d;
                    Bundle bundle3 = intent3.getBundleExtra("android.service.credentials.extra.CREATE_CREDENTIAL_EXCEPTION");
                    if (bundle3 == null) {
                        M = null;
                    } else {
                        Intrinsics.checkNotNullParameter(bundle3, "bundle");
                        String string2 = bundle3.getString("androidx.credentials.provider.extra.CREATE_CREDENTIAL_EXCEPTION_TYPE");
                        if (string2 == null) {
                            throw new IllegalArgumentException("Bundle was missing exception type.");
                        }
                        M = io.sentry.config.a.M(bundle3.getCharSequence("androidx.credentials.provider.extra.CREATE_CREDENTIAL_EXCEPTION_MESSAGE"), string2);
                    }
                }
                CancellationSignal cancellationSignal11 = eVar.f19618h;
                k6.b onResultOrException10 = new k6.b(11, eVar, M);
                Intrinsics.checkNotNullParameter(onResultOrException10, "onResultOrException");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (f.a(cancellationSignal11)) {
                    return;
                }
                onResultOrException10.invoke();
                return;
            case 3:
                Intrinsics.checkNotNullParameter(resultData, "resultData");
                t1.a aVar5 = t1.d.a;
                o oVar4 = new o(5);
                x1.a aVar6 = (x1.a) dVar2;
                Executor executor7 = aVar6.f20246g;
                if (executor7 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor7 = null;
                }
                h hVar6 = aVar6.f20245f;
                if (hVar6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar6 = null;
                }
                if (t1.d.b(resultData, oVar4, executor7, hVar6, aVar6.f20247h)) {
                    return;
                }
                int i22 = resultData.getInt("ACTIVITY_REQUEST_CODE");
                Intent intent4 = (Intent) android.support.v4.media.session.b.p(resultData, "RESULT_DATA", Intent.class);
                Executor executor8 = aVar6.f20246g;
                if (executor8 != null) {
                    executor2 = executor8;
                } else {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor2 = null;
                }
                h hVar7 = aVar6.f20245f;
                if (hVar7 != null) {
                    hVar = hVar7;
                } else {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar = null;
                }
                io.sentry.config.a.u(i22, i5, intent4, executor2, hVar, aVar6.f20247h);
                return;
            default:
                Intrinsics.checkNotNullParameter(resultData, "resultData");
                t1.a aVar7 = t1.d.a;
                o oVar5 = new o(6);
                y1.a aVar8 = (y1.a) dVar2;
                Executor executor9 = aVar8.f20598g;
                if (executor9 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor9 = null;
                }
                h hVar8 = aVar8.f20597f;
                if (hVar8 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar8 = null;
                }
                if (t1.d.b(resultData, oVar5, executor9, hVar8, aVar8.f20599h)) {
                    return;
                }
                int i23 = resultData.getInt("ACTIVITY_REQUEST_CODE");
                Intent intent5 = (Intent) android.support.v4.media.session.b.p(resultData, "RESULT_DATA", Intent.class);
                Executor executor10 = aVar8.f20598g;
                if (executor10 != null) {
                    executor3 = executor10;
                } else {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor3 = null;
                }
                h hVar9 = aVar8.f20597f;
                if (hVar9 != null) {
                    hVar2 = hVar9;
                } else {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                    hVar2 = null;
                }
                io.sentry.config.a.u(i23, i5, intent5, executor3, hVar2, aVar8.f20599h);
                return;
        }
    }
}
