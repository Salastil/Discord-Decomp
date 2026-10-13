package kd;

import android.os.Parcel;
import android.os.Parcelable;
import ke.d0;

/* loaded from: classes3.dex */
public final class a extends b {
    public static final Parcelable.Creator<a> CREATOR = new gd.a(25);

    /* renamed from: d, reason: collision with root package name */
    public final long f13247d;

    /* renamed from: e, reason: collision with root package name */
    public final long f13248e;

    /* renamed from: i, reason: collision with root package name */
    public final byte[] f13249i;

    public a(long j, long j5, byte[] bArr) {
        this.f13247d = j5;
        this.f13248e = j;
        this.f13249i = bArr;
    }

    @Override // kd.b
    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SCTE-35 PrivateCommand { ptsAdjustment=");
        sb2.append(this.f13247d);
        sb2.append(", identifier= ");
        return a3.e.m(sb2, this.f13248e, " }");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeLong(this.f13247d);
        parcel.writeLong(this.f13248e);
        parcel.writeByteArray(this.f13249i);
    }

    public a(Parcel parcel) {
        this.f13247d = parcel.readLong();
        this.f13248e = parcel.readLong();
        byte[] createByteArray = parcel.createByteArray();
        int i5 = d0.a;
        this.f13249i = createByteArray;
    }
}
