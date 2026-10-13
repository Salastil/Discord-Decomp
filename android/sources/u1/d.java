package u1;

import a3.e;
import android.content.Context;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import bf.t;
import bg.w0;
import com.facebook.react.devsupport.StackTraceHelper;
import io.sentry.android.core.w;
import java.util.LinkedHashMap;
import java.util.concurrent.Executor;
import jg.l;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import n1.h;
import n1.n;
import n1.p;
import n1.q;
import n1.s;
import o1.o;
import org.json.JSONException;
import org.json.JSONObject;
import rf.f;
import rf.j;
import rf.k;
import rf.u;
import se.g;
import v1.i;

/* loaded from: classes.dex */
public final class d extends t1.d {

    /* renamed from: e, reason: collision with root package name */
    public final Context f18785e;

    /* renamed from: f, reason: collision with root package name */
    public h f18786f;

    /* renamed from: g, reason: collision with root package name */
    public Executor f18787g;

    /* renamed from: h, reason: collision with root package name */
    public CancellationSignal f18788h;

    /* renamed from: i, reason: collision with root package name */
    public final c f18789i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.f18785e = context;
        this.f18789i = new c(this, new Handler(Looper.getMainLooper()), 0);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r1v2, types: [n1.u] */
    public final q e(g cred) {
        n nVar;
        String authenticationResponseJson;
        String str = "response";
        Intrinsics.checkNotNullParameter(cred, "response");
        String password = cred.f17982x;
        u uVar = cred.F;
        boolean z5 = true;
        if (password != null) {
            String id2 = cred.f17977d;
            Intrinsics.checkNotNullExpressionValue(id2, "getId(...)");
            Intrinsics.checkNotNull(password);
            Intrinsics.checkNotNullParameter(id2, "id");
            Intrinsics.checkNotNullParameter(password, "password");
            Intrinsics.checkNotNullParameter(id2, "id");
            Intrinsics.checkNotNullParameter(password, "password");
            Bundle bundle = new Bundle();
            bundle.putString("androidx.credentials.BUNDLE_KEY_ID", id2);
            bundle.putString("androidx.credentials.BUNDLE_KEY_PASSWORD", password);
            nVar = new n(1, password, bundle);
        } else {
            JSONObject jSONObject = null;
            if (cred.f17983y != null) {
                String id3 = cred.f17977d;
                Intrinsics.checkNotNullExpressionValue(id3, "getId(...)");
                Intrinsics.checkNotNullParameter(id3, "id");
                String idToken = cred.f17983y;
                Intrinsics.checkNotNull(idToken);
                Intrinsics.checkNotNullParameter(idToken, "idToken");
                String str2 = cred.f17978e;
                if (str2 == null) {
                    str2 = null;
                }
                String str3 = cred.f17979i;
                if (str3 == null) {
                    str3 = null;
                }
                String str4 = cred.f17980v;
                if (str4 == null) {
                    str4 = null;
                }
                String str5 = cred.E;
                if (str5 == null) {
                    str5 = null;
                }
                Uri uri = cred.f17981w;
                Uri uri2 = uri != null ? uri : null;
                Intrinsics.checkNotNullParameter(id3, "id");
                Intrinsics.checkNotNullParameter(idToken, "idToken");
                Intrinsics.checkNotNullParameter(id3, "id");
                Intrinsics.checkNotNullParameter(idToken, "idToken");
                Bundle bundle2 = new Bundle();
                bundle2.putString("com.google.android.libraries.identity.googleid.BUNDLE_KEY_ID", id3);
                bundle2.putString("com.google.android.libraries.identity.googleid.BUNDLE_KEY_ID_TOKEN", idToken);
                bundle2.putString("com.google.android.libraries.identity.googleid.BUNDLE_KEY_DISPLAY_NAME", str2);
                bundle2.putString("com.google.android.libraries.identity.googleid.BUNDLE_KEY_FAMILY_NAME", str4);
                bundle2.putString("com.google.android.libraries.identity.googleid.BUNDLE_KEY_GIVEN_NAME", str3);
                bundle2.putString("com.google.android.libraries.identity.googleid.BUNDLE_KEY_PHONE_NUMBER", str5);
                bundle2.putParcelable("com.google.android.libraries.identity.googleid.BUNDLE_KEY_PROFILE_PICTURE_URI", uri2);
                kg.a aVar = new kg.a(0, "com.google.android.libraries.identity.googleid.TYPE_GOOGLE_ID_TOKEN_CREDENTIAL", bundle2);
                if (id3.length() <= 0) {
                    throw new IllegalArgumentException("id should not be empty");
                }
                if (idToken.length() <= 0) {
                    throw new IllegalArgumentException("idToken should not be empty");
                }
                nVar = aVar;
            } else if (uVar != null) {
                LinkedHashMap linkedHashMap = i.a;
                Intrinsics.checkNotNullParameter(cred, "cred");
                JSONObject jSONObject2 = new JSONObject();
                k h6 = uVar.h();
                Intrinsics.checkNotNull(h6);
                if (h6 instanceof j) {
                    j jVar = (j) h6;
                    rf.q code = jVar.f17316d;
                    Intrinsics.checkNotNullExpressionValue(code, "getErrorCode(...)");
                    String str6 = jVar.f17317e;
                    Intrinsics.checkNotNullParameter(code, "code");
                    p1.a aVar2 = (p1.a) i.a.get(code);
                    if (aVar2 == null) {
                        throw new q1.b(new p1.a(26), e.k("unknown fido gms exception - ", str6));
                    }
                    if (code == rf.q.NOT_ALLOWED_ERR && str6 != null && StringsKt.D(str6, "Unable to get sync account", false)) {
                        throw new o1.j("Passkey retrieval was cancelled by the user.");
                    }
                    throw new q1.b(aVar2, str6);
                }
                if (h6 instanceof rf.h) {
                    try {
                        j jVar2 = uVar.f17357x;
                        w0 w0Var = uVar.f17354i;
                        try {
                            JSONObject jSONObject3 = new JSONObject();
                            if (w0Var != null && w0Var.m().length > 0) {
                                jSONObject3.put("rawId", gf.c.b(w0Var.m()));
                            }
                            String str7 = uVar.E;
                            if (str7 != null) {
                                jSONObject3.put("authenticatorAttachment", str7);
                            }
                            String str8 = uVar.f17353e;
                            if (str8 != null && jVar2 == null) {
                                jSONObject3.put("type", str8);
                            }
                            String str9 = uVar.f17352d;
                            if (str9 != null) {
                                jSONObject3.put(StackTraceHelper.ID_KEY, str9);
                            }
                            rf.h hVar = uVar.f17356w;
                            if (hVar != null) {
                                jSONObject = hVar.h();
                            } else {
                                rf.i iVar = uVar.f17355v;
                                if (iVar != null) {
                                    jSONObject = iVar.h();
                                } else {
                                    if (jVar2 != null) {
                                        try {
                                            jSONObject = new JSONObject();
                                            jSONObject.put("code", jVar2.f17316d.f17345d);
                                            String str10 = jVar2.f17317e;
                                            if (str10 != null) {
                                                jSONObject.put("message", str10);
                                            }
                                            str = "error";
                                        } catch (JSONException e9) {
                                            throw new RuntimeException("Error encoding AuthenticatorErrorResponse to JSON object", e9);
                                        }
                                    }
                                    z5 = false;
                                }
                            }
                            if (jSONObject != null) {
                                jSONObject3.put(str, jSONObject);
                            }
                            f fVar = uVar.f17358y;
                            if (fVar != null) {
                                jSONObject3.put("clientExtensionResults", fVar.h());
                            } else if (z5) {
                                jSONObject3.put("clientExtensionResults", new JSONObject());
                            }
                            authenticationResponseJson = jSONObject3.toString();
                            Intrinsics.checkNotNullExpressionValue(authenticationResponseJson, "toJson(...)");
                        } catch (JSONException e10) {
                            throw new RuntimeException("Error encoding PublicKeyCredential to JSON object", e10);
                        }
                    } catch (Throwable th2) {
                        throw new o("The PublicKeyCredential response json had an unexpected exception when parsing: " + th2.getMessage());
                    }
                } else {
                    Log.e("PublicKeyUtility", "AuthenticatorResponse expected assertion response but got: ".concat(h6.getClass().getName()));
                    authenticationResponseJson = jSONObject2.toString();
                    Intrinsics.checkNotNullExpressionValue(authenticationResponseJson, "toString(...)");
                }
                Intrinsics.checkNotNullParameter(authenticationResponseJson, "authenticationResponseJson");
                Intrinsics.checkNotNullParameter(authenticationResponseJson, "authenticationResponseJson");
                Bundle bundle3 = new Bundle();
                bundle3.putString("androidx.credentials.BUNDLE_KEY_AUTHENTICATION_RESPONSE_JSON", authenticationResponseJson);
                nVar = new n1.u(authenticationResponseJson, bundle3);
            } else {
                Log.w("BeginSignIn", "Credential returned but no google Id or password or passkey found");
                nVar = null;
            }
        }
        if (nVar != null) {
            return new q(nVar);
        }
        throw new o("When attempting to convert get response, null credential found");
    }

