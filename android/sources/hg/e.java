package hg;

import android.os.Parcel;
import android.os.Parcelable;
import com.google.android.gms.common.api.Status;
import java.util.ArrayList;
import java.util.List;
import ys.l;
import ze.n;

/* loaded from: classes3.dex */
public final class e extends cf.a implements n {
    public static final Parcelable.Creator<e> CREATOR = new gd.a(5);

    /* renamed from: d, reason: collision with root package name */
    public final List f10023d;

    /* renamed from: e, reason: collision with root package name */
    public final String f10024e;

    public e(String str, ArrayList arrayList) {
        this.f10023d = arrayList;
        this.f10024e = str;
    }

    @Override // ze.n
    public final Status a() {
        return this.f10024e != null ? Status.f5654w : Status.F;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = l.I(20293, parcel);
        l.E(parcel, 1, this.f10023d);
        l.D(this.f10024e, parcel, 2);
        l.J(I, parcel);
    }
}
