package rf;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;

/* loaded from: classes3.dex */
public final class x0 extends cf.a {
    public static final Parcelable.Creator<x0> CREATOR = new s0(18);

    /* renamed from: d, reason: collision with root package name */
    public final List f17379d;

    public x0(ArrayList arrayList) {
        bf.t.g(arrayList);
        this.f17379d = arrayList;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof x0)) {
            return false;
        }
        List list = ((x0) obj).f17379d;
        List list2 = this.f17379d;
        return list2.containsAll(list) && list.containsAll(list2);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{new HashSet(this.f17379d)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.G(parcel, 1, this.f17379d);
        ys.l.J(I, parcel);
    }
}
