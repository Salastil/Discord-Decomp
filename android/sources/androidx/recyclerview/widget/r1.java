package androidx.recyclerview.widget;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* loaded from: classes.dex */
public final class r1 implements Parcelable {
    public static final Parcelable.Creator<r1> CREATOR = new q1(0);

    /* renamed from: d, reason: collision with root package name */
    public int f2449d;

    /* renamed from: e, reason: collision with root package name */
    public int f2450e;

    /* renamed from: i, reason: collision with root package name */
    public int[] f2451i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f2452v;

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final String toString() {
        return "FullSpanItem{mPosition=" + this.f2449d + ", mGapDir=" + this.f2450e + ", mHasUnwantedGapAfter=" + this.f2452v + ", mGapPerSpan=" + Arrays.toString(this.f2451i) + '}';
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f2449d);
        parcel.writeInt(this.f2450e);
        parcel.writeInt(this.f2452v ? 1 : 0);
        int[] iArr = this.f2451i;
        if (iArr == null || iArr.length <= 0) {
            parcel.writeInt(0);
        } else {
            parcel.writeInt(iArr.length);
            parcel.writeIntArray(this.f2451i);
        }
    }
}
