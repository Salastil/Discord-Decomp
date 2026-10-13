package se;

import android.net.Uri;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import java.util.Arrays;
import rf.s0;
import rf.u;
import ys.l;

/* loaded from: classes3.dex */
public final class g extends cf.a {

    @NonNull
    public static final Parcelable.Creator<g> CREATOR = new s0(28);
    public final String E;
    public final u F;

    /* renamed from: d, reason: collision with root package name */
    public final String f17977d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17978e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17979i;

    /* renamed from: v, reason: collision with root package name */
    public final String f17980v;

    /* renamed from: w, reason: collision with root package name */
    public final Uri f17981w;

    /* renamed from: x, reason: collision with root package name */
    public final String f17982x;

    /* renamed from: y, reason: collision with root package name */
    public final String f17983y;

    public g(String str, String str2, String str3, String str4, Uri uri, String str5, String str6, String str7, u uVar) {
        t.g(str);
        this.f17977d = str;
        this.f17978e = str2;
        this.f17979i = str3;
        this.f17980v = str4;
        this.f17981w = uri;
        this.f17982x = str5;
        this.f17983y = str6;
        this.E = str7;
        this.F = uVar;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        return t.j(this.f17977d, gVar.f17977d) && t.j(this.f17978e, gVar.f17978e) && t.j(this.f17979i, gVar.f17979i) && t.j(this.f17980v, gVar.f17980v) && t.j(this.f17981w, gVar.f17981w) && t.j(this.f17982x, gVar.f17982x) && t.j(this.f17983y, gVar.f17983y) && t.j(this.E, gVar.E) && t.j(this.F, gVar.F);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17977d, this.f17978e, this.f17979i, this.f17980v, this.f17981w, this.f17982x, this.f17983y, this.E, this.F});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.D(this.f17977d, parcel, 1);
        l.D(this.f17978e, parcel, 2);
        l.D(this.f17979i, parcel, 3);
        l.D(this.f17980v, parcel, 4);
        l.C(parcel, 5, this.f17981w, i5);
        l.D(this.f17982x, parcel, 6);
        l.D(this.f17983y, parcel, 7);
        l.D(this.E, parcel, 8);
        l.C(parcel, 9, this.F, i5);
        l.J(I, parcel);
    }
}
