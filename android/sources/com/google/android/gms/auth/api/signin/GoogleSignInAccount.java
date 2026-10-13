package com.google.android.gms.auth.api.signin;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import androidx.annotation.NonNull;
import bf.t;
import cf.a;
import com.facebook.react.devsupport.StackTraceHelper;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.ReflectedParcelable;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;
import ue.c;
import ys.l;

@Deprecated
/* loaded from: classes3.dex */
public class GoogleSignInAccount extends a implements ReflectedParcelable {

    @NonNull
    public static final Parcelable.Creator<GoogleSignInAccount> CREATOR = new c(0);
    public final long E;
    public final String F;
    public final List G;
    public final String H;
    public final String I;
    public final HashSet J = new HashSet();

    /* renamed from: d, reason: collision with root package name */
    public final int f5617d;

    /* renamed from: e, reason: collision with root package name */
    public final String f5618e;

    /* renamed from: i, reason: collision with root package name */
    public final String f5619i;

    /* renamed from: v, reason: collision with root package name */
    public final String f5620v;

    /* renamed from: w, reason: collision with root package name */
    public final String f5621w;

    /* renamed from: x, reason: collision with root package name */
    public final Uri f5622x;

    /* renamed from: y, reason: collision with root package name */
    public String f5623y;

    public GoogleSignInAccount(int i5, String str, String str2, String str3, String str4, Uri uri, String str5, long j, String str6, ArrayList arrayList, String str7, String str8) {
        this.f5617d = i5;
        this.f5618e = str;
        this.f5619i = str2;
        this.f5620v = str3;
        this.f5621w = str4;
        this.f5622x = uri;
        this.f5623y = str5;
        this.E = j;
        this.F = str6;
        this.G = arrayList;
        this.H = str7;
        this.I = str8;
    }

    public static GoogleSignInAccount h(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        JSONObject jSONObject = new JSONObject(str);
        String optString = jSONObject.optString("photoUrl");
        Uri parse = !TextUtils.isEmpty(optString) ? Uri.parse(optString) : null;
        long parseLong = Long.parseLong(jSONObject.getString("expirationTime"));
        HashSet hashSet = new HashSet();
        JSONArray jSONArray = jSONObject.getJSONArray("grantedScopes");
        int length = jSONArray.length();
        for (int i5 = 0; i5 < length; i5++) {
            hashSet.add(new Scope(1, jSONArray.getString(i5)));
        }
        String optString2 = jSONObject.optString(StackTraceHelper.ID_KEY);
        String optString3 = jSONObject.has("tokenId") ? jSONObject.optString("tokenId") : null;
        String optString4 = jSONObject.has("email") ? jSONObject.optString("email") : null;
        String optString5 = jSONObject.has("displayName") ? jSONObject.optString("displayName") : null;
        String optString6 = jSONObject.has("givenName") ? jSONObject.optString("givenName") : null;
        String optString7 = jSONObject.has("familyName") ? jSONObject.optString("familyName") : null;
        String string = jSONObject.getString("obfuscatedIdentifier");
        t.d(string);
        GoogleSignInAccount googleSignInAccount = new GoogleSignInAccount(3, optString2, optString3, optString4, optString5, parse, null, parseLong, string, new ArrayList(hashSet), optString6, optString7);
        googleSignInAccount.f5623y = jSONObject.has("serverAuthCode") ? jSONObject.optString("serverAuthCode") : null;
        return googleSignInAccount;
    }

    public final boolean equals(Object obj) {
        if (obj == null) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof GoogleSignInAccount)) {
            return false;
        }
        GoogleSignInAccount googleSignInAccount = (GoogleSignInAccount) obj;
        if (!googleSignInAccount.F.equals(this.F)) {
            return false;
        }
        HashSet hashSet = new HashSet(googleSignInAccount.G);
        hashSet.addAll(googleSignInAccount.J);
        HashSet hashSet2 = new HashSet(this.G);
        hashSet2.addAll(this.J);
        return hashSet.equals(hashSet2);
    }

    public final int hashCode() {
        int hashCode = this.F.hashCode() + 527;
        HashSet hashSet = new HashSet(this.G);
        hashSet.addAll(this.J);
        return (hashCode * 31) + hashSet.hashCode();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f5617d);
        l.D(this.f5618e, parcel, 2);
        l.D(this.f5619i, parcel, 3);
        l.D(this.f5620v, parcel, 4);
        l.D(this.f5621w, parcel, 5);
        l.C(parcel, 6, this.f5622x, i5);
        l.D(this.f5623y, parcel, 7);
        l.H(parcel, 8, 8);
        parcel.writeLong(this.E);
        l.D(this.F, parcel, 9);
        l.G(parcel, 10, this.G);
        l.D(this.H, parcel, 11);
        l.D(this.I, parcel, 12);
        l.J(I, parcel);
    }
}
