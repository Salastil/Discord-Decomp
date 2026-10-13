package se;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import java.util.Arrays;
import rf.s0;
import ys.l;

/* loaded from: classes3.dex */
public final class e extends cf.a {

    @NonNull
    public static final Parcelable.Creator<e> CREATOR = new s0(22);
    public final boolean E;

    /* renamed from: d, reason: collision with root package name */
    public final d f17969d;

    /* renamed from: e, reason: collision with root package name */
    public final a f17970e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17971i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f17972v;

    /* renamed from: w, reason: collision with root package name */
    public final int f17973w;

    /* renamed from: x, reason: collision with root package name */
    public final c f17974x;

    /* renamed from: y, reason: collision with root package name */
    public final b f17975y;

    public e(d dVar, a aVar, String str, boolean z5, int i5, c cVar, b bVar, boolean z6) {
        t.g(dVar);
        this.f17969d = dVar;
        t.g(aVar);
        this.f17970e = aVar;
        this.f17971i = str;
        this.f17972v = z5;
        this.f17973w = i5;
        this.f17974x = cVar == null ? new c(false, null, null) : cVar;
        this.f17975y = bVar == null ? new b(false, null) : bVar;
        this.E = z6;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof e)) {
            return false;
        }
        e eVar = (e) obj;
        return t.j(this.f17969d, eVar.f17969d) && t.j(this.f17970e, eVar.f17970e) && t.j(this.f17974x, eVar.f17974x) && t.j(this.f17975y, eVar.f17975y) && t.j(this.f17971i, eVar.f17971i) && this.f17972v == eVar.f17972v && this.f17973w == eVar.f17973w && this.E == eVar.E;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17969d, this.f17970e, this.f17974x, this.f17975y, this.f17971i, Boolean.valueOf(this.f17972v), Integer.valueOf(this.f17973w), Boolean.valueOf(this.E)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.C(parcel, 1, this.f17969d, i5);
        l.C(parcel, 2, this.f17970e, i5);
        l.D(this.f17971i, parcel, 3);
        l.H(parcel, 4, 4);
        parcel.writeInt(this.f17972v ? 1 : 0);
        l.H(parcel, 5, 4);
        parcel.writeInt(this.f17973w);
        l.C(parcel, 6, this.f17974x, i5);
        l.C(parcel, 7, this.f17975y, i5);
        l.H(parcel, 8, 4);
        parcel.writeInt(this.E ? 1 : 0);
        l.J(I, parcel);
    }
}
