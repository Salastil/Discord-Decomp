package com.google.android.material.datepicker;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class b implements Parcelable {
    public static final Parcelable.Creator<b> CREATOR = new android.support.v4.media.a(20);

    /* renamed from: d, reason: collision with root package name */
    public final p f6008d;

    /* renamed from: e, reason: collision with root package name */
    public final p f6009e;

    /* renamed from: i, reason: collision with root package name */
    public final d f6010i;

    /* renamed from: v, reason: collision with root package name */
    public final p f6011v;

    /* renamed from: w, reason: collision with root package name */
    public final int f6012w;

    /* renamed from: x, reason: collision with root package name */
    public final int f6013x;

    /* renamed from: y, reason: collision with root package name */
    public final int f6014y;

    public b(p pVar, p pVar2, d dVar, p pVar3, int i5) {
        Objects.requireNonNull(pVar, "start cannot be null");
        Objects.requireNonNull(pVar2, "end cannot be null");
        Objects.requireNonNull(dVar, "validator cannot be null");
        this.f6008d = pVar;
        this.f6009e = pVar2;
        this.f6011v = pVar3;
        this.f6012w = i5;
        this.f6010i = dVar;
        if (pVar3 != null && pVar.f6047d.compareTo(pVar3.f6047d) > 0) {
            throw new IllegalArgumentException("start Month cannot be after current Month");
        }
        if (pVar3 != null && pVar3.f6047d.compareTo(pVar2.f6047d) > 0) {
            throw new IllegalArgumentException("current Month cannot be after end Month");
        }
        if (i5 < 0 || i5 > y.c(null).getMaximum(7)) {
            throw new IllegalArgumentException("firstDayOfWeek is not valid");
        }
        this.f6014y = pVar.v(pVar2) + 1;
        this.f6013x = (pVar2.f6049i - pVar.f6049i) + 1;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.f6008d.equals(bVar.f6008d) && this.f6009e.equals(bVar.f6009e) && Objects.equals(this.f6011v, bVar.f6011v) && this.f6012w == bVar.f6012w && this.f6010i.equals(bVar.f6010i);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f6008d, this.f6009e, this.f6011v, Integer.valueOf(this.f6012w), this.f6010i});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeParcelable(this.f6008d, 0);
        parcel.writeParcelable(this.f6009e, 0);
        parcel.writeParcelable(this.f6011v, 0);
        parcel.writeParcelable(this.f6010i, 0);
        parcel.writeInt(this.f6012w);
    }
}
