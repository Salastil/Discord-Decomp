package hg;

import android.content.Intent;
import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Status;
import ys.l;
import ze.n;

/* loaded from: classes3.dex */
public final class b extends cf.a implements n {
    public static final Parcelable.Creator<b> CREATOR = new gd.a(4);

    /* renamed from: d, reason: collision with root package name */
    public final int f10020d;

    /* renamed from: e, reason: collision with root package name */
    public final int f10021e;

    /* renamed from: i, reason: collision with root package name */
    public final Intent f10022i;

    public b(int i5, int i6, Intent intent) {
        this.f10020d = i5;
        this.f10021e = i6;
        this.f10022i = intent;
    }

    @Override // ze.n
    public final Status a() {
        return this.f10021e == 0 ? Status.f5654w : Status.F;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.H(parcel, 1, 4);
        parcel.writeInt(this.f10020d);
        l.H(parcel, 2, 4);
        parcel.writeInt(this.f10021e);
        l.C(parcel, 3, this.f10022i, i5);
        l.J(I, parcel);
    }
}
