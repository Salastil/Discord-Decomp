package com.google.android.gms.auth.api.signin;

import android.accounts.Account;
import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import androidx.annotation.NonNull;
import cf.a;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.internal.ReflectedParcelable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import org.json.JSONArray;
import org.json.JSONObject;
import ue.c;
import ys.l;
import ze.b;

@Deprecated
/* loaded from: classes3.dex */
public class GoogleSignInOptions extends a implements b, ReflectedParcelable {

    @NonNull
    public static final Parcelable.Creator<GoogleSignInOptions> CREATOR;
    public static final GoogleSignInOptions H;
    public static final Scope I;
    public static final Scope J;
    public static final Scope K;
    public static final ue.b L;
    public final String E;
    public final ArrayList F;
    public final String G;

    /* renamed from: d, reason: collision with root package name */
    public final int f5624d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f5625e;

    /* renamed from: i, reason: collision with root package name */
    public final Account f5626i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f5627v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f5628w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f5629x;

    /* renamed from: y, reason: collision with root package name */
    public final String f5630y;

    static {
        Scope scope = new Scope(1, "profile");
        new Scope(1, "email");
        Scope scope2 = new Scope(1, "openid");
        I = scope2;
        Scope scope3 = new Scope(1, "https://www.googleapis.com/auth/games_lite");
        J = scope3;
        K = new Scope(1, "https://www.googleapis.com/auth/games");
        HashSet hashSet = new HashSet();
        HashMap hashMap = new HashMap();
        hashSet.add(scope2);
        hashSet.add(scope);
        if (hashSet.contains(K)) {
            Scope scope4 = J;
            if (hashSet.contains(scope4)) {
                hashSet.remove(scope4);
            }
        }
        H = new GoogleSignInOptions(3, new ArrayList(hashSet), null, false, false, false, null, null, hashMap, null);
        HashSet hashSet2 = new HashSet();
        HashMap hashMap2 = new HashMap();
        hashSet2.add(scope3);
        hashSet2.addAll(Arrays.asList(new Scope[0]));
        if (hashSet2.contains(K)) {
            Scope scope5 = J;
            if (hashSet2.contains(scope5)) {
                hashSet2.remove(scope5);
            }
        }
        new GoogleSignInOptions(3, new ArrayList(hashSet2), null, false, false, false, null, null, hashMap2, null);
        int i5 = 1;
        CREATOR = new c(i5);
        L = new ue.b(i5);
    }

    public GoogleSignInOptions(int i5, ArrayList arrayList, Account account, boolean z5, boolean z6, boolean z7, String str, String str2, HashMap hashMap, String str3) {
        this.f5624d = i5;
        this.f5625e = arrayList;
        this.f5626i = account;
        this.f5627v = z5;
        this.f5628w = z6;
        this.f5629x = z7;
        this.f5630y = str;
        this.E = str2;
        this.F = new ArrayList(hashMap.values());
        this.G = str3;
    }

    public static GoogleSignInOptions h(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        JSONObject jSONObject = new JSONObject(str);
        HashSet hashSet = new HashSet();
        JSONArray jSONArray = jSONObject.getJSONArray("scopes");
        int length = jSONArray.length();
        for (int i5 = 0; i5 < length; i5++) {
            hashSet.add(new Scope(1, jSONArray.getString(i5)));
        }
        String optString = jSONObject.has("accountName") ? jSONObject.optString("accountName") : null;
        return new GoogleSignInOptions(3, new ArrayList(hashSet), !TextUtils.isEmpty(optString) ? new Account(optString, "com.google") : null, jSONObject.getBoolean("idTokenRequested"), jSONObject.getBoolean("serverAuthRequested"), jSONObject.getBoolean("forceCodeForRefreshToken"), jSONObject.has("serverClientId") ? jSONObject.optString("serverClientId") : null, jSONObject.has("hostedDomain") ? jSONObject.optString("hostedDomain") : null, new HashMap(), null);
    }

    public static HashMap i(ArrayList arrayList) {
        HashMap hashMap = new HashMap();
        if (arrayList != null) {
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                ve.a aVar = (ve.a) it.next();
                hashMap.put(Integer.valueOf(aVar.f19385e), aVar);
            }
        }
        return hashMap;
    }

    public final boolean equals(Object obj) {
        String str = this.f5630y;
        ArrayList arrayList = this.f5625e;
        if (obj == null) {
            return false;
        }
        try {
            GoogleSignInOptions googleSignInOptions = (GoogleSignInOptions) obj;
            ArrayList arrayList2 = googleSignInOptions.f5625e;
            String str2 = googleSignInOptions.f5630y;
            Account account = googleSignInOptions.f5626i;
            if (this.F.isEmpty() && googleSignInOptions.F.isEmpty() && arrayList.size() == new ArrayList(arrayList2).size() && arrayList.containsAll(new ArrayList(arrayList2))) {
                Account account2 = this.f5626i;
                if (account2 == null) {
                    if (account != null) {
                        return false;
                    }
                } else if (!account2.equals(account)) {
                    return false;
                }
                if (TextUtils.isEmpty(str)) {
                    if (!TextUtils.isEmpty(str2)) {
                        return false;
                    }
                } else if (!str.equals(str2)) {
                    return false;
                }
                if (this.f5629x == googleSignInOptions.f5629x && this.f5627v == googleSignInOptions.f5627v && this.f5628w == googleSignInOptions.f5628w) {
                    return TextUtils.equals(this.G, googleSignInOptions.G);
                }
                return false;
            }
            return false;
        } catch (ClassCastException unused) {
            return false;
        }
    }

    public final int hashCode() {
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = this.f5625e;
        int size = arrayList2.size();
        for (int i5 = 0; i5 < size; i5++) {
            arrayList.add(((Scope) arrayList2.get(i5)).f5653e);
        }
        Collections.sort(arrayList);
        int hashCode = (arrayList.hashCode() + (1 * 31)) * 31;
        Account account = this.f5626i;
        int hashCode2 = (hashCode + (account == null ? 0 : account.hashCode())) * 31;
        String str = this.f5630y;
        int hashCode3 = (((((((hashCode2 + (str == null ? 0 : str.hashCode())) * 31) + (this.f5629x ? 1 : 0)) * 31) + (this.f5627v ? 1 : 0)) * 31) + (this.f5628w ? 1 : 0)) * 31;
        String str2 = this.G;
        return hashCode3 + (str2 != null ? str2.hashCode() : 0);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I2 = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f5624d);
        l.G(parcel, 2, new ArrayList(this.f5625e));
        l.C(parcel, 3, this.f5626i, i5);
        l.H(parcel, 4, 4);
        parcel.writeInt(this.f5627v ? 1 : 0);
        l.H(parcel, 5, 4);
        parcel.writeInt(this.f5628w ? 1 : 0);
        l.H(parcel, 6, 4);
        parcel.writeInt(this.f5629x ? 1 : 0);
        l.D(this.f5630y, parcel, 7);
        l.D(this.E, parcel, 8);
        l.G(parcel, 9, this.F);
        l.D(this.G, parcel, 10);
        l.J(I2, parcel);
    }
}
