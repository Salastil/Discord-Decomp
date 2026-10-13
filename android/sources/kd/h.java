package kd;

import android.os.Parcel;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class h {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f13262b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f13263c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f13264d;

    /* renamed from: e, reason: collision with root package name */
    public final long f13265e;

    /* renamed from: f, reason: collision with root package name */
    public final List f13266f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f13267g;

    /* renamed from: h, reason: collision with root package name */
    public final long f13268h;

    /* renamed from: i, reason: collision with root package name */
    public final int f13269i;
    public final int j;
    public final int k;

    public h(long j, boolean z5, boolean z6, boolean z7, ArrayList arrayList, long j5, boolean z8, long j7, int i5, int i6, int i10) {
        this.a = j;
        this.f13262b = z5;
        this.f13263c = z6;
        this.f13264d = z7;
        this.f13266f = Collections.unmodifiableList(arrayList);
        this.f13265e = j5;
        this.f13267g = z8;
        this.f13268h = j7;
        this.f13269i = i5;
        this.j = i6;
        this.k = i10;
    }

    public h(Parcel parcel) {
        this.a = parcel.readLong();
        this.f13262b = parcel.readByte() == 1;
        this.f13263c = parcel.readByte() == 1;
        this.f13264d = parcel.readByte() == 1;
        int readInt = parcel.readInt();
        ArrayList arrayList = new ArrayList(readInt);
        for (int i5 = 0; i5 < readInt; i5++) {
            arrayList.add(new g(parcel.readInt(), parcel.readLong()));
        }
        this.f13266f = Collections.unmodifiableList(arrayList);
        this.f13265e = parcel.readLong();
        this.f13267g = parcel.readByte() == 1;
        this.f13268h = parcel.readLong();
        this.f13269i = parcel.readInt();
        this.j = parcel.readInt();
        this.k = parcel.readInt();
    }
}
