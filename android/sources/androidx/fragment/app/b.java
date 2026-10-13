package androidx.fragment.app;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class b implements Parcelable {
    public static final Parcelable.Creator<b> CREATOR = new android.support.v4.media.a(6);
    public final int E;
    public final CharSequence F;
    public final int G;
    public final CharSequence H;
    public final ArrayList I;
    public final ArrayList J;
    public final boolean K;

    /* renamed from: d, reason: collision with root package name */
    public final int[] f1966d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f1967e;

    /* renamed from: i, reason: collision with root package name */
    public final int[] f1968i;

    /* renamed from: v, reason: collision with root package name */
    public final int[] f1969v;

    /* renamed from: w, reason: collision with root package name */
    public final int f1970w;

    /* renamed from: x, reason: collision with root package name */
    public final String f1971x;

    /* renamed from: y, reason: collision with root package name */
    public final int f1972y;

    public b(a aVar) {
        int size = aVar.a.size();
        this.f1966d = new int[size * 6];
        if (!aVar.f1942g) {
            throw new IllegalStateException("Not on back stack");
        }
        this.f1967e = new ArrayList(size);
        this.f1968i = new int[size];
        this.f1969v = new int[size];
        int i5 = 0;
        for (int i6 = 0; i6 < size; i6++) {
            m1 m1Var = (m1) aVar.a.get(i6);
            int i10 = i5 + 1;
            this.f1966d[i5] = m1Var.a;
            ArrayList arrayList = this.f1967e;
            Fragment fragment = m1Var.f2048b;
            arrayList.add(fragment != null ? fragment.mWho : null);
            int[] iArr = this.f1966d;
            iArr[i10] = m1Var.f2049c ? 1 : 0;
            iArr[i5 + 2] = m1Var.f2050d;
            iArr[i5 + 3] = m1Var.f2051e;
            int i11 = i5 + 5;
            iArr[i5 + 4] = m1Var.f2052f;
            i5 += 6;
            iArr[i11] = m1Var.f2053g;
            this.f1968i[i6] = m1Var.f2054h.ordinal();
            this.f1969v[i6] = m1Var.f2055i.ordinal();
        }
        this.f1970w = aVar.f1941f;
        this.f1971x = aVar.f1944i;
        this.f1972y = aVar.f1958t;
        this.E = aVar.j;
        this.F = aVar.k;
        this.G = aVar.f1945l;
        this.H = aVar.f1946m;
        this.I = aVar.f1947n;
        this.J = aVar.f1948o;
        this.K = aVar.f1949p;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeIntArray(this.f1966d);
        parcel.writeStringList(this.f1967e);
        parcel.writeIntArray(this.f1968i);
        parcel.writeIntArray(this.f1969v);
        parcel.writeInt(this.f1970w);
        parcel.writeString(this.f1971x);
        parcel.writeInt(this.f1972y);
        parcel.writeInt(this.E);
        TextUtils.writeToParcel(this.F, parcel, 0);
        parcel.writeInt(this.G);
        TextUtils.writeToParcel(this.H, parcel, 0);
        parcel.writeStringList(this.I);
        parcel.writeStringList(this.J);
        parcel.writeInt(this.K ? 1 : 0);
    }

    public b(Parcel parcel) {
        this.f1966d = parcel.createIntArray();
        this.f1967e = parcel.createStringArrayList();
        this.f1968i = parcel.createIntArray();
        this.f1969v = parcel.createIntArray();
        this.f1970w = parcel.readInt();
        this.f1971x = parcel.readString();
        this.f1972y = parcel.readInt();
        this.E = parcel.readInt();
        Parcelable.Creator creator = TextUtils.CHAR_SEQUENCE_CREATOR;
        this.F = (CharSequence) creator.createFromParcel(parcel);
        this.G = parcel.readInt();
        this.H = (CharSequence) creator.createFromParcel(parcel);
        this.I = parcel.createStringArrayList();
        this.J = parcel.createStringArrayList();
        this.K = parcel.readInt() != 0;
    }
}
