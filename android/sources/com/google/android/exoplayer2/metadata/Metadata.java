package com.google.android.exoplayer2.metadata;

import android.os.Parcel;
import android.os.Parcelable;
import dd.a;
import dd.b;
import java.util.Arrays;
import java.util.List;
import ke.d0;
import ks.n;

/* loaded from: classes3.dex */
public final class Metadata implements Parcelable {
    public static final Parcelable.Creator<Metadata> CREATOR = new a();

    /* renamed from: d, reason: collision with root package name */
    public final b[] f5427d;

    /* renamed from: e, reason: collision with root package name */
    public final long f5428e;

    public Metadata(b... bVarArr) {
        this(-9223372036854775807L, bVarArr);
    }

    public final Metadata a(b... bVarArr) {
        if (bVarArr.length == 0) {
            return this;
        }
        int i5 = d0.a;
        b[] bVarArr2 = this.f5427d;
        Object[] copyOf = Arrays.copyOf(bVarArr2, bVarArr2.length + bVarArr.length);
        System.arraycopy(bVarArr, 0, copyOf, bVarArr2.length, bVarArr.length);
        return new Metadata(this.f5428e, (b[]) copyOf);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && Metadata.class == obj.getClass()) {
            Metadata metadata = (Metadata) obj;
            if (Arrays.equals(this.f5427d, metadata.f5427d) && this.f5428e == metadata.f5428e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return n.p(this.f5428e) + (Arrays.hashCode(this.f5427d) * 31);
    }

    public final String toString() {
        String str;
        StringBuilder sb2 = new StringBuilder("entries=");
        sb2.append(Arrays.toString(this.f5427d));
        long j = this.f5428e;
        if (j == -9223372036854775807L) {
            str = "";
        } else {
            str = ", presentationTimeUs=" + j;
        }
        sb2.append(str);
        return sb2.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        b[] bVarArr = this.f5427d;
        parcel.writeInt(bVarArr.length);
        for (b bVar : bVarArr) {
            parcel.writeParcelable(bVar, 0);
        }
        parcel.writeLong(this.f5428e);
    }

    public Metadata(long j, b... bVarArr) {
        this.f5428e = j;
        this.f5427d = bVarArr;
    }

    public Metadata(List list) {
        this((b[]) list.toArray(new b[0]));
    }

    public Metadata(Parcel parcel) {
        this.f5427d = new b[parcel.readInt()];
        int i5 = 0;
        while (true) {
            b[] bVarArr = this.f5427d;
            if (i5 < bVarArr.length) {
                bVarArr[i5] = (b) parcel.readParcelable(b.class.getClassLoader());
                i5++;
            } else {
                this.f5428e = parcel.readLong();
                return;
            }
        }
    }
}
