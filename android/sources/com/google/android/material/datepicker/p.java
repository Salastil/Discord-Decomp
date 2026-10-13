package com.google.android.material.datepicker;

import android.icu.text.DateFormat;
import android.icu.text.DisplayContext;
import android.icu.util.TimeZone;
import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.Locale;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final class p implements Comparable, Parcelable {
    public static final Parcelable.Creator<p> CREATOR = new android.support.v4.media.a(22);

    /* renamed from: d, reason: collision with root package name */
    public final Calendar f6047d;

    /* renamed from: e, reason: collision with root package name */
    public final int f6048e;

    /* renamed from: i, reason: collision with root package name */
    public final int f6049i;

    /* renamed from: v, reason: collision with root package name */
    public final int f6050v;

    /* renamed from: w, reason: collision with root package name */
    public final int f6051w;

    /* renamed from: x, reason: collision with root package name */
    public final long f6052x;

    /* renamed from: y, reason: collision with root package name */
    public String f6053y;

    public p(Calendar calendar) {
        calendar.set(5, 1);
        Calendar a = y.a(calendar);
        this.f6047d = a;
        this.f6048e = a.get(2);
        this.f6049i = a.get(1);
        this.f6050v = a.getMaximum(7);
        this.f6051w = a.getActualMaximum(5);
        this.f6052x = a.getTimeInMillis();
    }

    public static p a(int i5, int i6) {
        Calendar c6 = y.c(null);
        c6.set(1, i5);
        c6.set(2, i6);
        return new p(c6);
    }

    public static p h(long j) {
        Calendar c6 = y.c(null);
        c6.setTimeInMillis(j);
        return new p(c6);
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f6047d.compareTo(((p) obj).f6047d);
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof p)) {
            return false;
        }
        p pVar = (p) obj;
        return this.f6048e == pVar.f6048e && this.f6049i == pVar.f6049i;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f6048e), Integer.valueOf(this.f6049i)});
    }

    public final String i() {
        if (this.f6053y == null) {
            long timeInMillis = this.f6047d.getTimeInMillis();
            Locale locale = Locale.getDefault();
            AtomicReference atomicReference = y.a;
            DateFormat instanceForSkeleton = DateFormat.getInstanceForSkeleton("yMMMM", locale);
            instanceForSkeleton.setTimeZone(TimeZone.getTimeZone("UTC"));
            instanceForSkeleton.setContext(DisplayContext.CAPITALIZATION_FOR_STANDALONE);
            this.f6053y = instanceForSkeleton.format(new Date(timeInMillis));
        }
        return this.f6053y;
    }

    public final int v(p pVar) {
        if (!(this.f6047d instanceof GregorianCalendar)) {
            throw new IllegalArgumentException("Only Gregorian calendars are supported.");
        }
        return (pVar.f6048e - this.f6048e) + ((pVar.f6049i - this.f6049i) * 12);
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f6049i);
        parcel.writeInt(this.f6048e);
    }
}
