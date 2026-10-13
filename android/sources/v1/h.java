package v1;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.os.Handler;
import android.os.Looper;
import android.util.Base64;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import bf.t;
import bg.w0;
import cc.k;
import com.appsflyer.AppsFlyerProperties;
import com.facebook.react.devsupport.StackTraceHelper;
import com.google.android.gms.fido.common.Transport;
import com.google.android.gms.fido.fido2.api.common.AuthenticationExtensions;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import rf.b0;
import rf.e0;
import rf.i0;
import rf.j;
import rf.l;
import rf.n;
import rf.r;
import rf.s;
import rf.u;
import rf.v;
import rf.w;
import rf.x;
import rf.y;

/* loaded from: classes.dex */
public final class h extends t1.d {
    public static final /* synthetic */ int j = 0;

    /* renamed from: e, reason: collision with root package name */
    public final Context f19168e;

    /* renamed from: f, reason: collision with root package name */
    public n1.h f19169f;

    /* renamed from: g, reason: collision with root package name */
    public Executor f19170g;

    /* renamed from: h, reason: collision with root package name */
    public CancellationSignal f19171h;

    /* renamed from: i, reason: collision with root package name */
    public final u1.c f19172i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        this.f19168e = context;
        this.f19172i = new u1.c(this, new Handler(Looper.getMainLooper()), 1);
    }

    public static n1.f f(u response) {
        JSONObject jSONObject;
        String str = "response";
        Intrinsics.checkNotNullParameter(response, "response");
        try {
            j jVar = response.f17357x;
            w0 w0Var = response.f17354i;
            try {
                JSONObject jSONObject2 = new JSONObject();
                if (w0Var != null && w0Var.m().length > 0) {
                    jSONObject2.put("rawId", gf.c.b(w0Var.m()));
                }
                String str2 = response.E;
                if (str2 != null) {
                    jSONObject2.put("authenticatorAttachment", str2);
                }
                String str3 = response.f17353e;
                if (str3 != null && jVar == null) {
                    jSONObject2.put("type", str3);
                }
                String str4 = response.f17352d;
                if (str4 != null) {
                    jSONObject2.put(StackTraceHelper.ID_KEY, str4);
                }
                rf.h hVar = response.f17356w;
                boolean z5 = true;
                if (hVar != null) {
                    jSONObject = hVar.h();
                } else {
                    rf.i iVar = response.f17355v;
                    if (iVar != null) {
                        jSONObject = iVar.h();
                    } else {
                        z5 = false;
                        if (jVar != null) {
                            try {
                                JSONObject jSONObject3 = new JSONObject();
                                jSONObject3.put("code", jVar.f17316d.f17345d);
                                String str5 = jVar.f17317e;
                                if (str5 != null) {
                                    jSONObject3.put("message", str5);
                                }
                                jSONObject = jSONObject3;
                                str = "error";
                            } catch (JSONException e9) {
                                throw new RuntimeException("Error encoding AuthenticatorErrorResponse to JSON object", e9);
                            }
                        } else {
                            jSONObject = null;
                        }
                    }
                }
                if (jSONObject != null) {
                    jSONObject2.put(str, jSONObject);
                }
                rf.f fVar = response.f17358y;
                if (fVar != null) {
                    jSONObject2.put("clientExtensionResults", fVar.h());
                } else if (z5) {
                    jSONObject2.put("clientExtensionResults", new JSONObject());
                }
                String registrationResponseJson = jSONObject2.toString();
                Intrinsics.checkNotNullExpressionValue(registrationResponseJson, "toJson(...)");
                Intrinsics.checkNotNullParameter(registrationResponseJson, "registrationResponseJson");
                Intrinsics.checkNotNullParameter(registrationResponseJson, "registrationResponseJson");
                Bundle bundle = new Bundle();
                bundle.putString("androidx.credentials.BUNDLE_KEY_REGISTRATION_RESPONSE_JSON", registrationResponseJson);
                return new n1.f(registrationResponseJson, bundle);
            } catch (JSONException e10) {
                throw new RuntimeException("Error encoding PublicKeyCredential to JSON object", e10);
            }
        } catch (Throwable th2) {
            throw new o1.h("The PublicKeyCredential response json had an unexpected exception when parsing: " + th2.getMessage());
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final v e(n1.e request) {
        String str;
        String str2;
        int i5;
        ArrayList arrayList;
        long j5;
        Intrinsics.checkNotNullParameter(request, "request");
        LinkedHashMap linkedHashMap = i.a;
        Intrinsics.checkNotNullParameter(request, "request");
        Context context = this.f19168e;
        Intrinsics.checkNotNullParameter(context, "context");
        if (ye.e.f20918d.b(context, ye.f.a) == 0) {
            PackageManager packageManager = context.getPackageManager();
            Intrinsics.checkNotNullExpressionValue(packageManager, "getPackageManager(...)");
            if (Build.VERSION.SDK_INT >= 28) {
                PackageInfo packageInfo = packageManager.getPackageInfo("com.google.android.gms", 0);
                Intrinsics.checkNotNullExpressionValue(packageInfo, "getPackageInfo(...)");
                j5 = androidx.core.view.h.q(packageInfo);
            } else {
                j5 = packageManager.getPackageInfo("com.google.android.gms", 0).versionCode;
            }
            if (j5 > 241217000) {
                return new v(request.f14714d);
            }
        }
        JSONObject json = new JSONObject(request.f14714d);
        Intrinsics.checkNotNullParameter(json, "json");
        k builder = new k();
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(builder, "builder");
        byte[] I = ys.d.I(json);
        t.g(I);
        builder.f3400v = I;
        JSONObject jSONObject = json.getJSONObject("user");
        String str3 = StackTraceHelper.ID_KEY;
        String str4 = jSONObject.getString(StackTraceHelper.ID_KEY);
        Intrinsics.checkNotNullExpressionValue(str4, "getString(...)");
        Intrinsics.checkNotNullParameter(str4, "str");
        byte[] decode = Base64.decode(str4, 11);
        String str5 = "decode(...)";
        Intrinsics.checkNotNullExpressionValue(decode, "decode(...)");
        String string = jSONObject.getString(StackTraceHelper.NAME_KEY);
        String string2 = jSONObject.getString("displayName");
        String optString = jSONObject.optString("icon", "");
        Intrinsics.checkNotNull(string2);
        if (string2.length() == 0) {
            throw new JSONException("PublicKeyCredentialCreationOptions UserEntity missing displayName or they are unexpectedly empty");
        }
        if (decode.length == 0) {
            throw new JSONException("PublicKeyCredentialCreationOptions UserEntity missing user id or they are unexpectedly empty");
        }
        Intrinsics.checkNotNull(string);
        if (string.length() == 0) {
            throw new JSONException("PublicKeyCredentialCreationOptions UserEntity missing user name or they are unexpectedly empty");
        }
        builder.f3399i = new b0(string, optString, string2, decode);
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(builder, "builder");
        JSONObject jSONObject2 = json.getJSONObject("rp");
        String string3 = jSONObject2.getString(StackTraceHelper.ID_KEY);
        String optString2 = jSONObject2.optString(StackTraceHelper.NAME_KEY, "");
        String optString3 = jSONObject2.optString("icon", "");
        Intrinsics.checkNotNull(optString3);
        if (optString3.length() == 0) {
            optString3 = null;
        }
        Intrinsics.checkNotNull(optString2);
        if (optString2.length() == 0) {
            throw new JSONException("PublicKeyCredentialCreationOptions rp name is missing or unexpectedly empty");
        }
        Intrinsics.checkNotNull(string3);
        if (string3.length() == 0) {
            throw new JSONException("PublicKeyCredentialCreationOptions rp ID is missing or unexpectedly empty");
        }
        builder.f3398e = new y(string3, optString2, optString3);
        JSONArray jSONArray = json.getJSONArray("pubKeyCredParams");
        ArrayList arrayList2 = new ArrayList();
        int length = jSONArray.length();
        int i6 = 0;
        while (i6 < length) {
            JSONObject jSONObject3 = jSONArray.getJSONObject(i6);
            LinkedHashMap linkedHashMap2 = i.a;
            String str6 = str5;
            int i10 = (int) jSONObject3.getLong("alg");
            String optString4 = jSONObject3.optString("type", "");
            Intrinsics.checkNotNull(optString4);
            if (optString4.length() == 0) {
                throw new JSONException("PublicKeyCredentialCreationOptions PublicKeyCredentialParameter type missing or unexpectedly empty");
            }
            try {
                n.a(i10);
                arrayList2.add(new x(optString4, i10));
            } catch (Throwable unused) {
            }
            i6++;
            str5 = str6;
        }
        String str7 = str5;
        builder.f3401w = arrayList2;
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(builder, "builder");
        ArrayList arrayList3 = new ArrayList();
        LinkedHashMap linkedHashMap3 = i.a;
        if (json.has("excludeCredentials")) {
            JSONArray jSONArray2 = json.getJSONArray("excludeCredentials");
            int length2 = jSONArray2.length();
            int i11 = 0;
            while (i11 < length2) {
                JSONObject jSONObject4 = jSONArray2.getJSONObject(i11);
                LinkedHashMap linkedHashMap4 = i.a;
                String str8 = jSONObject4.getString(str3);
                Intrinsics.checkNotNullExpressionValue(str8, "getString(...)");
                Intrinsics.checkNotNullParameter(str8, "str");
                byte[] decode2 = Base64.decode(str8, 11);
                String str9 = str7;
                Intrinsics.checkNotNullExpressionValue(decode2, str9);
                JSONArray jSONArray3 = jSONArray2;
                String string4 = jSONObject4.getString("type");
                Intrinsics.checkNotNull(string4);
                if (string4.length() == 0) {
                    throw new JSONException("PublicKeyCredentialDescriptor type value is not found or unexpectedly empty");
                }
                int i12 = length2;
                if (decode2.length == 0) {
                    throw new JSONException("PublicKeyCredentialDescriptor id value is not found or unexpectedly empty");
                }
                if (jSONObject4.has("transports")) {
                    str2 = str3;
                    arrayList = new ArrayList();
                    JSONArray jSONArray4 = jSONObject4.getJSONArray("transports");
                    int length3 = jSONArray4.length();
                    i5 = i11;
                    int i13 = 0;
                    while (i13 < length3) {
                        try {
                            JSONArray jSONArray5 = jSONArray4;
                            arrayList.add(Transport.a(jSONArray4.getString(i13)));
                            i13++;
                            jSONArray4 = jSONArray5;
                        } catch (pf.a e9) {
                            throw new q1.a(new p1.a(4), e9.getMessage());
                        }
                    }
                } else {
                    str2 = str3;
                    i5 = i11;
                    arrayList = null;
                }
                arrayList3.add(new w(string4, decode2, arrayList));
                i11 = i5 + 1;
                jSONArray2 = jSONArray3;
                length2 = i12;
                str3 = str2;
                str7 = str9;
            }
        }
        builder.f3403y = arrayList3;
        LinkedHashMap linkedHashMap5 = i.a;
        String optString5 = json.optString("attestation", "none");
        Intrinsics.checkNotNull(optString5);
        builder.F = rf.e.a(optString5.length() != 0 ? optString5 : "none");
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(builder, "builder");
        if (json.has("timeout")) {
            builder.f3402x = Double.valueOf(json.getLong("timeout") / 1000);
        }
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(builder, "builder");
        if (json.has("authenticatorSelection")) {
            JSONObject jSONObject5 = json.getJSONObject("authenticatorSelection");
            boolean optBoolean = jSONObject5.optBoolean("requireResidentKey", false);
            String optString6 = jSONObject5.optString("residentKey", "");
            Intrinsics.checkNotNull(optString6);
            e0 a = optString6.length() > 0 ? e0.a(optString6) : null;
            Boolean valueOf = Boolean.valueOf(optBoolean);
            String optString7 = jSONObject5.optString("authenticatorAttachment", "");
            Intrinsics.checkNotNull(optString7);
            rf.c a10 = optString7.length() > 0 ? rf.c.a(optString7) : null;
            str = null;
            builder.E = new l(a10 == null ? null : a10.f17285d, valueOf, null, a == null ? null : a.f17295d);
        } else {
            str = null;
        }
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(builder, "builder");
        if (json.has("extensions")) {
            JSONObject jSONObject6 = json.getJSONObject("extensions");
            String optString8 = jSONObject6.optString(AppsFlyerProperties.APP_ID, "");
            Intrinsics.checkNotNull(optString8);
            builder.G = new AuthenticationExtensions(optString8.length() > 0 ? new r(optString8) : str, null, jSONObject6.optBoolean("uvm", false) ? new i0(true) : str, null, null, null, null, null, jSONObject6.optBoolean("thirdPartyPayment", false) ? new s(true) : str, null, null, null, null);
        }
        y yVar = (y) builder.f3398e;
        b0 b0Var = (b0) builder.f3399i;
        byte[] bArr = (byte[]) builder.f3400v;
        ArrayList arrayList4 = (ArrayList) builder.f3401w;
        Double d6 = (Double) builder.f3402x;
        ArrayList arrayList5 = (ArrayList) builder.f3403y;
        l lVar = (l) builder.E;
        rf.e eVar = (rf.e) builder.F;
        v vVar = new v(yVar, b0Var, bArr, arrayList4, d6, arrayList5, lVar, null, null, eVar == null ? str : eVar.f17291d, (AuthenticationExtensions) builder.G, null, null, null);
        Intrinsics.checkNotNullExpressionValue(vVar, "build(...)");
        return vVar;
    }

    public final void g(n1.e request, n1.h callback, Executor executor, CancellationSignal cancellationSignal) {
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(callback, "callback");
        Intrinsics.checkNotNullParameter(executor, "executor");
        this.f19171h = cancellationSignal;
        this.f19169f = callback;
        this.f19170g = executor;
        try {
            v e9 = e(request);
            CredentialProviderPlayServicesImpl.Companion.getClass();
            if (s1.f.a(cancellationSignal)) {
                return;
            }
            qf.a aVar = new qf.a(this.f19168e, null, qf.a.k, ze.b.D, new ze.h(new l8.a(1), Looper.getMainLooper()));
            af.k f2 = af.k.f();
            f2.f567e = new gj.c(aVar, e9);
            f2.f566d = 5407;
            jg.l b10 = aVar.b(0, f2.e());
            ni.a aVar2 = new ni.a(9, new com.discord.permissions.b(14, cancellationSignal, this));
            b10.getClass();
            b10.d(jg.h.a, aVar2);
            b10.o(new io.sentry.android.core.w(9, this, cancellationSignal));
        } catch (JSONException e10) {
            f onResultOrException = new f(this, e10, 1);
            Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
            CredentialProviderPlayServicesImpl.Companion.getClass();
            if (s1.f.a(cancellationSignal)) {
                return;
            }
            onResultOrException.invoke();
        } catch (Throwable th2) {
            g onResultOrException2 = new g(this, th2, 1);
            Intrinsics.checkNotNullParameter(onResultOrException2, "onResultOrException");
            CredentialProviderPlayServicesImpl.Companion.getClass();
            if (s1.f.a(cancellationSignal)) {
                return;
            }
            onResultOrException2.invoke();
        }
    }
}