    public final h f() {
        h hVar = this.f18786f;
        if (hVar != null) {
            return hVar;
        }
        Intrinsics.throwUninitializedPropertyAccessException("callback");
        return null;
    }

    public final Executor g() {
        Executor executor = this.f18787g;
        if (executor != null) {
            return executor;
        }
        Intrinsics.throwUninitializedPropertyAccessException("executor");
        return null;
    }

    public final void h(p request, CancellationSignal cancellationSignal, Executor executor, h callback) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(executor, "executor");
        this.f18788h = cancellationSignal;
        Intrinsics.checkNotNullParameter(callback, "<set-?>");
        this.f18786f = callback;
        Intrinsics.checkNotNullParameter(executor, "<set-?>");
        this.f18787g = executor;
        CredentialProviderPlayServicesImpl.Companion.getClass();
        if (s1.f.a(cancellationSignal)) {
            return;
        }
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(request, "request");
        Context context = this.f18785e;
        Intrinsics.checkNotNullParameter(context, "context");
        se.d dVar = new se.d(false);
        se.a aVar = new se.a(false, null, null, true, null, null, false);
        se.c cVar = new se.c(false, null, null);
        se.b bVar = new se.b(false, null);
        PackageManager packageManager = context.getPackageManager();
        Intrinsics.checkNotNullExpressionValue(packageManager, "getPackageManager(...)");
        long j = packageManager.getPackageInfo("com.google.android.gms", 0).versionCode;
        boolean z5 = false;
        se.b bVar2 = bVar;
        for (n1.i iVar : request.a) {
            if ((iVar instanceof s) && !z5) {
                if (j >= 231815000) {
                    LinkedHashMap linkedHashMap = i.a;
                    s option = (s) iVar;
                    Intrinsics.checkNotNullParameter(option, "option");
                    se.b bVar3 = new se.b(true, option.f14725e);
                    Intrinsics.checkNotNullExpressionValue(bVar3, "build(...)");
                    bVar2 = bVar3;
                } else {
                    LinkedHashMap linkedHashMap2 = i.a;
                    s option2 = (s) iVar;
                    Intrinsics.checkNotNullParameter(option2, "option");
                    JSONObject jSONObject = new JSONObject(option2.f14725e);
                    String optString = jSONObject.optString("rpId", "");
                    Intrinsics.checkNotNull(optString);
                    if (optString.length() == 0) {
                        throw new JSONException("GetPublicKeyCredentialOption - rpId not specified in the request or is unexpectedly empty");
                    }
                    se.c cVar2 = new se.c(true, ys.d.I(jSONObject), optString);
                    Intrinsics.checkNotNullExpressionValue(cVar2, "build(...)");
                    cVar = cVar2;
                }
                z5 = true;
            }
        }
        se.e eVar = new se.e(dVar, aVar, null, false, 0, cVar, bVar2, false);
        Intrinsics.checkNotNullExpressionValue(eVar, "build(...)");
        vf.b q5 = com.facebook.imagepipeline.nativecode.b.q(context);
        new se.a(false, null, null, true, null, null, false);
        se.a aVar2 = eVar.f17970e;
        t.g(aVar2);
        se.d dVar2 = eVar.f17969d;
        t.g(dVar2);
        se.c cVar3 = eVar.f17974x;
        t.g(cVar3);
        se.b bVar4 = eVar.f17975y;
        t.g(bVar4);
        se.e eVar2 = new se.e(dVar2, aVar2, q5.k, eVar.f17972v, eVar.f17973w, cVar3, bVar4, eVar.E);
        af.k f2 = af.k.f();
        f2.f564b = new ye.d[]{new ye.d("auth_api_credentials_begin_sign_in", 8L)};
        f2.f567e = new qa.t(q5, eVar2);
        f2.f565c = false;
        f2.f566d = 1553;
        l b10 = q5.b(0, f2.e());
        ni.a aVar3 = new ni.a(6, new com.discord.permissions.b(13, cancellationSignal, this));
        b10.getClass();
        b10.d(jg.h.a, aVar3);
        b10.o(new w(8, this, cancellationSignal));
    }
}
