package se;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import rf.s0;
import ys.l;

/* loaded from: classes3.dex */
public final class a extends cf.a {

    @NonNull
    public static final Parcelable.Creator<a> CREATOR = new s0(24);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17956d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17957e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17958i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f17959v;

    /* renamed from: w, reason: collision with root package name */
    public final String f17960w;

    /* renamed from: x, reason: collision with root package name */
    public final ArrayList f17961x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f17962y;

    public a(boolean z5, String str, String str2, boolean z6, String str3, ArrayList arrayList, boolean z7) {
        boolean z8 = true;
        if (z6 && z7) {
            z8 = false;
        }
        t.a("filterByAuthorizedAccounts and requestVerifiedPhoneNumber must not both be true; the Verified Phone Number feature only works in sign-ups.", z8);
        this.f17956d = z5;
        if (z5) {
            t.h(str, "serverClientId must be provided if Google ID tokens are requested");
        }
        this.f17957e = str;
        this.f17958i = str2;
        this.f17959v = z6;
        ArrayList arrayList2 = null;
        if (arrayList != null && !arrayList.isEmpty()) {
            arrayList2 = new ArrayList(arrayList);
            Collections.sort(arrayList2);
        }
        this.f17961x = arrayList2;
        this.f17960w = str3;
        this.f17962y = z7;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        return this.f17956d == aVar.f17956d && t.j(this.f17957e, aVar.f17957e) && t.j(this.f17958i, aVar.f17958i) && this.f17959v == aVar.f17959v && t.j(this.f17960w, aVar.f17960w) && t.j(this.f17961x, aVar.f17961x) && this.f17962y == aVar.f17962y;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17956d), this.f17957e, this.f17958i, Boolean.valueOf(this.f17959v), this.f17960w, this.f17961x, Boolean.valueOf(this.f17962y)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f17956d ? 1 : 0);
        l.D(this.f17957e, parcel, 2);
        l.D(this.f17958i, parcel, 3);
        l.H(parcel, 4, 4);
        parcel.writeInt(this.f17959v ? 1 : 0);
        l.D(this.f17960w, parcel, 5);
        l.E(parcel, 6, this.f17961x);
        l.H(parcel, 7, 4);
        parcel.writeInt(this.f17962y ? 1 : 0);
        l.J(I, parcel);
    }
}
