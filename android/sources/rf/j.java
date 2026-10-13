package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class j extends k {

    @NonNull
    public static final Parcelable.Creator<j> CREATOR = new s0(14);

    /* renamed from: d, reason: collision with root package name */
    public final q f17316d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17317e;

    /* renamed from: i, reason: collision with root package name */
    public final int f17318i;

    public j(int i5, int i6, String str) {
        try {
            this.f17316d = q.a(i5);
            this.f17317e = str;
            this.f17318i = i6;
        } catch (p e9) {
            throw new IllegalArgumentException(e9);
        }
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof j)) {
            return false;
        }
        j jVar = (j) obj;
        return bf.t.j(this.f17316d, jVar.f17316d) && bf.t.j(this.f17317e, jVar.f17317e) && bf.t.j(Integer.valueOf(this.f17318i), Integer.valueOf(jVar.f17318i));
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17316d, this.f17317e, Integer.valueOf(this.f17318i)});
    }

    public final String toString() {
        e4.m mVar = new e4.m(getClass().getSimpleName(), 9);
        String valueOf = String.valueOf(this.f17316d.f17345d);
        bg.d dVar = new bg.d(8, false);
        ((e4.m) mVar.f7965v).f7965v = dVar;
        mVar.f7965v = dVar;
        dVar.f7964i = valueOf;
        dVar.f7963e = "errorCode";
        String str = this.f17317e;
        if (str != null) {
            mVar.k0("errorMessage", str);
        }
        return mVar.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        int i6 = this.f17316d.f17345d;
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(i6);
        ys.l.D(this.f17317e, parcel, 3);
        ys.l.H(parcel, 4, 4);
        parcel.writeInt(this.f17318i);
        ys.l.J(I, parcel);
    }
}
