package kd;

import android.os.Parcel;
import android.os.Parcelable;
import ke.w;

/* loaded from: classes3.dex */
public final class j extends b {
    public static final Parcelable.Creator<j> CREATOR = new gd.a(29);

    /* renamed from: d, reason: collision with root package name */
    public final long f13271d;

    /* renamed from: e, reason: collision with root package name */
    public final long f13272e;

    public j(long j, long j5) {
        this.f13271d = j;
        this.f13272e = j5;
    }

    public static long a(long j, w wVar) {
        long u5 = wVar.u();
        if ((128 & u5) != 0) {
            return 8589934591L & ((((u5 & 1) << 32) | wVar.v()) + j);
        }
        return -9223372036854775807L;
    }

    @Override // kd.b
    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SCTE-35 TimeSignalCommand { ptsTime=");
        sb2.append(this.f13271d);
        sb2.append(", playbackPositionUs= ");
        return a3.e.m(sb2, this.f13272e, " }");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeLong(this.f13271d);
        parcel.writeLong(this.f13272e);
    }
}
