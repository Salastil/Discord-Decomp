package vf;

import android.os.Parcel;
import com.google.android.gms.common.api.Status;
import ks.n;

/* loaded from: classes3.dex */
public final class a extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ jg.g f19408g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(jg.g gVar) {
        super("com.google.android.gms.common.api.internal.IStatusCallback", 8);
        this.f19408g = gVar;
    }

    @Override // ag.a
    public final boolean w(int i5, Parcel parcel, Parcel parcel2) {
        if (i5 != 1) {
            return false;
        }
        Status status = (Status) xf.a.a(parcel, Status.CREATOR);
        xf.a.b(parcel);
        n.x(status, null, this.f19408g);
        return true;
    }
}
