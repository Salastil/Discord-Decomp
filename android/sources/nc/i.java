package nc;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.UUID;

/* loaded from: classes3.dex */
public final class i implements Comparator, Parcelable {
    public static final Parcelable.Creator<i> CREATOR = new kf.b(4);

    /* renamed from: d, reason: collision with root package name */
    public final h[] f15037d;

    /* renamed from: e, reason: collision with root package name */
    public int f15038e;

    /* renamed from: i, reason: collision with root package name */
    public final String f15039i;

    /* renamed from: v, reason: collision with root package name */
    public final int f15040v;

    public i(String str, ArrayList arrayList) {
        this(str, false, (h[]) arrayList.toArray(new h[0]));
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        h hVar = (h) obj;
        h hVar2 = (h) obj2;
        UUID uuid = hc.h.a;
        return uuid.equals(hVar.f15033e) ? uuid.equals(hVar2.f15033e) ? 0 : 1 : hVar.f15033e.compareTo(hVar2.f15033e);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    @Override // java.util.Comparator
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && i.class == obj.getClass()) {
            i iVar = (i) obj;
            if (ke.d0.a(this.f15039i, iVar.f15039i) && Arrays.equals(this.f15037d, iVar.f15037d)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        if (this.f15038e == 0) {
            String str = this.f15039i;
            this.f15038e = ((str == null ? 0 : str.hashCode()) * 31) + Arrays.hashCode(this.f15037d);
        }
        return this.f15038e;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f15039i);
        parcel.writeTypedArray(this.f15037d, 0);
    }

    public final i x(String str) {
        return ke.d0.a(this.f15039i, str) ? this : new i(str, false, this.f15037d);
    }

    public i(h... hVarArr) {
        this(null, true, hVarArr);
    }

    public i(String str, boolean z5, h... hVarArr) {
        this.f15039i = str;
        hVarArr = z5 ? (h[]) hVarArr.clone() : hVarArr;
        this.f15037d = hVarArr;
        this.f15040v = hVarArr.length;
        Arrays.sort(hVarArr, this);
    }

    public i(Parcel parcel) {
        this.f15039i = parcel.readString();
        h[] hVarArr = (h[]) parcel.createTypedArray(h.CREATOR);
        int i5 = ke.d0.a;
        this.f15037d = hVarArr;
        this.f15040v = hVarArr.length;
    }
}
