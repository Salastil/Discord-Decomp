package kd;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class e extends b {
    public static final Parcelable.Creator<e> CREATOR = new gd.a(26);
    public final List E;
    public final boolean F;
    public final long G;
    public final int H;
    public final int I;
    public final int J;

    /* renamed from: d, reason: collision with root package name */
    public final long f13254d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f13255e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f13256i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f13257v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f13258w;

    /* renamed from: x, reason: collision with root package name */
    public final long f13259x;

    /* renamed from: y, reason: collision with root package name */
    public final long f13260y;

    public e(long j, boolean z5, boolean z6, boolean z7, boolean z8, long j5, long j7, List list, boolean z10, long j10, int i5, int i6, int i10) {
        this.f13254d = j;
        this.f13255e = z5;
        this.f13256i = z6;
        this.f13257v = z7;
        this.f13258w = z8;
        this.f13259x = j5;
        this.f13260y = j7;
        this.E = Collections.unmodifiableList(list);
        this.F = z10;
        this.G = j10;
        this.H = i5;
        this.I = i6;
        this.J = i10;
    }

    @Override // kd.b
    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SCTE-35 SpliceInsertCommand { programSplicePts=");
        sb2.append(this.f13259x);
        sb2.append(", programSplicePlaybackPositionUs= ");
        return a3.e.m(sb2, this.f13260y, " }");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeLong(this.f13254d);
        parcel.writeByte(this.f13255e ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.f13256i ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.f13257v ? (byte) 1 : (byte) 0);
        parcel.writeByte(this.f13258w ? (byte) 1 : (byte) 0);
        parcel.writeLong(this.f13259x);
        parcel.writeLong(this.f13260y);
        List list = this.E;
        int size = list.size();
        parcel.writeInt(size);
        for (int i6 = 0; i6 < size; i6++) {
            d dVar = (d) list.get(i6);
            parcel.writeInt(dVar.a);
            parcel.writeLong(dVar.f13252b);
            parcel.writeLong(dVar.f13253c);
        }
        parcel.writeByte(this.F ? (byte) 1 : (byte) 0);
        parcel.writeLong(this.G);
        parcel.writeInt(this.H);
        parcel.writeInt(this.I);
        parcel.writeInt(this.J);
    }

    public e(Parcel parcel) {
        this.f13254d = parcel.readLong();
        this.f13255e = parcel.readByte() == 1;
        this.f13256i = parcel.readByte() == 1;
        this.f13257v = parcel.readByte() == 1;
        this.f13258w = parcel.readByte() == 1;
        this.f13259x = parcel.readLong();
        this.f13260y = parcel.readLong();
        int readInt = parcel.readInt();
        ArrayList arrayList = new ArrayList(readInt);
        for (int i5 = 0; i5 < readInt; i5++) {
            arrayList.add(new d(parcel.readInt(), parcel.readLong(), parcel.readLong()));
        }
        this.E = Collections.unmodifiableList(arrayList);
        this.F = parcel.readByte() == 1;
        this.G = parcel.readLong();
        this.H = parcel.readInt();
        this.I = parcel.readInt();
        this.J = parcel.readInt();
    }
}
