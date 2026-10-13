package rf;

import android.os.Parcel;
import android.os.Parcelable;
import android.os.ResultReceiver;
import android.util.Base64;
import android.util.Log;
import androidx.annotation.NonNull;
import com.appsflyer.AppsFlyerProperties;
import com.facebook.react.devsupport.StackTraceHelper;
import com.google.android.gms.fido.common.Transport;
import com.google.android.gms.fido.fido2.api.common.AuthenticationExtensions;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class v extends k {

    @NonNull
    public static final Parcelable.Creator<v> CREATOR = new kf.b(20);
    public final Integer E;
    public final h0 F;
    public final e G;
    public final AuthenticationExtensions H;
    public final String I;
    public final ResultReceiver J;
    public final List K;

    /* renamed from: d, reason: collision with root package name */
    public final y f17361d;

    /* renamed from: e, reason: collision with root package name */
    public final b0 f17362e;

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f17363i;

    /* renamed from: v, reason: collision with root package name */
    public final List f17364v;

    /* renamed from: w, reason: collision with root package name */
    public final Double f17365w;

    /* renamed from: x, reason: collision with root package name */
    public final List f17366x;

    /* renamed from: y, reason: collision with root package name */
    public final l f17367y;

    public v(String str) {
        try {
            v h6 = h(new JSONObject(str));
            this.f17361d = h6.f17361d;
            this.f17362e = h6.f17362e;
            this.f17363i = h6.f17363i;
            this.f17364v = h6.f17364v;
            this.f17365w = h6.f17365w;
            this.f17366x = h6.f17366x;
            this.f17367y = h6.f17367y;
            this.E = h6.E;
            this.F = h6.F;
            this.G = h6.G;
            this.H = h6.H;
            this.K = h6.K;
            this.I = str;
        } catch (JSONException e9) {
            throw new IllegalArgumentException(e9);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:101:0x0287  */
    /* JADX WARN: Removed duplicated region for block: B:104:0x02a3  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x02c0  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x02dc  */
    /* JADX WARN: Removed duplicated region for block: B:113:0x02f7  */
    /* JADX WARN: Removed duplicated region for block: B:116:0x0313  */
    /* JADX WARN: Removed duplicated region for block: B:119:0x032f  */
    /* JADX WARN: Removed duplicated region for block: B:122:0x034b  */
    /* JADX WARN: Removed duplicated region for block: B:148:0x0357  */
    /* JADX WARN: Removed duplicated region for block: B:149:0x0341  */
    /* JADX WARN: Removed duplicated region for block: B:150:0x0325  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0309  */
    /* JADX WARN: Removed duplicated region for block: B:152:0x02ed  */
    /* JADX WARN: Removed duplicated region for block: B:153:0x02d2  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x02b6  */
    /* JADX WARN: Removed duplicated region for block: B:155:0x0299  */
    /* JADX WARN: Removed duplicated region for block: B:156:0x027d  */
    /* JADX WARN: Removed duplicated region for block: B:157:0x0261  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0212  */
    /* JADX WARN: Removed duplicated region for block: B:98:0x026b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static v h(JSONObject jSONObject) {
        ArrayList arrayList;
        l lVar;
        int i5;
        AuthenticationExtensions authenticationExtensions;
        e eVar;
        ArrayList arrayList2;
        q0 q0Var;
        q0 h6;
        x0 x0Var;
        y0 y0Var;
        JSONArray jSONArray;
        String str;
        ArrayList arrayList3;
        JSONArray jSONArray2;
        String str2;
        bg.e eVar2;
        JSONObject jSONObject2 = jSONObject.getJSONObject("rp");
        String str3 = StackTraceHelper.ID_KEY;
        y yVar = new y(jSONObject2.getString(StackTraceHelper.ID_KEY), jSONObject2.getString(StackTraceHelper.NAME_KEY), jSONObject2.has("icon") ? jSONObject2.optString("icon") : null);
        JSONObject jSONObject3 = jSONObject.getJSONObject("user");
        b0 b0Var = new b0(jSONObject3.getString(StackTraceHelper.NAME_KEY), jSONObject3.has("icon") ? jSONObject3.optString("icon") : null, jSONObject3.optString("displayName"), gf.c.a(jSONObject3.getString(StackTraceHelper.ID_KEY)));
        byte[] a = gf.c.a(jSONObject.getString("challenge"));
        bf.t.g(a);
        JSONArray jSONArray3 = jSONObject.getJSONArray("pubKeyCredParams");
        ArrayList arrayList4 = new ArrayList();
        for (int i6 = 0; i6 < jSONArray3.length(); i6++) {
            JSONObject jSONObject4 = jSONArray3.getJSONObject(i6);
            try {
                eVar2 = new bg.f(new x(jSONObject4.getString("type"), jSONObject4.getInt("alg")));
            } catch (IllegalArgumentException unused) {
                eVar2 = bg.c.f2937d;
            }
            if (eVar2.b()) {
                arrayList4.add((x) eVar2.a());
            }
        }
        Double valueOf = jSONObject.has("timeout") ? Double.valueOf(jSONObject.getDouble("timeout") / 1000.0d) : null;
        int i10 = 11;
        if (jSONObject.has("excludeCredentials")) {
            JSONArray jSONArray4 = jSONObject.getJSONArray("excludeCredentials");
            ArrayList arrayList5 = new ArrayList();
            int i11 = 0;
            while (i11 < jSONArray4.length()) {
                JSONObject jSONObject5 = jSONArray4.getJSONObject(i11);
                Parcelable.Creator<w> creator = w.CREATOR;
                String string = jSONObject5.getString("type");
                byte[] decode = Base64.decode(jSONObject5.getString(str3), i10);
                if (!jSONObject5.has("transports") || (jSONArray2 = jSONObject5.getJSONArray("transports")) == null) {
                    jSONArray = jSONArray4;
                    str = str3;
                    arrayList3 = null;
                } else {
                    HashSet hashSet = new HashSet(jSONArray2.length());
                    jSONArray = jSONArray4;
                    int i12 = 0;
                    while (i12 < jSONArray2.length()) {
                        String string2 = jSONArray2.getString(i12);
                        if (string2 == null || string2.isEmpty()) {
                            str2 = str3;
                        } else {
                            str2 = str3;
                            try {
                                hashSet.add(Transport.a(string2));
                            } catch (pf.a unused2) {
                                Log.w("Transport", "Ignoring unrecognized transport ".concat(string2));
                            }
                        }
                        i12++;
                        str3 = str2;
                    }
                    str = str3;
                    arrayList3 = new ArrayList(hashSet);
                }
                arrayList5.add(new w(string, decode, arrayList3));
                i11++;
                jSONArray4 = jSONArray;
                str3 = str;
                i10 = 11;
            }
            arrayList = arrayList5;
        } else {
            arrayList = null;
        }
        if (jSONObject.has("authenticatorSelection")) {
            JSONObject jSONObject6 = jSONObject.getJSONObject("authenticatorSelection");
            lVar = new l(jSONObject6.has("authenticatorAttachment") ? jSONObject6.optString("authenticatorAttachment") : null, jSONObject6.has("requireResidentKey") ? Boolean.valueOf(jSONObject6.optBoolean("requireResidentKey")) : null, jSONObject6.has("userVerification") ? jSONObject6.optString("userVerification") : null, jSONObject6.has("residentKey") ? jSONObject6.optString("residentKey") : null);
        } else {
            lVar = null;
        }
        if (jSONObject.has("extensions")) {
            JSONObject jSONObject7 = jSONObject.getJSONObject("extensions");
            r rVar = jSONObject7.has("fidoAppIdExtension") ? new r(jSONObject7.getJSONObject("fidoAppIdExtension").getString(AppsFlyerProperties.APP_ID)) : null;
            if (jSONObject7.has(AppsFlyerProperties.APP_ID)) {
                rVar = new r(jSONObject7.getString(AppsFlyerProperties.APP_ID));
            }
            r rVar2 = rVar;
            if (!jSONObject7.has("prf")) {
                i5 = 0;
                if (jSONObject7.has("prfAlreadyHashed")) {
                    h6 = q0.h(jSONObject7.getJSONObject("prfAlreadyHashed"), true);
                } else {
                    q0Var = null;
                    if (jSONObject7.has("cableAuthenticationExtension")) {
                        x0Var = null;
                    } else {
                        JSONArray jSONArray5 = jSONObject7.getJSONArray("cableAuthenticationExtension");
                        ArrayList arrayList6 = new ArrayList();
                        for (int i13 = i5; i13 < jSONArray5.length(); i13++) {
                            JSONObject jSONObject8 = jSONArray5.getJSONObject(i13);
                            arrayList6.add(new w0(jSONObject8.getLong("version"), Base64.decode(jSONObject8.getString("clientEid"), 11), Base64.decode(jSONObject8.getString("authenticatorEid"), 11), Base64.decode(jSONObject8.getString("sessionPreKey"), 11)));
                        }
                        x0Var = new x0(arrayList6);
                    }
                    i0 i0Var = !jSONObject7.has("userVerificationMethodExtension") ? new i0(jSONObject7.getJSONObject("userVerificationMethodExtension").getBoolean("uvm")) : null;
                    z0 z0Var = !jSONObject7.has("google_multiAssertionExtension") ? new z0(jSONObject7.getJSONObject("google_multiAssertionExtension").getBoolean("requestForMultiAssertion")) : null;
                    m0 m0Var = !jSONObject7.has("google_sessionIdExtension") ? new m0(jSONObject7.getJSONObject("google_sessionIdExtension").getInt("sessionId")) : null;
                    n0 n0Var = !jSONObject7.has("google_silentVerificationExtension") ? new n0(jSONObject7.getJSONObject("google_silentVerificationExtension").getBoolean("silentVerification")) : null;
                    if (jSONObject7.has("devicePublicKeyExtension")) {
                        y0Var = null;
                    } else {
                        jSONObject7.getJSONObject("devicePublicKeyExtension").getBoolean("devicePublicKey");
                        y0Var = new y0();
                    }
                    authenticationExtensions = new AuthenticationExtensions(rVar2, x0Var, i0Var, z0Var, m0Var, n0Var, y0Var, !jSONObject7.has("google_tunnelServerIdExtension") ? new o0(jSONObject7.getJSONObject("google_tunnelServerIdExtension").getString("tunnelServerId")) : null, !jSONObject7.has("google_thirdPartyPaymentExtension") ? new s(jSONObject7.getJSONObject("google_thirdPartyPaymentExtension").getBoolean("thirdPartyPayment")) : null, q0Var, !jSONObject7.has("txAuthSimple") ? new r0(jSONObject7.getString("txAuthSimple")) : null, null, !jSONObject7.has("payment") ? new t(jSONObject7.getJSONObject("payment").getBoolean("isPayment")) : null);
                }
            } else {
                if (jSONObject7.has("prfAlreadyHashed")) {
                    throw new JSONException("both prf and prfAlreadyHashed extensions found");
                }
                i5 = 0;
                h6 = q0.h(jSONObject7.getJSONObject("prf"), false);
            }
            q0Var = h6;
            if (jSONObject7.has("cableAuthenticationExtension")) {
            }
            if (!jSONObject7.has("userVerificationMethodExtension")) {
            }
            if (!jSONObject7.has("google_multiAssertionExtension")) {
            }
            if (!jSONObject7.has("google_sessionIdExtension")) {
            }
            if (!jSONObject7.has("google_silentVerificationExtension")) {
            }
            if (jSONObject7.has("devicePublicKeyExtension")) {
            }
            if (!jSONObject7.has("google_tunnelServerIdExtension")) {
            }
            if (!jSONObject7.has("google_thirdPartyPaymentExtension")) {
            }
            if (!jSONObject7.has("payment")) {
            }
            authenticationExtensions = new AuthenticationExtensions(rVar2, x0Var, i0Var, z0Var, m0Var, n0Var, y0Var, !jSONObject7.has("google_tunnelServerIdExtension") ? new o0(jSONObject7.getJSONObject("google_tunnelServerIdExtension").getString("tunnelServerId")) : null, !jSONObject7.has("google_thirdPartyPaymentExtension") ? new s(jSONObject7.getJSONObject("google_thirdPartyPaymentExtension").getBoolean("thirdPartyPayment")) : null, q0Var, !jSONObject7.has("txAuthSimple") ? new r0(jSONObject7.getString("txAuthSimple")) : null, null, !jSONObject7.has("payment") ? new t(jSONObject7.getJSONObject("payment").getBoolean("isPayment")) : null);
        } else {
            i5 = 0;
            authenticationExtensions = null;
        }
        if (jSONObject.has("attestation")) {
            try {
                eVar = e.a(jSONObject.getString("attestation"));
            } catch (d e9) {
                Log.w("PKCCreationOptions", "Invalid AttestationConveyancePreference", e9);
                eVar = e.NONE;
            }
        } else {
            eVar = null;
        }
        if (jSONObject.has("attestationFormats")) {
            JSONArray jSONArray6 = jSONObject.getJSONArray("attestationFormats");
            ArrayList arrayList7 = new ArrayList();
            while (i5 < jSONArray6.length()) {
                arrayList7.add(jSONArray6.getString(i5));
                i5++;
            }
            arrayList2 = arrayList7;
        } else {
            arrayList2 = null;
        }
        return new v(yVar, b0Var, a, arrayList4, valueOf, arrayList, lVar, null, null, eVar == null ? null : eVar.f17291d, authenticationExtensions, null, null, arrayList2);
    }

    public final boolean equals(Object obj) {
        List list;
        if (!(obj instanceof v)) {
            return false;
        }
        v vVar = (v) obj;
        List list2 = vVar.f17364v;
        List list3 = vVar.K;
        List list4 = vVar.f17366x;
        if (bf.t.j(this.f17361d, vVar.f17361d) && bf.t.j(this.f17362e, vVar.f17362e) && Arrays.equals(this.f17363i, vVar.f17363i) && bf.t.j(this.f17365w, vVar.f17365w)) {
            List list5 = this.f17364v;
            if (list5.containsAll(list2) && list2.containsAll(list5) && ((((list = this.f17366x) == null && list4 == null) || (list != null && list4 != null && list.containsAll(list4) && list4.containsAll(list))) && bf.t.j(this.f17367y, vVar.f17367y) && bf.t.j(this.E, vVar.E) && bf.t.j(this.F, vVar.F) && bf.t.j(this.G, vVar.G) && bf.t.j(this.H, vVar.H) && bf.t.j(this.I, vVar.I))) {
                List list6 = this.K;
                if (list6 == null && list3 == null) {
                    return true;
                }
                return list6 != null && list3 != null && list6.containsAll(list3) && list3.containsAll(list6);
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17361d, this.f17362e, Integer.valueOf(Arrays.hashCode(this.f17363i)), this.f17364v, this.f17365w, this.f17366x, this.f17367y, this.E, this.F, this.G, this.H, this.I, this.K});
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f17361d);
        String valueOf2 = String.valueOf(this.f17362e);
        String b10 = gf.c.b(this.f17363i);
        String valueOf3 = String.valueOf(this.f17364v);
        String valueOf4 = String.valueOf(this.f17366x);
        String valueOf5 = String.valueOf(this.f17367y);
        String valueOf6 = String.valueOf(this.F);
        String valueOf7 = String.valueOf(this.G);
        String valueOf8 = String.valueOf(this.H);
        String valueOf9 = String.valueOf(this.K);
        StringBuilder t5 = a3.e.t("PublicKeyCredentialCreationOptions{\n rp=", valueOf, ", \n user=", valueOf2, ", \n challenge=");
        a3.e.A(t5, b10, ", \n parameters=", valueOf3, ", \n timeoutSeconds=");
        t5.append(this.f17365w);
        t5.append(", \n excludeList=");
        t5.append(valueOf4);
        t5.append(", \n authenticatorSelection=");
        t5.append(valueOf5);
        t5.append(", \n requestId=");
        k0.d.r(this.E, ", \n tokenBinding=", valueOf6, ", \n attestationConveyancePreference=", t5);
        a3.e.A(t5, valueOf7, ", \n authenticationExtensions=", valueOf8, ", \n attestationFormats=");
        return com.discord.chat.bridge.botuikit.a.j(t5, valueOf9, "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.C(parcel, 2, this.f17361d, i5);
        ys.l.C(parcel, 3, this.f17362e, i5);
        ys.l.A(parcel, 4, this.f17363i);
        ys.l.G(parcel, 5, this.f17364v);
        Double d6 = this.f17365w;
        if (d6 != null) {
            ys.l.H(parcel, 6, 8);
            parcel.writeDouble(d6.doubleValue());
        }
        ys.l.G(parcel, 7, this.f17366x);
        ys.l.C(parcel, 8, this.f17367y, i5);
        ys.l.B(parcel, 9, this.E);
        ys.l.C(parcel, 10, this.F, i5);
        e eVar = this.G;
        ys.l.D(eVar == null ? null : eVar.f17291d, parcel, 11);
        ys.l.C(parcel, 12, this.H, i5);
        ys.l.D(this.I, parcel, 13);
        ys.l.C(parcel, 14, this.J, i5);
        ys.l.E(parcel, 15, this.K);
        ys.l.J(I, parcel);
    }

    public v(y yVar, b0 b0Var, byte[] bArr, ArrayList arrayList, Double d6, ArrayList arrayList2, l lVar, Integer num, h0 h0Var, String str, AuthenticationExtensions authenticationExtensions, String str2, ResultReceiver resultReceiver, ArrayList arrayList3) {
        this.J = resultReceiver;
        if (str2 != null) {
            try {
                v h6 = h(new JSONObject(str2));
                this.f17361d = h6.f17361d;
                this.f17362e = h6.f17362e;
                this.f17363i = h6.f17363i;
                this.f17364v = h6.f17364v;
                this.f17365w = h6.f17365w;
                this.f17366x = h6.f17366x;
                this.f17367y = h6.f17367y;
                this.E = h6.E;
                this.F = h6.F;
                this.G = h6.G;
                this.H = h6.H;
                this.K = h6.K;
                this.I = str2;
                return;
            } catch (JSONException e9) {
                throw new IllegalArgumentException(e9);
            }
        }
        bf.t.g(yVar);
        this.f17361d = yVar;
        bf.t.g(b0Var);
        this.f17362e = b0Var;
        bf.t.g(bArr);
        this.f17363i = bArr;
        bf.t.g(arrayList);
        this.f17364v = arrayList;
        this.f17365w = d6;
        this.f17366x = arrayList2;
        this.f17367y = lVar;
        this.E = num;
        this.F = h0Var;
        if (str != null) {
            try {
                this.G = e.a(str);
            } catch (d e10) {
                throw new IllegalArgumentException(e10);
            }
        } else {
            this.G = null;
        }
        this.H = authenticationExtensions;
        this.I = null;
        this.K = arrayList3;
    }
}
